/*
 * bst.h
 *
 *  Created on: Nov 11, 2019
 *      Author: kushal
 */

#ifndef BST_H_
#define BST_H_

class bst{
public:
	struct node{
		int data;
		node* left;
		node* right;
	};
	node* root;

public:
	bst();
	node* createLeaf(int key);
	void addNode(int addData, node* root);
	void delNode(int delData);
};



#endif /* BST_H_ */
