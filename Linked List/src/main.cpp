/*
 * main.cpp
 *
 *  Created on: Nov 9, 2019
 *      Author: kushal
 */

#include <stdlib.h>
#include <iostream>
#include "linkedList.h"

using namespace std;

int main(int argc, char** argv){

	linkedList Kushal;
	cout << "running main!\n";
	Kushal.addNode(10);
	Kushal.addNode(1);
	Kushal.addNode(2);
	Kushal.addNode(3);
	Kushal.printList();
	cout << endl;
//	Kushal.delNode(2);
//
//	cout << endl;
//
//	Kushal.printList();

}
