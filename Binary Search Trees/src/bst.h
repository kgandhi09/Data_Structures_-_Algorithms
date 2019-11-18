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
public:
	bst();
	node* createLeaf(int key);
	void addNode(int addData);
	void delNode(int delData);
	void printInOrder();

};



#endif /* BST_H_ */
