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
	temp = NULL;

}

void linkedList::addNode(int addData){
	node* n = new node;
	n->next = NULL;
	n->data = addData;
	if(head != NULL){
		curr = head;
		while(curr->next != NULL){
			curr = curr->next;
		}
		curr->next = n;
	}
	else{
		head = n;
	}
}

void linkedList::delNode(int delData){
	node* delPtr = new node;
	temp = head;
	curr = head;
	while(curr != NULL && curr->data != delData){
		temp = curr;
		curr = curr->next;
	}
	if(curr == NULL ){
		cout << delData << " was not in the linked list!\n";
		delete delPtr;
	}
	else{
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		delete delPtr;
		cout << "The element " << delData << " was deleted from the linked list!\n";
	}
}

void linkedList::printList(){
	curr = head;
	while(curr != NULL){
		cout << curr->data << endl;
		curr = curr->next;
	}

}
