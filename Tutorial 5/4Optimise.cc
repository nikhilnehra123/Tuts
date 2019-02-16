// using head as last node
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
		temp->link=head->link;
		head->link=temp;		
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
		temp->link=head->link;
		head->link=temp;
		head=temp;

	}

	void rightnode(node *p,int x){
		node *temp=new node;
		temp->info=x;
		temp->link=p->link;
		p->link=temp;
	}

	int traversal(){
		int count=0;

		if(head==NULL){
			return 0;
		}
		
		node *temp=head->link;
		while(temp!=head){
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
		if(head!=NULL){
			node *first=head->link;
			while(first!=head){
				node *temp=first;
				first=first->link;
				head->link=first;
				delete temp;
			}
			delete head;
		}

		// but there is not any need to maintain Cll Struct. during destruction,as we are not going to use further

		/*if(head!=NULL){
			node *first=head->link;
			while(first!=head){
				node *temp=first;
				first=first->link;
				delete temp;
			}
			delete first;
		}*/
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