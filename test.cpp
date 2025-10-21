
#include <iostream>
using namespace std;




string change(string s) {
	s = "Thanh";
	return s;
}

int main() {
	string a = "Tri";

	change(a);
	cout << a;


	return 0;
}