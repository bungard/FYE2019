// Fizzbuzz Solution
// FYE Github Assignment
// Colby Reinhart
// 12-4-2019

#include <iostream>
using std::cout; using std::cin; using std::endl;

int main() {

	for (int i = 1; i < 101; ++i) {
		bool check = false;

		if (i % 3 == 0) {
			cout << "Fizz";
			check = true;
		}
		if (i % 5 == 0) {
			cout << "Buzz";
			check = true;
		}
		if (!check)
			cout << i;
		
		cout << endl;
	}
}