#include <iostream>

int fibonnaci_recursive(int n);
int fibonnaci(int n);
int fibonnaci_space(int n);

int main() {
	//std::cout << "input the integer you want to calculate fibonnaci sequence" << std::endl;
	int n = 100; 
	//std::cin >> n;
	int ret = fibonnaci_recursive(n);//fibonnaci_recursive(n); //fibonnaci(n);//fibonnaci_space(n);//
	std::cout << "fibonnaci sequence of n is: " << ret << std::endl;
	return 0;
}

int fibonnaci_recursive(int n) {
	if (n <= 1)
		return n;
	return fibonnaci_recursive(n-1) + fibonnaci_recursive(n-2);
}

// Polynomial O(n)
int fibonnaci(int n) {
	int f[n +1];
	int i;

	f[0] = 0;
	f[1] = 1;

	for (i = 2; i <= n ; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
}
// Polynomial with space O(n)
int fibonnaci_space(int n) {
	int a = 0, b = 1, c, i;
	if (n  == 0)
		return a;

	for (i = 2; i <= n ; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}