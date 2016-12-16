#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	// Initializing array with 15 values.
	int array[15];

	// 15 elements in the array in the loop.
	for(int i = 0; i < 15; i++) {
		array[i] = i * 1;					// Multiples of 1.
	}

	// Array gets sorted.
	sort(array, array+15, less<int>());		// Least to greatest.
	for(int i = 0; i < 15; i++) {
		cout << array[i] << " ";		  	// Prints the 15 values.
	}
	return 0;
}