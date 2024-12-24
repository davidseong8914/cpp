#include <iostream>

int main() {
    /*
    output numbers from 1 to 100
    for multiples of 3 print "Fizz"
    for multiples of 5 print "Buzz"
    for multiples of both 3 and 5 print "FizzBuzz"
    */
   int count = 0;
   while (count <= 100) {
    if (count % 3 == 0 && count % 5 == 0) {
        std::cout << "FizzBuzz\n";
    } else if (count % 3 == 0) {
        std::cout << "Fizz\n";
    } else if (count % 5 == 0) {
        std::cout << "Buzz\n";
    } else {
        std::cout << count << "\n";
    }

    count++;
   }
}