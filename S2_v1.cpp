#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
	stack <char> c;
	int i;
	string bracket;
	cin >> bracket;
	for(i=0;i<bracket.length();i++){
		if(bracket[i] == '('){
			c.push('(');
		}
		else if(bracket[i] == ')'){
			if(c.empty()){
				cout << "Error";
				return 0;
			}
			else{
				c.pop();
			}
		}
	}
	
	if(c.empty()){
		cout << "Pass";
	} else {
		cout << "Error";
	}
	
	return 0;
}
