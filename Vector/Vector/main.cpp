#include <iostream>
#include "Vector.h"
using namespace std;

void print(const Vector& list) {
	for(int i = 0; i < list.size(); i++) 
		cout << list.at(i) << " ";
	cout << endl;
}

int main() {
	Vector list1, list2;

	Vector list3 (list1);
	for(int i = 0; i < 150; ++i) {
		list1.push_back(i);
		list2.push_back(i * 2);
	}
	print(list1);
	print(list2);
}