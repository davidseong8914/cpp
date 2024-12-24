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