#include <iostream>


char* removeSpace(char* input) {
	char *output = input;
	int i = 0, j = 0;
	while(output[i] != '\0') {
		if(output[i] != ' ') {
			output[j++] = output[i];
		}
		i++;
	}
	output[j] = '\0';
	return output;
}
int main(){

    char str[] = {"my name    is  Omar"};
    char *output = removeSpace(str);
    std::cout << output << std::endl;
	return 0;
}