#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack <int> a;
	int x;
	char c;
	while(1){
		cin >> c;
		if(c == 'U'){
			cin >> x;
			a.push(x);
		}
		else if(c == 'P'){
			stack <int> temp1 = a;
			stack <int> temp2;
			cout << "";
			
			while (!temp1.empty()){
				temp2.push(temp1.top());
				temp1.pop();
			}
			while (!temp2.empty()){
				cout << temp2.top() << " ";
				temp2.pop();
			}
			
			cout << endl; 
		}
		
		else if(c == 'O'){
			if(a.empty()){
				cout << "-1" << endl;
			}
			else{
				cout << a.top() << endl;
				a.pop();
			}
		}
		
		else if(c == 'T'){
			cout << a.top() << endl;
		}
		else if(c == 'N'){
			cout << a.size() << endl;
		}
		else if (c == 'X'){
			break;
		}
	}
}


