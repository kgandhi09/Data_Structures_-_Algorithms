/*
 * stacks.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: kushal
 */

#include "stacks.h"

stack::stack() {
	stackPtr = NULL;
}

stack::~stack() {
	item* p1;
	item* p2;

	p1 = stackPtr;

	while (p1 != NULL) {
		p2 = p1;
		p1 = p1->prev;
		p2->prev = NULL;
		delete p2;
	}
}

void stack::push(string name, int value) {
	item* n = new item;

	n->name = name;
	n->value = value;

	if(stackPtr == NULL){
		stackPtr = n;
		stackPtr->prev = NULL;
	}
	else{
		n->prev = stackPtr;
		stackPtr = n;
	}
}

void stack::readItem(item* r){
	cout << "--------------------\n";
	cout << "name : " << r->name << endl;
	cout << "value : " << r->value << endl;
	cout << "--------------------\n";
}

void stack::pop(){
	item* n = new item;
	if(stackPtr == NULL){
		cout <<" Stack is empty!\n";
	}
	else{
		n = stackPtr;
		//readItem(n);
		stackPtr = stackPtr->prev;
		n->prev = NULL;
		delete n;
	}
}

void stack::printStack(item* r){
	item* n = new item;
	n = r;

	if(n != NULL){
		readItem(n);
		printStack(n->prev);
	}
}

void stack::printStack(){
	printStack(stackPtr);
}
