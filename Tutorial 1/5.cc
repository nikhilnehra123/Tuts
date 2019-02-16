#include <iostream>
using namespace std;

void inputArr(int arr[][100],int row, int col){
	for(int i=0;i<row;++i){
		for(int j=0;j<col;++j){
			cin>>arr[i][j];
		}
	}
}

void outputArr(int arr[][100],int row, int col){
	for(int i=0;i<col;++i){
		for(int j=0;j<row;++j){
			cout<<arr[j][i]<<",";
		}
		cout<<endl;
	}
}

void col_address(int arr[][100],int row, int col){
	for(int i=0;i<col;++i){
		for(int j=0;j<row;++j){
			cout<<(arr+(col*j)+i)<<",";
		}
		cout<<endl;
	}
}

void row_address(int arr[][100],int row, int col){
	for(int i=0;i<row;++i){
		for(int j=0;j<col;++j){
			cout<<(arr+j+(i*col))<<",";
		}
		cout<<endl;
	}
}

int main(){
	int arr[100][100];
	int row; int col;
	cin>>row>>col;

	inputArr(arr,row,col);

	outputArr(arr,row,col);

	row_address(arr,row,col);
	cout<<"change---->";
	col_address(arr,row,col);

	

	
}