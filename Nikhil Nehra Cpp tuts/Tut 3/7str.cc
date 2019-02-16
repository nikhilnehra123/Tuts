#include <iostream>
#include <string>
using namespace std;

#define max 50
class queue{
	string arr[max];
	int front; int rear;
public:
	queue(){
		front=0;
		rear=-1;
	}
	
	void add(string x){
		if(rear==(max-1)){
			cout<<"overflow";
		}
		else{
			arr[++rear]=x;
		}
	}	
	
	string remove(){
		if(rear<front){
			//cout<<"underflow";
			return "underflow";
		}
		else{
			string x=arr[front];
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
	q.add("abc");
	q.add("def");
	q.add("ghy");
	q.add("kli");
	cout<<q.underflow()<<",";;
	cout<<q.remove();
	cout<<","<<q.remove()<<",";
	cout<<q.remove()<<",";
	cout<<q.remove()<<",";
	cout<<q.remove()<<",";
	cout<<q.overflow()<<",";
	
	return 0;
}
