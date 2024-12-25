# w3schools: C++ Tutorial

string concatenate
```
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

string length
```
string txt = "hello"
int txt_len = txt.length(); //or
int txt_siz = txt.size();

```

access char in string
```
#include <string>

string word = "hello"
char first = word[0];
char second = word.at(1);
```

user input
```
int num = x;
cout << "please input a number";
cin >> x;

// or

getline(cin), x;
```

cstyle string
```
char stringu[] = "hello";
```

max, min
```
std::cout << min(1, 5);
// this will print 1
```


#include <cmath>
```
#include <cmath>

std::cout << sqrt(64);
std::cout << round(2.6);
std::cout << log(2);
```

if else :
```
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