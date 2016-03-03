#include <iostream>
#include <string>
#include <algorithm>
#include <assert.h>

using namespace std;

char *removeSpaceAndConvertToLowerCase(char *input) {
	
	assert(input != NULL);
	char *output = new char [strlen(input) + 1];
	char *ip = input, *op = output;
	int i = 0, j = 0;

	while (ip[i] != '\0') {
		if (ip[i] != ' ') {
			op[j] = ip[i];
			if (op[j] >= 'A' && op[j] <= 'Z') {
				op[j] = op[j] + 32;
			}
			j++;
		}
		i++;
	}
	op[j] = '\0';
	return output;	
}

bool checkAnagram(char str1[], char str2[]){

	int first[26] = {0};
	int second[26] = {0};
	int cnt = 0;

	char *out1 = removeSpaceAndConvertToLowerCase(str1);
	char *out2 = removeSpaceAndConvertToLowerCase(str2);
	while (out1[cnt] != 0) {		
		first[out1[cnt] - 'a']++;
		cnt++;			
	}
	cnt = 0;

	while (out2[cnt] != 0){
		second[out2[cnt] - 'a']++;
		cnt++;
	}

	for (cnt = 0; cnt < 26; cnt++) {		
		if (first[cnt] != second[cnt]) {
			delete [] out1;
			delete [] out2;
			return false;
		}
	}
	delete [] out1;
	delete [] out2;
	return true;
}

/*
void checkAnagram2(string a, string b) {

	if(a.size() != b.size()){
		std::cout << "size: They are not anagrams" << std::endl;
		return;
	}
   	// move the space and punctuation and change the case	
 	static const auto space_or_punct = (char c)[] { return std::ispunct(c) || std::isspace(c) ; } ;
    a.erase(std::remove_if(a.begin(), a.end(), space_or_punct), a.end());
    for (char& c : a) c = std::tolower(c);

    b.erase(std::remove_if(b.begin(), b.end(), space_or_punct), b.end());
    for (char& c : b) c = std::tolower(c);

	std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    std::cout<<"They are "<<((a==b)?"":"not")<<" anagrams." << std::endl;
}
*/
int main() {

	
	if (checkAnagram("nannyoldrim", "Raymond Linn") == true){
		std::cout << "the two strings are anagrams" << std::endl;
	} else {
		std::cout << "the two strings are not anagrams" << std::endl;
	}
	
	//checkAnagram2("nannyoldrim", "Raymond Linn");
	return 0;
}