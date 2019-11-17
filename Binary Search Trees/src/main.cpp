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

	bst* test=new bst();
	test->addNode(10, test->root);
	test->addNode(7, test->root);
	test->addNode(11, test->root);
	test->addNode(6, test->root);

	//cout << test->root->data << endl;
//	cout << test->root->left->data << endl;
//	cout << test->root->right->data << endl;
//	cout << test->root->left->left->data <<endl;

}
