#include <iostream>

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;	
}

void bubbleSort(int arr[], int arrSize) {
	int i, j;
	for (i = 0; i < arrSize-1; i++) {
		for (j = 0; j < arrSize-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int size = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, size);
	std::cout << "sorted array is: " << std::endl;
	printArray(arr, size);
	return 0;
}