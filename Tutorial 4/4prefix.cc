#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool operand(char x){
	int diff=x-'0';
	return((diff>=0 && diff<=9)?true:false);
}

int pow(int p,int q){
	int ans=1;
	for(int i=0;i<q;++i){
		ans*=p;
	}
	return ans;
}

char perform(char x,char a,char b){
	int p=a-'0';

	int q=b-'0';
	//cout<<"-->"<<q<<endl;
	int res;
	if(x=='+'){res=p+q;}
	else if(x=='-'){res=p-q;}
	else if(x=='*'){res=p*q;}
	else if(x=='/'){res=p/q;}
	else{res=pow(p,q);}
	 //cout<<res<<endl;
	char ans=(char)(res+'0');
	return ans;
}

int prefix_evaluate(string exp){
	stack<char> s;
	char res;
	int n=exp.length();

	for(int i=n-1;i>=0;--i){
		if(operand(exp[i])){
			s.push(exp[i]);
		}
		else{
			char op1=s.top();s.pop();
			char op2=s.top();s.pop();
			res=perform(exp[i],op1,op2);
			s.push(res);
		}
	}  
	return (res-'0');
}

int main(){
	string exp;
	cin>>exp;
	cout<<prefix_evaluate(exp);
	return 0;
}
