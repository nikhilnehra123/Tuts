#include <iostream>
using namespace std;

#define max 3
class cqueue{
private:	
	int arr[max];
	int front; int rear; int count;
public:
	cqueue(){
		front=rear=count=0;
	}
	
	void add(int x){
		if(count==max){
			cout<<"overflow";
			return;
		}
		arr[rear]=x;
		++count;
		rear=(rear+1)%max;
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
	cout<<cq.empty_cqueue()<<endl;
	cq.add(1);
	cq.add(2);
	cq.add(3);
	cq.add(4);
	cout<<endl<<cq.empty_cqueue()<<endl;
	cout<<cq.deletion()<<endl;
	cout<<cq.deletion()<<endl;
	cout<<cq.deletion()<<endl;
	cout<<cq.deletion()<<endl;
	cout<<cq.empty_cqueue()<<endl;
	cq.add(9);
	return 0;
}
