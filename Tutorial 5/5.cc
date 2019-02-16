#include<iostream>
using namespace std;

class node{
public:
	int info;
	node *link;	
};

class ordll{
private:
	node *head;
public:
	ordll(){ head=NULL;}

	void push(int x){
		node *temp=new node;
		temp->info=x;

		if(head==NULL){                // no node is there
			temp->link=NULL;
			head=temp;
			return;
		}
		
		if(x<=(head->info)){   // but ll should be ordered
			temp->link=head;   // if the element is smallest in order, insert in front
			head=temp;
			return;
		}

		//else we have to look for position to insert & header remains same
		else{
			node *k=head; // we have to find that node on the left of it i am going to insert new node
			if(k->link!=NULL){
				// if more than one node is there
				while(x>(k->link->info)){
					k=k->link;
					// if we reach to last node
					if(k->link==NULL) break;
				}
			}
			// intermediate node
			temp->link=k->link;
			k->link=temp;
			return;

		}
	}

	int pop(){
		if(head==NULL){
			cout<<"no element is available;";
			return 0;
		}
		node *temp=head;
		head=head->link;
		int k=temp->info;
		delete temp;
		return k;
	}

	bool emptyorderll(){
			return((head==NULL)?true:false);
	}

	~ ordll(){
		while(head!=NULL){
			node *temp=head;
			head=head->link;
			delete temp;
		}
		cout<<endl<<"destructor call;";
	}	
		
};

int main(){
	ordll ls;
	ls.push(2);
	//ls.push(1);
	//ls.push(0);
	//ls.push(9);
	cout<<ls.pop()<<","<<ls.pop()<<endl;   // point to be noted
	//cout<<ls.emptyorderll();
	return 0;
}