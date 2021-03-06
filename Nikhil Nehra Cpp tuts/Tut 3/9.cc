#include <iostream>
using namespace std;

# define max 3
class deque{
private:
	int arr[max];
	int front; int rear;
public:
	deque (){
		front=0; rear=-1;
	}

	void addfront(int x){
		if((rear-front)==(max-1)){
			cout<<"overflow";
			return;
		}
		
		else if(rear<(max-1)){
			arr[++rear]=x;
		}

		else{
			for(int i=front;i<=rear;++i){
				arr[i-1]=arr[i];
			}
			--front;
			arr[rear]=x;
		}
	}

	void addback(int x){
		
		if((rear-front)==(max-1)){
			cout<<"overflow";
			return;
		}

		else if(front>0 && front<=rear){
			arr[--front]=x;
		}

		else if(rear<front){
			arr[++rear]=x;
		}
		else{
			for(int i=rear;i>=front;--i){
				arr[i+1]=arr[i];
			}
			++rear;
			//cout<<"check \n";
			arr[front]=x;
		}
	}

	int deletionback(){
		if(emptydeque()){
			cout<<"underflow;";
			return 0;
		}
		int x=arr[front];
		++front;
		return x;
	}

	int deletionfront(){
		if(emptydeque()){
			cout<<"underflow;";
			return 0;
		}
		int x=arr[rear];
		--rear;
		return x;
	}

	bool emptydeque(){
		return((front>rear)?true:false);
	}
};

int main(){
	deque dq;
	dq.addback(1);
	dq.addfront(2);
	dq.addback(3);
	dq.addfront(4);
	cout<<endl<<dq.emptydeque()<<endl;
	cout<<dq.deletionback()<<endl;
	cout<<dq.deletionfront()<<endl;
	cout<<dq.emptydeque()<<endl;
	cout<<dq.deletionfront()<<endl;
	cout<<dq.deletionback()<<endl;
	cout<<dq.emptydeque()<<endl;
	return 0;
}