/*
 * bst.cpp
 *
 *  Created on: Nov 11, 2019
 *      Author: kushal
 */

#include "bst.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <iostream>

using namespace std;

bst::bst(){
	root = NULL;
}

bst::node* bst::createLeaf(int data){
	node* n = new node;
	n->data = data;
	n->left = NULL;
	n->right = NULL;

	return n;
}

void bst::addNode(int addData, node* root){
	if(root == NULL){
		root = createLeaf(addData);
	}
	else if(addData < root->data){
		if(root->left == NULL){
			root->left = createLeaf(addData);
		}
		else{
			//curr = curr->left;
			addNode(addData, root->left);
		}
	}
	else if(addData > root->data){
		if(root->right == NULL){
			root->right = createLeaf(addData);
		}
		else{
			//curr = curr->right;
			addNode(addData, root->right);
		}
	}
	else{
		cout << "The Key" << addData << "has already been added to the tree!\n";
	}

}
