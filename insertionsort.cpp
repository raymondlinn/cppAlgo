#include <iostream>

// O(n*n) - space O(1)
void insertionSort(int arr[], int size) {
	
	int i, key, j;
	for(i = 1; i < size; i++) {
		key = arr[i];
		j = i -1;
		/*
			compare with the key with arr[0...i-1]
			and move one position if it is greater than key
		*/
		while (j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main () {
	int arr[] = {12, 11, 13, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);

	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}