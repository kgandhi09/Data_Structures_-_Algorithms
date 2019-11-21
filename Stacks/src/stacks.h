/*
 * stacks.h
 *
 *  Created on: Nov 21, 2019
 *      Author: kushal
 */

#ifndef STACKS_H_
#define STACKS_H_

//#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <iostream>

using namespace std;

class stack{
private:
	struct item {
		string name;
		int value;
		item* prev;
	};

	item* stackPtr;
	void printStack(item* n);
public:
	void push(string name, int value);
	void pop();
	void readItem(item* r);
	void printStack();
	stack();
	~stack();
};



#endif /* STACKS_H_ */
