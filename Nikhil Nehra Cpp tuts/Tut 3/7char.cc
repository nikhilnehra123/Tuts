#include <iostream>
using namespace std;

#define max 50
class queue{
	char arr[max];
	int front; int rear;
public:
	queue(){
		front=0;
		rear=-1;
	}
	
	void add(char x){
		if(rear==(max-1)){
			cout<<"overflow";
		}
		else{
			arr[++rear]=x;
		}
	}	
	
	char remove(){
		if(rear<front){
			cout<<"underflow";
			return 'x';
		}
		else{
			char x=arr[front];
			++front;
			return x;
		}
	}
	
	bool overflow(){
		return(rear==(max-1)? true: false);
	}

	bool underflow(){
		return ((rear<front)? true: false);
	}
};


int main(){
	queue q;
	q.add('a');
	q.add('b');
	q.add('c');
	q.add('d');
	cout<<q.underflow()<<",";;
	cout<<q.remove();
	cout<<","<<q.remove()<<",";
	cout<<q.remove()<<",";
	cout<<q.remove()<<",";
	cout<<q.remove()<<",";
	cout<<q.underflow()<<",";
	
	return 0;
}
