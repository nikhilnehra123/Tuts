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

	void addf(int x){
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

	void addb(int x){
		
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

	int deletionb(){
		if(front>rear){
			cout<<"underflow;";
			return 0;
		}
		int x=arr[front];
		++front;
		return x;
	}

	int deletionf(){
		if(front>rear){
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
	dq.addb(1);
	dq.addf(2);
	dq.addb(3);
	dq.addf(4);
	cout<<dq.emptydeque()<<endl;
	cout<<dq.deletionb()<<endl;
	cout<<dq.deletionf()<<endl;
	cout<<dq.emptydeque()<<endl;
	cout<<dq.deletionf()<<endl;
	cout<<dq.deletionb()<<endl;
	cout<<dq.emptydeque()<<endl;
	return 0;
}