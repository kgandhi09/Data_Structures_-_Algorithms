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


//	bst* testTree=new bst();
//	testTree->addNode(10);
//	testTree->addNode(5);
//	testTree->addNode(3);
//	testTree->addNode(2);
//	testTree->addNode(4);
//	testTree->addNode(15);
//
//	testTree->printInOrder();
//	cout << "\n" ;
//	testTree->printChildren(5);
//	cout << "\n" ;
//	cout << "Smallest data in tree : " << testTree->findSmallestData() << endl;
//	cout << "\n" ;
//	testTree->printChildren(3);

	bst* testTree2 = new bst();
	testTree2->addNode(50);
	testTree2->addNode(60);
	testTree2->addNode(20);
//	testTree2->addNode(40);
//	testTree2->addNode(70);
//	testTree2->addNode(60);
//	testTree2->addNode(80);

	testTree2->printInOrder();

	//testTree2->removeNode(20);

	cout << "\n";
	testTree2->printChildren(50);

	cout << "\n";

	testTree2->removeNode(50);

}
