/*
 * bst.h
 *
 *  Created on: Nov 11, 2019
 *      Author: kushal
 */

#ifndef BST_H_
#define BST_H_

class bst{
private:
	struct node{
		int data;
		node* left;
		node* right;
	};

	node* root;
	node* addNode(int addData, node* np);
	void printInOrder(node* root);
	node* returnNode(int data, node* np);
	int findSmallestData(node* np);
	node* removeNode(int data, node* np);
	void removeRootMatch();
public:
	bst();
	node* createLeaf(int key);
	void addNode(int addData);
	void printInOrder();
	node* returnNode(int data);
	int returnRootData();
	void printChildren(int data);
	int findSmallestData();
	node* removeNode(int data);
};



#endif /* BST_H_ */
