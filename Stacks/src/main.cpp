/*
 * main.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: kushal
 */

#include "stacks.h"

int main (int argc, char** argv){

	stack test;

	test.push("one", 1);
	test.push("two", 2);
	test.push("three", 3);
	test.push("four", 4);
	test.push("five", 5);

	test.printStack();

	test.pop();
	test.pop();
	test.pop();

	cout<< "After Popping " << endl;

	test.printStack();
}
