#include<iostream>
using namespace std;


#define max 50   // so max will be constant throughout.

class stack{
	char s[max];
	int top;

public:
	stack() {top=-1;}

	void push(char x){
		if(top==(max-1)){cout<<"overflow";}

		else{
			s[++top]=x;
		}
	}

	char pop(){
		if(top==-1){
			cout<<"underflow";
			return 0;
		}
		else{
			char x= s[top--];
			return x;
		}
	}

	bool emptystack(){
		return (top==-1)? true:false;
	}

};

string invertstr(char str[]){
	int i=0;
	stack s1;
	while(str[i]!='\0'){
		s1.push(str[i]);
		++i;
	}

	int j=0;
	char output[50];
	while(!s1.emptystack()){
		output[j]=s1.pop();
		++j;
	}
	cout<<;
}

int main(){
	stack s1;
	/*s1.push('a');
	s1.push('b');
	s1.push('c');
	//s1.push(100);
	cout<<s1.emptystack()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.emptystack();*/
	
    // to invert the string
	char str[50];
	cin>>str;
	cout<<invertstr(str);
	
	// to check whether string is palindrome or not
	//str==invertstr(str) ? cout<<"true" :cout<<"false";
	return 0;
}