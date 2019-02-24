#include <iostream>
using namespace std;

#define max 50
class stack{
	float arr[max];
	int top;
public:
	stack (){top= max;}
	
	void push(float x){
		if(is_overflow()){
			cout<<"overflow";
		}
		else{
			arr[--top]=x;
		}
	}
	
	float pop(){
		if(is_underflow()){
			cout<<"underflow";
			return 0;
		}
		else{
			float x=arr[top++];
			return x;
		}
	}
	
	bool is_underflow(){
		return (top==max)?true:false;
	}
	
	bool is_overflow(){
		return (top==0)?true:false;
	}
};

int main(){
	stack s;
	s.push(3.71);
	s.push(3.91);
	s.push(3.31);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop();
}
