#include<iostream>
using namespace std;

class node{
public:
	int info;
	node *link;	
};

class linkedlist{
private:
	node *head;
public:
	linkedlist(){ head=NULL;}
	
	void ins_beg(int x){
		node *temp=new node;
		temp->info=x;
		temp->link=head;
		head=temp;
	}	
	
	void ins_end(int x){
		node *k=new node;
		k->info=x;
		k->link=NULL;
		
		if(head==NULL){
			head=k;
		}
		else{
			node *temp=head;
			while(temp->link!=NULL){
				temp=temp->link;
			}
			temp->link=k;
		}
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
		
		while(temp!=NULL){
			++count;
			cout<<temp->info<<",";
			temp=temp->link;
		}
		cout<<endl;
		return count;
	}
	
	~linkedlist(){
		
		while(head!=NULL){
			node *next=head->link;
			delete head;
			head=next;
		}
		cout<<" destructor is called";
	}
};

int main(){
	linkedlist ll;
	ll.ins_beg(1);
	ll.ins_beg(2);
	ll.ins_end(4);
	ll.ins_end(5);
	cout<<ll.traversal();
	return 0;
}
