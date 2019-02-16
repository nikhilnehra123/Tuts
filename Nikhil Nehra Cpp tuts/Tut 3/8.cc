#include <iostream>
using namespace std;

#define max 3
class cqueue{
private:	
	int arr[max];
	int front; int rear; int count;
public:
	cqueue(){
		front=0;
		rear=-1; count=0;
	}
	
	void add(int x){
		if(count==max){
			cout<<"overflow";
			return;
		}
		rear=(rear+1)%max;
		arr[rear]=x;
		++count;
		return;
	}

	int deletion(){
		if(count==0){
			cout<<"underflow";
			return 0;
		}
		int x=arr[front];
		front=(front+1)%max;
		--count;
		return x;
	}

	bool empty_cqueue(){
		return((count==0) ? true: false);
	}
	
};


int main(){
	cqueue cq;
	cout<<cq.empty_cqueue();
	cq.add(1);
	cq.add(2);
	cq.add(3);
	cq.add(4);
	cout<<cq.empty_cqueue();
	cout<<cq.deletion();
	cout<<cq.deletion();
	cout<<cq.deletion();
	cout<<cq.deletion();
	cout<<cq.empty_cqueue();
	return 0;
}
