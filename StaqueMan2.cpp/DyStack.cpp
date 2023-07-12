//This is the implementation file for the Dystack(Dynamic Stack) class
#include<iostream>
#include"DyStack.h"
#include<exception>
using namespace std;

void DyStack::push(int newval) {
	//Create new node struct
	Node* newNode;

	//Initialize new node
	newNode = new Node;
	newNode->value = newval;

	//Check is stack has at least one element set new element as top if not
	if (!top) {
		top = newNode;
		top->next = nullptr;
	}	
	else {
		newNode->next = top;
		top = newNode;
	}
}

int DyStack::pop() {
	//Create variables to store values in temporarily
	int temp;
	Node* tempr;
	//Check is array is empty, display error message, and throw exception if it is else return value at top
	if (isEmpty()) {
		cout << "The stack is empty.\n";
		throw std::exception("Stack is Empty");
	}
	else {
		temp = top->value;
		tempr = top;
		top = top->next;
		delete tempr;
	}
	//return value
	return temp;
}

bool DyStack::isEmpty() {
	//Check if top is empty, return true if it is, return false if it is not
	if (!top)
		return true;
	return false;
}