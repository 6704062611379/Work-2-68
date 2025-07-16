#include <iostream>
using namespace std;
class Queue{
public:
	int Array[6];
	int size = 4;
	int front = 1;
	int rear = 0;
	
	bool empty(){
		if(front > rear){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	bool full(){
		if(rear == size){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	void emqueue(int data){
		if(!full()){
			rear++;
			Array[rear] = data;
		}
	}
	
	int dequeue(){
		if(!empty()){
			int temp = Array[front];
			front++;
			return temp;
		}
		return -1;
	}
	
	void print(){
		int i;
		cout << "Queue ";
		for(i=front;i<=rear;i++){
			cout << Array[i] << "";
		}
		cout << endl;
	}
	
};

int main(){
	Queue q;
	q.emqueue(1);
	cout << "Enqueue 1\t";
	q.print();
	q.emqueue(2);
	cout << "Enqueue 2\t";
	q.print();
	q.emqueue(3);
	cout << "Enqueue 3\t";
	q.print();
	q.emqueue(4);
	cout << "Enqueue 4\t";
	q.print();
	q.emqueue(5);
	cout << "Enqueue 5\t";
	q.print();
	
	///////////////////////////////////
	
	cout << "Dequeue\t";
	cout << q.dequeue() << "\t";
	q.print();
	
}





