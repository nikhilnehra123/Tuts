#include <iostream>
#include <string>
using namespace std;

#define max 50
class stack{
	char arr[max];
	int top;
public:
	stack (){top= -1;}
	
	int count=0;
	void push(char x){
		if(top== max-1){
			cout<<"overflow";
		}
		else{
			arr[++top]=x;
			++count;
		}
	}
	
	char pop(){
		if(isemptystack()){
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
		if(i>count){
			cout<<"element is not there in stack";
			return '\0';
		}
		return arr[top-i+1];
	}
};

int main(){
	stack s;
	s.push('a'); s.push('b'); s.push('c');
	int i; cin>>i; // ith element from the top of the stack
	cout<<s.peep(i);
	
}
