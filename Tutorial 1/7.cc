#include <iostream>
using namespace std;

int main(){
	char arr_str[][10]={"Mon","Tues","Wed","Thurs","Fri","Sat","Sun"};  // first dimension is alloted based on initialized data
	                                                                // on its own, but second dimension we need to enter must
	
	int n; cin>>n;
	cout<<arr_str[n-1];
}