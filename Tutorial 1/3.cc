
#include <iostream>
using namespace std;

int main(){
	int A[]={10,20,44,23,-12,34,-67,45,-48,78};

	int size_a=sizeof(A)/sizeof(A[0]);

	for(int i=0;i<size_a;++i){
		cout<<*(A+i)<<",";
	}
	cout<<endl;

	int pos_sum=0;
	for(int i=0;i<size_a;++i){
		if(A[i]>0){
			pos_sum+=A[i];
		}
	}
	cout<<pos_sum<<endl<<"Dynamic Array------->";

	int *arr=new int[size_a] {10,20,44,23,-12,34,-67,45,-48,78};           // Point to be noted

	for(int i=0;i<size_a;++i){
		cout<<*(arr+i)<<",";
	}
	cout<<endl;

	int pos_dyn_sum=0;
	for(int i=0;i<size_a;++i){
		if(*(arr+i)>=0){
			pos_dyn_sum+=*(arr+i);
		}
	}
	cout<<pos_dyn_sum<<endl;



}