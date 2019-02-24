# include <iostream>
using namespace std;

int main(){
	int A[]={10,30,40,50,70,64,43,34,56,89};
	int B[]={10,50,40,78,89,23,37,57,67};
	
	int size_a=sizeof(A)/sizeof(*A);
	int size_B=sizeof(B)/sizeof(*B);
	
	for(int i=0;i<size_a;++i){
		int ele=A[i];
		for(int j=0;j<size_B;++j){
			if(ele==B[j]){
				break;
			}
			
			if(j==(size_B-1)){
				cout<<ele<<",";
			}
		}
	}
}
