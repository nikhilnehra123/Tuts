#include <iostream>
using namespace std;

#define max 5
class twostack{
private:	
	int arr[max];
	int top1; int top2;
public:
	twostack (){top1=-1;top2=max;}

	void push1(int x){
		if(top1==max-1 || (top2-top1)==1){
			cout<<"overflow in stack 1";
		}
		else{
			arr[++top1]=x;
		}
	}

	void push2(int x){
		if(top2==0 || (top2-top1)==1){
			cout<<"overflow in stack 2";
		}
		else{
			arr[--top2]=x;
		}
	}

	int pop1(){
		if(isemptystack1()){
			cout<<"underflow in stack 1";
		}

		else{
			int x=arr[top1--];
			return x;
		}
	}

	int pop2(){
		if(isemptystack2()){
			cout<<"underflow in stack 2";
		}

		else{
			int x=arr[top2++];
			return x;
		}
	}

	bool isemptystack1(){
		return ((top1==-1)? true:false);
	}

	bool isemptystack2(){
		return (top2==max)?true:false;
	}

};

int main(){
	twostack ts;
	ts.push1(1);
	ts.push1(2);
	ts.push1(3);
	ts.push2(4);
	ts.push2(5);
	ts.push2(5);
	cout<<endl<<ts.pop1()<<endl;
	cout<<ts.pop2()<<endl;
	cout<<ts.pop2()<<endl;
}
