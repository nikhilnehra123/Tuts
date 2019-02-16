# include <iostream>
using namespace std;

int main(){
	int a[]={10,20,44,23,-12,34,-67,45,-48,78};
	
	int size=sizeof(a)/sizeof(*a);
	
	/*for(int i=0;i<size;++i){
		cout<<(*(a+i))<<",";
	}*/
	
	/*
	int ans=0;
	for(int i=0;i<size;++i){
		if(a[i]>0){
			ans+=a[i];
		}
	}
	cout<<ans;
	*/
	
	int *b=new int [size];
	
	for(int i=0;i<size;++i){
		*(b+i)=a[i];
	}
	
	//cout<<b[1];
	
	/*for(int i=0;i<size;++i){
		cout<<(*(b+i))<<",";
	}*/
	
	
	int ans=0;
	for(int i=0;i<size;++i){
		if(b[i]>0){
			ans+=b[i];
		}
	}
	cout<<ans;
	
	
}	
