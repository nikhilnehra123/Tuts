#include<iostream>
#include <string>
using namespace std;

class node{
public:
	char info;
	node *link;	
};

class stackll{
private:
	node *top;

public:
	stackll(){ top=NULL; }

	void push(char x){
		node* temp=new node;
		temp->info=x;
		temp->link=top;
		top=temp;
	}


	char pop(){
		if(top==NULL){ 
			cout<<"no element is available for pop";
			return 'x';
		}
		node *temp=top;
		top=top->link;
		char x=temp->info;
		delete temp;
		return x;
	}

	bool emptystack(){
		return ((top==NULL) ? true :false);
	}

	
	~ stackll(){
		while(!emptystack()){
			node *next=top->link;
			delete top;
			top=next;
		}
		cout<<endl<<"destructor is called";
	}
};

/*string revstr(string inp){
	int n=inp.length();
	stackll ss;

	for(int i=0;i<n;++i){
		ss.push(inp[i]);
	}

	string res;
	while(!ss.emptystack()){
		res.push_back(ss.pop());
	}
	return res;
}*/

int main(){
	string inp;
	cin>>inp;

	//string res=revstr(inp);	
	int n=inp.length();
	stackll ss;

	for(int i=0;i<n;++i){
		ss.push(inp[i]);
	}

	string res;
	while(!ss.emptystack()){
		res.push_back(ss.pop());
	}
	
	cout<<res<<endl;

	if(res==inp ){
		cout<<"string is palindrome";
	}
	else{
		cout<<"string is  not palindrome";
	};
	return 0;
}



	
	/*stackll ss;
	ss.push('a');
	ss.push('b');
	ss.push('c');
	ss.push('d');
	ss.push('e');
	cout<<ss.pop();*/

/*if (top==NULL)  
			{cout<<"empty stack\n";
					 	return true;}
		else{
			cout<<"not-empty stack\n";
			return false;
		}*/