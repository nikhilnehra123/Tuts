#include <iostream>
#include <string>
using namespace std;

#define max 50
class stack{
	char arr[max];
	int top;
public:
	stack s(){top= -1;}
	
	void push(char x){
		if(top== max-1){
			cout<<"overflow";
		}
		else{
			arr[++top]=x;
		}
	}
	
	char pop(){
		if(top==-1){
			cout<<"underflow";
			return '\0';
		}
		else{
			char x=arr[top--];
			return x;
		}
	}
	
	bool isemptystack(){
		return (top==-1) ? true :false;
	}
	
	char peep(int i){
		return arr[top-i+1];
	}
};




int main(){
	
	stack s;
	int i; cin>>i; // ith element from the top of the stack
	cout<<s.peep(i);
	
}
