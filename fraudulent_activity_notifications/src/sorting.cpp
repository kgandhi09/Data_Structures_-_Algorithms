//============================================================================
// Name        : comparator_sorting.cpp
// Author      : Kushal Gandhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int median(vector<int> x){
	//sort(x.begin(), x.end());
	if(x.size()%2 == 0){
		return (x[(x.size()-1)/2] + x[x.size()/2])/2;
	}
	else{
		return x[x.size()/2];
	}
}

int main() {
	//cout << "Comparator Sorting" << endl; // prints Comparator Sorting

	int d = 4;
	vector<int> expenditure = {1,2,3,4,4};

	int n = 0;
	int count = 0;
	int new_d =  expenditure[d-1];
	int med = 0;

	vector<int> temp;
	for(int i = 0; i< expenditure.size(); i++){

		if (i >= d-1){

			for(int j = 0; j < count+d-1; j++){
				temp.push_back(expenditure[j]);
				if(i >=d){
					temp.erase(temp.begin());
				}

			}
			count++;

			cout << "Temp vector: ";
			for(int x = 0; x < temp.size(); x++){
				cout << temp[x] << " " ;
			}

			med = median(temp);
			cout << "  -> d: "<< new_d << " Median: " << med <<endl;


			if(new_d >= 2*(med)){
				n++;

			}

			new_d = expenditure[count+d-2];


		}

	}
	cout << endl << "Number of notifications: " << n << endl;
	return 0;
}


