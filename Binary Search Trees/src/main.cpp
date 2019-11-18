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
	testTree->addNode(3);
	testTree->addNode(2);
	testTree->addNode(15);

	testTree->printInOrder();
	cout << "\n" ;
	testTree->printChildren(5);
	cout << "\n" ;
	cout << "Smallest data in tree : " << testTree->findSmallestData() << endl;
}
