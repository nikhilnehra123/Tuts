// using head as first node
#include<iostream>
using namespace std;

class node{
public:
	int info;
	node *link;	
};

class llcircular{
private:
	node *head;
public:
	llcircular(){ head=NULL;}

	void ins_beg(int x){
		node *temp=new node;
		temp->info=x;
		// no node is already there
		if(head==NULL){
			temp->link=temp;
			head=temp;
			return;
		}
		temp->link=head;

		// find the last node
		node *k=head;
		while(k->link!=head){
			k=k->link;
		}
		k->link=temp;
		head=temp;
	}	

	void ins_end(int x){
		node *temp=new node;
		temp->info=x;
		// no node is already there
		if(head==NULL){
			temp->link=temp;
			head=temp;
			return;
		}

		temp->link=head;
		node *k=head;
		while(k->link!=head){
			k=k->link;
		}
		k->link=temp;
	}

	void rightnode(node *p,int x){
		node *temp=new node;
		temp->info=x;
		temp->link=p->link;
		p->link=temp;
	}

	int traversal(){
		node *temp=head;
		int count=0;

		if(head==NULL){
			return 0;
		}
		
		else if(head->link==head){
			cout<<head->info;
			return 1;
		}
	
		while(temp->link!=head){
			cout<<temp->info<<",";
			++count;
			temp=temp->link;
		}
		cout<<temp->info<<endl;
		return (count+1);
	}

	 // optimize N^2
	~llcircular(){
		// during destuction, my structure follows circular ll.
		// find out last node, actually last is giving last node
		/*if(head!=NULL){
			node *last=head;
			while(last->link!=head){
				last=last->link;
			}

			while(head->link!=head){
				node *start=head;
				head=head->link;
				last->link=head;
				delete start;
			}
			delete head;
		}*/

		// but there is not any need to maintain Cll Struct. during destruction,as we are not going to use further

		if(head!=NULL){
			node *last=head;
			while(last->link!=head){
				last=last->link;
			}
			while(head!=last){
				node *temp=head;
				head=head->link;
				delete temp;
			}
			delete last;
		}
		cout<<endl<<"destructor call;";
	}
};

int main(){
	llcircular lc;
	lc.ins_beg(1);
	//cout << "aa" << endl;
	lc.ins_beg(2);
	lc.ins_end(3);
	lc.ins_end(4);
	cout<<lc.traversal();
    return 0;
}