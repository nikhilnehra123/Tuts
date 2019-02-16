#include <iostream>
using namespace std;

void inputArr(int arr[],int n){
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
}

void outputArr(int arr[],int n){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<",";
	}
}

int sum(int arr1[],int n){
	int ans=0;
	for(int i=0;i<n;++i){
		ans+=arr1[i];
	}
	return ans;
}

void bubble_sort(int arr1[],int n){
	for(int i=0;i<n-1;++i){
		for(int j=0;j<n-1-i;++j){
			if(arr1[j]>arr1[j+1]){
				swap(arr1[j],arr1[j+1]);
			}
		}
	}
}

void store(int arr1[],int arr2[],int n){
	for(int i=0;i<n;++i){
		arr2[i]=arr1[i];
	}
}

void insert_reverse(int arr1[],int arr3[],int n){
	for(int i=0;i<n;++i){
		arr3[n-1-i]=arr1[i];
	}
}

int main(){
	int n; cin>>n; // size of arr1
	int arr1[1000];
	inputArr(arr1,n);
	
	int ans=sum(arr1,n);
	
	bubble_sort(arr1,n);
	int arr2[1000];
	store(arr1,arr2,n);

	int arr3[1000];
	insert_reverse(arr1,arr3,n);

	cout<<ans<<endl;
	outputArr(arr2,n);
	cout<<endl;
	outputArr(arr3,n);

	return 0;
}