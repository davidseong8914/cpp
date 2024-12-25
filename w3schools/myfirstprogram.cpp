#include <iostream>
#include <string>
using namespace std;

int main() {
    // this is a comment
    /*
    this is a multi-line comment
    */
   const int definite = 5;
   const float deci = 3.33;

    int num;
    string hoso;
    double dec = 1.01;
    char character = 'a';
    char Character = 'D';
    char numero = 4;

    bool test = !(3>5 && 4>6);
    cout << test << endl;
    double sum = dec + numero;
    cout << sum << endl;

    string name = "James";
    bool truth = true;
    bool wrong = false;

    cout << "Hello world!\n";
    getline(cin, hoso);
    cout << num;
    // cout << "please input a number\n";
    // cin >> num;

    // cout << num << endl;
    // cout << 3+3 << endl;

    return 0;
}