#include <iostream>

char *strReverseInPointers(char *orgStr) {

	int i = 0;
	while(*orgStr){
		*orgStr++;
		i++;
	}
	// allocate the reverseStr
	char *reverseStr = new char[i];
	while (i >= 0) {
		*orgStr--;
		reverseStr = orgStr;
		reverseStr++;
		--i;
	}
	
	return reverseStr;
}

int main() {

	char *orgStr = "happyz";
	char *revStr;

	//std::cout << "Enter any String to be reversed:" << std::endl;
	//std::cin >> orgStr;
	revStr = strReverseInPointers(orgStr);
	std::cout << "Reversed String is: " << revStr << std::endl;

	delete [] revStr;

	return 0;
}