//============================================================================
// Name        : test.cpp
// Author      : Kushal Gandhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	cout << "!!!Bubble Sort!!!" << endl; // prints !!!Hello World!!!
	vector<int> a= {1,2,3};
	cout << "size of vector " << a.size() << endl;
	int temp = 0;
	int count = 0;
	for(int i = 0; i< a.size(); i++){
		for(int j = 0; j<a.size()-1; j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				count++;
			}
		}
	}
	for(int i = 0; i < a.size(); i++){
		cout << a[i] << " ";
	}
	cout << endl <<
			"Array is sorted in " << count << " swaps." << endl;
	cout << "First Element: " << a[0] << endl;
	cout << "Last Element: " << a[a.size()-1];

	return 0;
}



