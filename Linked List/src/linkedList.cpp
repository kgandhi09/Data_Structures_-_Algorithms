/*
 * linkedList.cpp
 *
 *  Created on: Nov 9, 2019
 *      Author: kushal
 */

#include "linkedList.h"
#include <stdlib.h>
#include <iostream>
#include <stdbool.h>

using namespace std;

linkedList::linkedList(){
	head = NULL;
	curr = NULL;

}

void linkedList::addNode(int addData, node* np){
	node* n = new node;
	n->next = NULL;
	n->data = addData;
	if(np != NULL){
		curr = np;
		if(curr->next != NULL){
			addNode(addData, np->next);
		}
		curr->next = n;
	}
	else{
		head = n;
	}
}

void linkedList::addNode(int addData){
	addNode(addData, head);
}

void linkedList::delNode(int delData, node* np){
	node* dp = new node;
	if(np->data == delData){
		np->data = np->next->data;
		dp = np->next;
		np->next = np->next->next;

		delete dp;
	}
	else{
		delNode(delData, np->next);
	}
}

void linkedList::delNode(int delData){
	delNode(delData, head);
}

void linkedList::printList(){
	curr = head;
	while(curr != NULL){
		cout << curr->data << endl;
		curr = curr->next;
	}

}
