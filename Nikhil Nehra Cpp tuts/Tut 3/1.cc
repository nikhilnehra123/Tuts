#include <iostream>
#include <string>
using namespace std;

#define max 50
class stack{
	char arr[max];
	int top;
public:
	stack (){top= -1;}
	
	void push(char x){
		if(top== max-1){
			cout<<"overflow";
		}
		else{
			arr[++top]=x;
		}
	}
	
	char pop(){
		if(isemptystack()){
			cout<<"underflow";
			return '0';
		}
		else{
			char x=arr[top--];
			return x;
		}
	}
	
	bool isemptystack(){
		return (top==-1) ? true :false;
	}
};

int main(){
	string s1;
	cin>>s1;
	
	stack s;
	string s2;
	for(int i=0;i<s1.length();++i){
		s.push(s1[i]);
	}
	
	for(int i=0;i<s1.length();++i){
		s2.push_back(s.pop());
	}

	cout<<s2<<endl;
	(s1==s2 )?cout<<"palindrome":cout<<"not palindome"; 
}
