#include <iostream>
#include <string>
using namespace std;

#define max 50
class stack{
	float arr[max];
	int top;
public:
	stack s(){top= max;}
	
	void push(float x){
		if(top== max-1){
			cout<<"overflow";
		}
		else{
			arr[++top]=x;
		}
	}
	
	float pop(){
		if(top==-1){
			cout<<"underflow";
			return 0;
		}
		else{
			float x=arr[top--];
			return x;
		}
	}
	
	bool is_underflow(){
		return (top<=-1)?true:false;
	}
	
	bool is_overflow(){
		return (top>=max-1)?true:false;
	}
	
	bool isemptystack(){
		return (top==-1) ? true :false;
	}
};

int main(){
	stack s;
}
