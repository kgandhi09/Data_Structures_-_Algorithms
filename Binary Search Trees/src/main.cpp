/*
 * main.cpp
 *
 *  Created on: Nov 11, 2019
 *      Author: kushal
 */
#include <iostream>
using namespace std;
#include "bst.h"

int main(int argc, char** argv){


	bst* testTree=new bst();
	testTree->addNode(10);
	testTree->addNode(5);
	testTree->addNode(15);
//	cout << testTree->root->data << endl;
//	cout << testTree->root->left->data << endl;
//	cout << testTree->root->right->data << endl;
	testTree->printInOrder();

	testTree->printChildren(5);

}
