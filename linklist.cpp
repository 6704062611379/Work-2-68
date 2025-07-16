#include <iostream>
using namespace std;

class Node {
public:
	Node *next;
	int value;
	Node(int value){
		this.value = value;
		this.next = nullptr;
	}
};

void printList(Node *n){
	while(n != nullptr){
		cout << n->value << " ";
		n = n->next;
	}
}
