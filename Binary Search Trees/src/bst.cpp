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
		cout << root->data << " " << endl ;
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

bst::node* bst::returnNode(int data, node* np){
	if(np != NULL){
		if(np->data == data){
			return np;

		}
		else if(data < np->data){
			return returnNode(data, np->left);

		}
		else if(data > np->data){
			return returnNode(data, np->right);
		}
	}
	else{
		return NULL;
	}


}

bst::node* bst::returnNode(int data){
	return returnNode(data, root);
}

int bst::returnRootData(){
	int result = 0;
	if(root == NULL){
		result = -1000;
	}
	else{
		result = root->data;
	}
	return result;
}

void bst::printChildren(int data){
	node* np = returnNode(data);

	if(np != NULL){
		cout << "Parent Child : " << np->data << endl;
		if(np->left == NULL){
			cout << "Left Child : NULL" << endl;
		}
		else if(np->left != NULL){
			cout << "Left Child : " << np->left->data << endl;
		}
		if(np->right != NULL){
			cout << "Right Child : " << np->right->data << endl;
		}
		else if(np->right == NULL){
			cout << "Right Child : NULL" << endl;
		}
	}
	else{
		cout << "Node " << data << "is not in tree!"<< endl;
	}

}

int bst::findSmallestData(node* np){
	if(np != NULL){
		if(np->left == NULL){
			return np->data;
		}
		else{
			return findSmallestData(np->left);
		}
	}
	else{
		cout << "Tree is empty!" << endl;
		return -1000;
	}
}
int bst::findSmallestData(){
	return findSmallestData(root);
}

bst::node* bst::removeNode(int data, node* np){
	if(np == NULL){
		return np;
	}
	else if (data < np->data){
		np->left = removeNode(data, np->left);
	}
	else if (data > np->data){
		np->right = removeNode(data, np->right);
	}
	else{
		if(np->left == NULL && np->right != NULL){
			node* temp = np->right;
			np->right = NULL;
			//delete np;
			return temp;
		}
		else if(np->left != NULL && np->right == NULL){
			node* temp = np->left;
			np->left = NULL;
			//delete np;
			return temp;
		}
		else if (np->left == NULL && np->right == NULL){
			node* temp = np;
			np = NULL;
			delete temp;
		}
		else if (np->left != NULL && np->right != NULL){
			int smallestInRightSubTree = findSmallestData(root->right);
			node* temp = returnNode(smallestInRightSubTree);
			np->data = temp->data;
			np->right = removeNode(temp->data, root->right);
		}

	}
	return np;
}

bst::node* bst::removeNode(int data){
	return removeNode(data, root);
}

//void bst::removeRootMatch(){
//	if(root != NULL){
//		node* delPtr = root;
//		int rootData = root->data;
//		int smallestInRightSubTree;
//
//		//Case 0: 0 children
//		if(root->left == NULL && root->right == NULL){
//			root = NULL;
//			delete delPtr;
//		}
//
//		//Case 1: 1 child
//		else if(root->right == NULL && root->right != NULL){
//			root = root->right;
//			delPtr->right = NULL;
//			delete delPtr;
//			cout << "The root node with data " << rootData << " was deleted!" << " The new root contains data " << root->data << endl;
//		}
//		else if(root->left != NULL && root->right == NULL){
//			root = root->left;
//			delPtr->left = NULL;
//			delete delPtr;
//			cout << "The root node with data " << rootData << " was deleted!" << " The new root contains the data " << root->data << endl;
//		}
//
//		//Case 2: 2 children
//		else if(root->right != NULL && root->left != NULL){
//			smallestInRightSubTree = findSmallestData(root->right);
//			//removeNode(smallestInRightSubTree, root);
//			root->data = smallestInRightSubTree;
//			cout << "The root data containing data " << rootData << " was overwritten with data " << root->data << endl;
//		}
//	}
//	else{
//		cout << "Cant remove, Tree is already empty!" << endl;
//	}
//}

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

