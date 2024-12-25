#include <iostream>
#include <vector>
// global variable
int x = 3;

void first_func() {
    //local variable
    // x = 3 unless specified again in the function
    int y = 5;
    std::cout << "First func: Yikes!\n";
    return;
}
// can't reference y sincei it was declared from within a function

void second_func(int param1, std::string param2, double param3) {
    std::cout << param2 << std::endl;
}

void second_func_def(int param1 = 2, std::string param2 = "hello") {
}

int third_function(int x = 1, int y = 2) {
    return x + y;
}

// pass by reference
void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
    // since parameters are passed as reference the variables passed will be affected by the operations within the function
}

// function overloading : multiple functions with same name but different parameters
int fourth_function() {
}
int fourth_function(std::string str[6], int z){
}

// Recursion
int sum(int k) {
    if (k > 0) {
        return k + sum(k-1);
    } else {
        return 0;
    }
}

int main() {
    first_func();
    second_func(2, "Jack", 2.0);
    std::cout << third_function(2, 5) << std::endl;

    return 0;
}

