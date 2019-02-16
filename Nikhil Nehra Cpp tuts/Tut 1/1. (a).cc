# include <iostream>
using namespace std;

void inputArr(int arr1[],int n){
	for(int i=0; i<n;++i){
		cin>>arr1[i];
	}
}

int sum_elements(int arr1[],int n){
	int ans=0;
	for(int i=0;i<n;++i){
		ans+=arr1[i];
	}
	return ans;
}

void sort(int arr1[],int arr2[],int n){
	// find the shortest element for each position
	int min=0;
	for(int i=0;i<n;++i){
		int closet=arr1[0]-min;
		for(int j=1;j<n;++j){
			if((arr1[j]-min)<closet && arr1[j]!=min){
				closet=arr1[j]-min;
			}
		}
		arr2[i]=closet+min;
		min=closet;
	}
}

void reverse_arr(int arr1[],int arr3[],int n){
	for(int i=0;i<n;++i){
		arr3[n-1-i]=arr1[i];
	}
}

void outputArr(int arr[],int n){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<"","";
	}
}
int main(){
	int n; cin>>n;
	int arr1[100];
	inputArr(arr1,n);
	int ans=sum_elements(arr1,n);
	int arr2[100];
	sort(arr1,arr2,n);
	int arr3[100];
	reverse_arr(arr1,arr3,n);
	outputArr(arr2,n);
	
}

