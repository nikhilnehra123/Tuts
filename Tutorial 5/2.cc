#include<iostream>
using namespace std;

class node{
public:
	char info;
	node *link;	
};

class queuell{
private:
	node *front;
	node *rear;
public:
	queuell(){
		front=NULL;
		rear=NULL;
	}
	void add(char x){
		node *temp=new node;
		temp->info=x;
		temp->link=NULL;
		if(rear==NULL){              // first element is inserted
			rear=temp;
			front=temp;
		}
		else{
			rear->link=temp;
			rear=temp;
		}
	}
	
	char remove(){
		node *temp=front;
		char x=temp->info;
		front=front->link;
		delete temp;
		if(front==NULL){rear=NULL; }                  // last element is deleted
		return x;
	}
	
	bool isempty(){
		return ((rear==NULL)? true: false);
	}
	
	~queuell(){
		while(front!=NULL){
			node *next=front->link;
			delete front;
			front=next;
		}
		cout<<" destructor is called";
	}
};
int main(){
	queuell ql;
	ql.isempty()?cout<<"true":cout<<"false";
	ql.add('a');
	ql.add('b');
	ql.add('c');
	cout<<ql.remove();
	cout<<endl;
	cout<<ql.remove();
	ql.isempty()?cout<<"true":cout<<"false";
	return 0;
}
