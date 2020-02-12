#include <iostream> 

using namespace std;

signed int main() {
int x;
cout << "How tall is your ladder?";
cin >> x;

if (x==0) {
cout << "The height can't be zero." << endl;
}
else if (x<0) { 
cout << "Invalid input" << endl;
}
else {
for (int i = 0; i < x; i++) {
	if (i==0) {
	cout << "# #" << endl;
} 
	else if (i==1) {
	cout << "###" << endl; }

	else if (i%2 ==0) {
	cout <<"# #" << endl; 
}
	else
	cout << "###" << endl;
}
}
}
