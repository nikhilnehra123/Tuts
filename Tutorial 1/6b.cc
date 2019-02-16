#include <iostream>
using namespace std;

bool is_char(char x){
	if(x>='A' && x<='Z'){
		return true;
	}
	return false;
}

bool is_vow(char x){
	switch(x){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':return true;
	}
	return false;
}

int main(){
	char str[]=" Good Evening";

	// first convert string into upper case

	int i=0;
	while(str[i]!='\0'){
		str[i]=(str[i]>='a' && str[i]<='z') ? 'A'+(str[i]-'a'):str[i];
		++i;
	}

	cout<<str<<endl;

	int j=0; int char_cnt=0; int vow_cnt=0;
	while(str[j]!='\0'){
		if(is_char(str[j]))++char_cnt;

		if(is_vow(str[j]))++vow_cnt;

		++j;
	}

	cout<<char_cnt<<endl<<vow_cnt;
}