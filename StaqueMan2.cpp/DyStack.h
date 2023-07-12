//This is the specification file for DyStack a dynamic integer stack
#ifndef  DYSTACK_H
#define  DYSTACK_H

class DyStack {
	//Declare private members
	private:
		struct Node {
			int value;
			Node* next;
		};
		Node* top;
	//Declare public members
	public:
		DyStack() {
			top = nullptr;
		}
		
		//Declare Accessor and Mutators
		void push(int);
		int pop();
		bool isEmpty();

};

#endif // ! DYSTACK_H

