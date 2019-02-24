// conversion of infix to postfix
#include <iostream>
#include <stack>
#include <string>
using namespace std;

char islower(char y){
	if (y>='a' && y<='z'){ return y;}

	else{
		char x='a'+(y-'A');
		return x;
	}
}
// ggfs

bool isalpha(char x){
	return ((islower(x)>='a' && islower(x)<='z') /*|| (x>='A' && x<='Z'))*/? true: false);
}

bool isdigit(char x){
	return ((x>='0' && x<='9')?true:false);
}

bool operand(char x){
	return ((isalpha(x) || isdigit(x))? true :false);
}

bool is_opening_parenthesis(char x){
	return((x=='(')?true:false);
}

bool is_closing_parenthesis(char x){
	return((x==')')?true:false);
}

bool rightassc(char x){
	if(x=='$' || x=='^'){return true;}
	return false;
}

int weight(char x){
	int weg=0;

	switch(x){
		case '+':
		case '-': weg=1; break;

		case '*':
		case '/': weg=2; break;

		case '$':
		case '^': weg=3; 
	}
	return weg;
}

bool hashigherprec(char x, char y){  // returns true if top element in stack has higher precedence than iterating character
	int p= weight(x);
	int q= weight(y);

	if(p>q){return true;}
	else if(p<q){return false;}
	else{
		return(rightassc(x) ?false:true);
	}
}
string infix_postfix(string exp){
	string res;
	stack<char> s;
	
	int n=exp.length();
	for(int i=0;i<n;++i){
		if(operand(exp[i])){
			res.push_back(exp[i]);
		}
		else if(is_opening_parenthesis(exp[i])){
			s.push(exp[i]);
		}
		else if(is_closing_parenthesis(exp[i])){
			while(!s.empty() && !is_opening_parenthesis(s.top())){
				res.push_back(s.top());
				s.pop();
			}
			s.pop();
		}
		else{                                                          // operator
			while(!s.empty() && hashigherprec(s.top(),exp[i])){
				res.push_back(s.top());
				s.pop();
			}
			s.push(exp[i]);
		}
	}
	
	while(!s.empty()){
		res.push_back(s.top());
		s.pop();
	}
	return res;
}

int main(){

	// exp. is infix
	string exp1;  
	cin>>exp1;
	cout<<infix_postfix(exp1)<<endl;

	return 0;
}
