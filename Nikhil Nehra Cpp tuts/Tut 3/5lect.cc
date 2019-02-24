#include <iostream>
using namespace std;

#define max 50
class queue{
	int arr[max];
	int front; int rear;
public:
	queue(){
		front=0;
		rear=0;
	}
	
	void add(int x){
		if(overflow()){
			cout<<"overflow";
		}
		else{
			arr[rear++]=x;
		}
	}	
	
	int remove(){
		if(underflow()){
			cout<<"underflow";
			return 0;
		}
		else{
			int x=arr[front];
			++front;
			return x;
		}
	}

	bool overflow(){
		return(rear==max) ? true: false;
	}

	bool underflow(){
		return ((rear==front)? true: false);
	}
};


int main(){
	queue q;
	q.add(5);
	q.add(15);
	q.add(25);
	q.add(35);
	cout<<q.underflow()<<",";;
	cout<<q.remove()<<",";
	cout<<q.remove()<<",";
	cout<<q.remove()<<",";
	cout<<q.remove()<<",";
	cout<<q.remove()<<",";
	cout<<q.underflow()<<",";
	return 0;
}
