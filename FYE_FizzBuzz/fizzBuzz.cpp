// Yonita Weiszhauz
// FYE - Bungard
// FizzBuzz Solution
// 6th December 2019

#include <iostream>

using std::cout; using std::endl;

bool divisible(int number, int divisor);

int main() {
	for (int i = 1; i < 101; ++i) {
		bool three = divisible(i, 3);
		bool five = divisible(i, 5);

		if (three && five)
			cout << "FizzBuzz" << endl;
		else if (three)
			cout << "Fizz" << endl;
		else if (five)
			cout << "Buzz" << endl;
		else
			cout << i << endl;
	}
}

bool divisible(int number, int divisor) {
	if (number % divisor == 0)
		return true;
	else
		return false;
}