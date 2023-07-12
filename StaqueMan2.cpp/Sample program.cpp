#include<iostream>
#include"DyStack.h"
using namespace std;

int main() {
	//Instantiate DyStack class
	DyStack one;

	//Add contents and create nodes
	cout << "Adding 7 integers to stack.\n";
	one.push(1);
	one.push(2);
	one.push(3);
	one.push(4);
	one.push(5);
	one.push(6);
	one.push(7);

	//Removing 8 items from stack to test if exception is thrown
	cout << "Displaying items now...\n";
	for (int i = 0; i < 8; i++){
		try{
			cout << one.pop() << endl;
		}
		catch (std::exception) {

		}	
	}
		

	return 0;
}