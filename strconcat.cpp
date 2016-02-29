#include <iostream>

// caller needs to make sure the orig has room for concantenating
void strConcat(char* orig, char* add) {

	int i = 0;

	while(*orig) {
		orig++;
		i++;
	}
	

	while(*add) {
		*orig = *add;
		orig++;
		add++;
	}	
	*orig = '\0';
	return;
}

int main () {

	char str1[16];
	memcpy(str1, "hello ", 16);
	char str2[5]; 
	memcpy(str2, "silly", 5);

	strConcat(str1, str2);

	std::cout << "Concatenated string is: " << str1 << std::endl;

	return 0;
}