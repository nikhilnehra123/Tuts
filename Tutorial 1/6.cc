#include <iostream>
using namespace std;

/*bool is_vow(char x){
	if( x=='a'||x=='A'||
		x=='e'||x=='E'||
		x=='i'||x=='I'||
		x=='o'||x=='O'||
		x=='u'||x=='U')
	{
		return true;
	}

	return false;
}*/

bool is_char(char x){
	if(x>='a' && x<='z' || x>='A' && x<='Z'){
		return true;
	}
	return false;
}

char to_upper(char x){
	return (x>='a' && x<='z') ? 'A'+(x-'a'):x;
}

bool is_vow(char x){

	switch(to_upper(x)){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':return true;

		default: return false;
	}
}

int main(){
	char str[]=" Good Evening";
	char upper_str[100]; 

	int i=0;
	int cnt_char=0;
	int cnt_vow=0;

	while(str[i]!='\0'){

		if(is_char(str[i])){
			++cnt_char;
		}

		if(is_vow(str[i])){
			++cnt_vow;
		}
		
		upper_str[i]=to_upper(str[i]);
		++i;
	
	}
	upper_str[i]='\0';


	cout<<upper_str<<endl<<"cnt_char "<<"-->"<<cnt_char<<endl<<
	      "cnt_vow "<<"-->"<<cnt_vow<<endl;

	cout<<str;      


}