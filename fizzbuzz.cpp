// creates a program that prints number 1 - 100, but if the number is a multiple of 3 it prints Fizz and if they are multiples of 5 then it prints Buzz


#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl; using std::string;

int main(){

for (int i = 1; i <= 100; ++i){
	if(i % 3 == 0 && i % 5 == 0)
		cout << "FIZZBUZZ" << endl;
	else if(i % 3 == 0)
		cout << "FIZZ" << endl;
	else if(i % 5 == 0)
		cout << "BUZZ" << endl;
	else
		cout << i << endl;

}

}
