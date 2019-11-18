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
	node* curRoot=new node;
	curRoot->data = data;
	curRoot->left = NULL;
	curRoot->right = NULL;

	return curRoot;
}

bst::node* bst::addNode(int addData, node* np){

	if(np == NULL){
		np = createLeaf(addData);
	}
	else if (addData <= np->data){
		np->left = addNode(addData, np->left);
	}
	else if (addData >= np->data){
			np->right = addNode(addData, np->right);
		}

	return np;
}

void bst::addNode(int addData){

	root = addNode(addData, root);

}

void bst::printInOrder(node* root){
	if (root != NULL){
		cout << root->data << " " ;
		if(root->left != NULL){
			printInOrder(root->left);
		}
		if(root->right != NULL){
			printInOrder(root->right);
		}


	}
	else{
		cout << "Tree is empty\n";
	}

}

void bst::printInOrder(){
	printInOrder(root);
}




//	if (root == NULL){
//		root = createLeaf(addData);
//		return;
//	}
//	node* newNode = createLeaf(addData);
//	node* leaf = root;
//	while (true){
//		if(addData < leaf->data){
//			if (leaf->left == NULL) {
//				leaf->left = newNode;
//				break;
//			}
//			leaf = leaf->left;
//		}
//		else if(addData > leaf->data){
//			if (leaf->right == NULL) {
//				leaf->right = newNode;
//				break;
//			}
//			leaf = leaf->right;
//		}
//	}

//	if(np == NULL){
//		np = createLeaf(addData);
//	}
//	else if(addData < np->data){
//		if(np->left == NULL){
//			np->left = createLeaf(addData);
//		}
//		else{
//			np->left = addNode(addData, np->left);
//		}
//	}
//	else if(addData > np->data){
//		if(np->right == NULL){
//			np->right = createLeaf(addData);
//		}
//		else{
//			np->right = addNode(addData, np->right);
//		}
//	}
//	else{
//		cout << "The Key" << addData << "has already been added to the tree!\n";
//	}

