#include <iostream>
using namespace std;
class Queue{
public:
	int Array[6];
	int size = 4;
	int front = -1;
	int rear = -1;
	
	bool empty(){
		return front == -1;
	}
	
	bool full(){
		if((rear + 1) % size == front){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	void emqueue(int data){
		if(!full()){
			if(empty()){
				front = 0;
			}
			rear = (rear + 1) % size;
			Array[rear] = data;
		}
	}
	
	int dequeue(){
		if(!empty()){
			int temp = Array[front];
			front = (front + 1) % size;
			return temp;
		}
		return -1;
	}
	
	void print(){
		int i;
		cout << "Queue: ";
		if(front <= rear){
			for(i=front;i<=rear;i++){
				cout << Array[i] << " ";
			}
			cout << endl;	
		}
		else{
			for(int i = front; i < size; i++){
				cout << Array[i] << " ";
			}
			for(int i = 0; i <= rear ; i++){
				cout << Array[i] << " ";
			}
		}
		
	}
	
};

int main(){
	Queue q;
	int i;
	for(i=0;i<=5;i++){
		cout << "Enqueue " << i << " ";
		q.emqueue(i);
		q.print();
	}
	/*q.emqueue(1);
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
	q.print();*/
	
	///////////////////////////////////
	
	cout << "Dequeue\t ";
	cout << q.dequeue() << "\t";
	q.print();
	cout << "Dequeue\t ";
	cout << q.dequeue() << "\t";
	q.print();
	
	cout << "Enqueue " << endl;
	q.emqueue(99);
	q.print();
	
	return 0;
}





