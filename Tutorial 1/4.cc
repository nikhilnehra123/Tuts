#include <iostream>
using namespace std;

void outputArr(int arr[],int n){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<",";
	}
}

int main(){
	int size=10;
	int A[size];

	for(int i=0;i<size;++i){
		A[i]=10*(i+1);
	}

	int count=0;
	for(int i=0;i<size;++i){
		++count;
		cout<<A[i]<<",";

		if(count==4){
			count=0;
			cout<<endl;
		}
	}
	cout<<endl;
// you can not declare and initialize variable size array at a time like other variables
	int B[10]={0};
	int C[size];

	for(int i=0;i<size;++i){
		C[i]=A[i]+B[i];
	}

	outputArr(C,size);
}