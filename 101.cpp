#include <iostream>
using namespace std;
class Stack{
	int *Array;
	int size;
	int top;
public:
	Stack(int s){
		size = s;
		Array = new int[size + 1];
		top = 0;
	}
	bool empty(){
		if(top == 0){
			return true;
		}
		else{
			return false;
		}
	}
	bool full(){
		if(top == size){
			return true;
		}
		else{
			return false;
		}
	}
	void push(int data){
		if(!full()){
			top++;
			Array[top] = data;
		}
		else {
			printf("Stack is full\n");
		}
	}
	int pop(){
		if(!empty()){
			int temp = Array[top];
			top--;
			return temp;
		}
		printf("Stack is empty\n");
		return -1;
	}
	void print(){
		printf("Stack size: %d\n", size);
        printf("Number of elements: %d\n", top);
        printf("Stack contents: ");
		for(int i = 1; i <= top; i++){
			cout << Array[i] << " ";
		}
		cout << endl;
	}

};
 int main(){
 	int num, i, number;
 	cout << "Enter stack size: ";
 	scanf("%d", &num);
 	Stack s(num);
 	for(i=0;i<num;i++){
 		printf("Enter numter %d: ", i+1);
 		scanf("%d", &number);
 		s.push(number);
	 }
	 
 	s.print();
 	return 0;
 }






















