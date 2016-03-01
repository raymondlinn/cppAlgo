#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool checkAnagram(char str1[], char str2[]){

	int first[26] = {0};
	int second[26] = {0};
	int cnt = 0;

	// take care of space and punctuation and convert to lower case

	// count how many times that a character appears 

	while (str1[cnt] != 0) {
		first[str1[cnt] - 'a']++;
		cnt++;
	}

	cnt = 0;

	while (str2[cnt] != 0){
		second[str2[cnt] - 'a']++;
		cnt++;
	}

	for (cnt = 0; cnt < 26; cnt++) {
		std::cout << cnt << ": " << first[cnt] << " and " << second[cnt] << std::endl;
		
		if (first[cnt] != second[cnt])
			return false;
	}
	return true;
}

void checkAnagram2(string a, string b) {

	if(a.size() != b.size()){
		std::cout << "size: They are not anagrams" << std::endl;
		return;
	}
   	// move the space and punctuation and change the case	
 	static const auto space_or_punct =( char c )[]{ return std::ispunct(c) || std::isspace(c) ; } ;
    a.erase(std::remove_if(a.begin(), a.end(), space_or_punct), a.end());
    for (char& c : a) c = std::tolower(c);

    b.erase(std::remove_if(b.begin(), b.end(), space_or_punct), b.end());
    for (char& c : b) c = std::tolower(c);

	std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    std::cout<<"They are "<<((a==b)?"":"not")<<" anagrams." << std::endl;
}

int main() {

	char *str1 = "A";
	int first[26] = {0};

	//std::cout << "a is: " << 'a' << std::endl;
	//std::cout << "str1[1] is: " << str1[0] << std::endl;
	//std::cout << "first[str1[0]- a] is: " << first[str1[0]- 'a']++ << std::endl;
/*
	if (checkAnagram("nannyoldrim", "Raymond Linn") == true){
		std::cout << "the two strings are anagrams" << std::endl;
	} else {
		std::cout << "the two strings are not anagrams" << std::endl;
	}
*/
	checkAnagram2("nannyoldrim", "Raymond Linn");
	return 0;
}