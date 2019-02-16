#include <iostream>
#include <string>
using namespace std;

#define max 50
class twostack{
	char arr[max];
	int top1; int top2;
public:
	twostack s1(){top1= -1;}
	
	void push1(char x){
		if(top1== (max/2)-1){
			cout<<"overflow";
		}
		else{
			arr[++top1]=x;
		}
	}
	
	char pop1(){
		if(top1==-1){
			cout<<"underflow";
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
	
	twostack s2(){top2=(max/2)-1;}        // 2nd stack is going to start from the middle of array
	
	void push2(char x){
		if(top2== max-1){
			cout<<"overflow";
		}
		else{
			arr[++top2]=x;
		}
	}
	
	char pop2(){
		if(top2==(max/2)-1){
			cout<<"underflow";
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
	twostack s1;
	twostack s2;
}
