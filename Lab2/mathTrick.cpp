#include <iostream>

using namespace std;

int main() {
	int num = 0;
	int output;
	cout << "Insert #"<< endl;
	cin >> num;
	output = ((num*4+6)/(3+(num%2)))-num;
	cout << "The output is " <<output << endl;
	return 0;
}
