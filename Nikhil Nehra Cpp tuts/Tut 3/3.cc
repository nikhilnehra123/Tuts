#include <iostream>
#include <string>
using namespace std;

#define max 5
class twostack{
	char arr[max];
	int top1; int top2;
public:
	// 2nd stack is going to start from the middle of array
	twostack (){top1= -1;top2=(max/2)-1;}
	
	void push1(char x){
		if(top1== (max/2)-1){
			cout<<"overflow in stack 1";
		}
		else{
			arr[++top1]=x;
		}
	}
	
	char pop1(){
		if(isemptystack1()){
			cout<<"underflow in stack 1";
			return '\0';
		}
		else{
			char x=arr[top1--];
			return x;
		}
	}
	
	bool isemptystack1(){
		return (top1==-1) ? true :false;
	}
	
 	void push2(char x){
		if(top2== max-1){
			cout<<"overflowin stack 2";
		}
		else{
			arr[++top2]=x;
		}
	}
	
	char pop2(){
		if(isemptystack2()){
			cout<<"underflow in stack 2";
			return '\0';
		}
		else{
			char x=arr[top2--];
			return x;
		}
	}
	
	bool isemptystack2(){
		return (top2==(max/2)-1) ? true :false;
	}
};

int main(){
	twostack s;
	s.push2('a'); s.push2('b'); s.push2('c');
	s.push1('d'); s.push1('e'); s.push1('f');
	cout<<endl<<s.pop1()<<endl;
	cout<<s.pop1()<<endl;
	cout<<s.pop1()<<endl;
	cout<<s.pop2()<<endl;
	cout<<s.pop2()<<endl;
	cout<<s.pop2()<<endl;
	cout<<s.pop2();
	return 0;
}
