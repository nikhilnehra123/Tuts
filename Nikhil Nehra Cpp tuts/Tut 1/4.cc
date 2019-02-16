# include <iostream>
using namespace std;

int main(){
	int size=10;
	int a[size];
	
	
	for(int i=1;i<=size;++i){
		a[i-1]=10*i;
	}
	
	int count=0;
	for(int i=0;i<size;++i){
		
		cout<<a[i]<<",";
		++count;
		if(count==4){
			count=0;
			cout<<endl;
		}
	}
	
	int b[size];
	
	int c[size];
	
	for(int i=0;i<size;++i){
		c[i]=a[i]+b[i];
	}
}
