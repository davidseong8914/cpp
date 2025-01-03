# w3schools: C++ Tutorial notes

String concatenate
```cpp
#include <iostream>
using namespace std;

int main() {
    // adding string a and b
    string a= "John";
    string b = "Doe";
    string c = a + b;
    // or
    string d = a.appemd(b);
}
```

String length
```cpp
string txt = "hello"
int txt_len = txt.length(); //or
int txt_siz = txt.size();

```

Access char in string
```cpp
#include <string>

string word = "hello"
char first = word[0];
char second = word.at(1);
```

User input
```cpp
int num = x;
cout << "please input a number";
cin >> x;

// or

getline(cin), x;
```

cstyle string
```cpp
char stringu[] = "hello";
```

max, min
```cpp
std::cout << min(1, 5);
// this will print 1
```

#include <cmath>
```cpp
#include <cmath>

std::cout << sqrt(64);
std::cout << round(2.6);
std::cout << log(2);
```

if else :
```cpp
int a;
int b;
std::cout << "input a then b";
std::cin >> a;
std::cin >> b;

if (a > b) {
    std::cout << "a is larger than b";
} else if (a == b) {
    std::cout << "nice";
} else {
    std::cout << "b is greater!!!";
}
```

short hand if else
```cpp
int variable = 50;
std::string word = (variable > 30) ? "big boy" : "small boy"; 

```

switch
```cpp
int number = 5;
switch (number) {
    case 1:
    // some code
    break;
    case 2:
    // some code
    break;
    // ...
    case 5;
    // some code
    break;
    default:
    // some code
    break;
}
```

while loops
```cpp
std::string word = "hello";
while (int i = 0; i < word.length(); i++) {
    // some code
}
```

Continue/ break

Arrays | elements cannot be added nor removed (fixed size)
```cpp
std::string cars[4];
std::string animals[4] = {"dog", "cat", "rat", "bat"};
//you could also do
std::String fish[] = {"fish1", "fish2", "fish3"};

// can be accessed
std::string desired_animal = animals[0];
// can be modified
animals[0] = "monkey";
```

foreach loop | for arrays
```cpp
int num_list[5] = {1, 2, 3, 4, 5};

for (int i : num_list) {
    // some code - example
    std::cout << i << endl;
}
```

vectors | dynamic size
```cpp
#include <vector>

vector<string> cars = {"suv", "sedan"m "truck"};
// add element
cars.push_back("motorcycles");
// remove element
cars.pop_back();
```

array size
``` cpp
int array_dom[] = {1, 2, 3}
int array_size;
array_size = sizeof(array_dom)/ sizeof(array_dom[0]); // returns size in bytes so need to divide
```

multi dimensional arrays
```cpp
string letters[2][4]; // creates a 2 x 4 matrix

string letters[2][4]{
    {"A", "B", "C", "D"},
    {"E", "F", "G", "H"}
};

// to access and modify the matrix
string character;
character = letters[0][2]; character is set to "C"

```

structure | grouping variables 
```cpp
struct {
    int num;
    std::string word = "hello";
} example; // structure variable name

// then they can be called 
example.num = 5;
int a = example.word.length();

std::cout << a << "\t" << example.num << endl;
```

```cpp
// multiple pseudo-classes 
struct{
    std::string brand;
    std::string model;
    int year;
    char class;
} car1, car2

car1.brand = "Tesla";
car2.brand = "Mazda";
car1.year = 1999;
car2.model = "CX5";
```

```cpp
// you can also do
struct car {
    std::string name;
    int numwheels;
}

car car1;
car1.name = "homecar";
car1.numwheels = 4;
```

References
```cpp
std::string food = "pizza";
std::string &dinner = food;

std::cout << food << " " << dinner << endl;
// it will print out "pizza pizza"
```

Accessing memory
```cpp
// if you do
std::cout << &food;
// you won't get pizza but
0x6defed4 // where the memory is stored
```

Try and catch
```cpp
// try: define a block of code that can be tested
// throw: throws an exceptoion
// catch: code that runs when error has been encountered

try {
    int age = 5;
    if (age >= 18) {
        std::cout << "welcome to hotel transylvania\n"
    } else {
        throw 404;
    }
} catch (int error) {
    std::cout << "access dennied.\n";
    std::cout << "error number: " << error << std::endl;
}
```



** Pointer **
https://www.w3schools.com/cpp/cpp_pointers.asp

** Files **
https://www.w3schools.com/cpp/cpp_files.asp

** Date **
https://www.w3schools.com/cpp/cpp_date.asp

### continue 
[Function practice](functions.cpp)
[Class practice](classes.cpp)

