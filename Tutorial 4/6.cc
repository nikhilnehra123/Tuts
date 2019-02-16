#include <iostream>
using namespace std;

int count=0;
void printhanoistep(int n,char src,char dest,char helper){
	if(n==0){
		++count;
		return;};
	
	
	printhanoistep(n-1,src,helper,dest);
	cout<<"step"<<count<<":"<<n<<"-->"<<src<<"-->"<<dest<<endl;
	printhanoistep(n-1,helper,dest,src);
}

int main(){
	int n; cin>>n;
	printhanoistep(n,'A','B','C');
	return 0;
}
