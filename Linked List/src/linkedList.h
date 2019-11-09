/*
 * linkedList.h
 *
 *  Created on: Nov 9, 2019
 *      Author: kushal
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

class linkedList{
private:

	typedef struct node{
		int data;
		node* next;
	};

	node* head;
	node* curr;
	node* temp;

public:    // This is where function prototypes go
	linkedList();
	//~linkedList();
	void addNode(int addData);
	void delNode(int delData);
	void printList();

};




#endif /* LINKEDLIST_H_ */
