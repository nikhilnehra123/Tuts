#include <iostream>
using namespace std;

int main(){
	int A[]={10,30,40,50,70,64,43,34,56,89};
	int B[]={10,50,40,78,89,23,37,57,67};

	int size_a=sizeof(A)/sizeof(A[0]);
	int size_b=sizeof(B)/sizeof(B[0]);

	// search every element of A into B
	for(int i=0;i<size_a;++i){
		int target=A[i];
		int count=0;

		for(int j=0;j<size_b;++j){
			if(target==B[j]){
				count=!count;
				break;
			}
		}
		if(!count)cout<<target<<",";
	}
}