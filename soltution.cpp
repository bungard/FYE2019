#include <iostream>

void fizzBuzz(){
  for(int i = 1; i < 101; i++){
    bool called = false;
    if(i%3 == 0){
      std::cout << "Fizz";
      called = true;
    }
    if(i%5 == 0){
      std::cout << "Buzz";
      called = true;
    }
    if(!called){
      std::cout << i;
    }
    std::cout << std::endl;
  }
}
