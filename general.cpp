#include <iostream>
using namespace std;

Sum(int a, int b) {
	return a+b;
}

int main() {
	int a, b;
	
	cout << "Enter first number" << endl;
	cin >> a;
	cout << "Enter second number" << endl;
	cin >> b;
	
	cout << Sum(a, b);
}
