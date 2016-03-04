#include <iostream>

char  *strReverseInPointers(char *orgStr) {

	int i = 0;
	// cound the size strlen()
	while(*orgStr){
		*orgStr++;
		i++;
	}
	// allocate the reverseStr
	char *revStr = new char [i];
	while (i >= 0) {
		*orgStr--;
		revStr = orgStr;
		revStr++;
		--i;
	}
	return revStr;
}

int main() {

	char orgStr[] = "happyz";
	char *revStr;

	//std::cout << "Enter any String to be reversed:" << std::endl;
	//std::cin >> orgStr;
	revStr = strReverseInPointers(orgStr);
	std::cout << "Reversed String is: " << revStr << std::endl;

	//delete [] revStr;

	return 0;
}