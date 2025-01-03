#include <iostream>

// class basics
class example {
    public:
        // class objects
        int myNum;
        std::string myString;
        // class methods
        void myMethod() {
            std::cout << "hello world\n";
        }
        void addMethod();
};

// defining a method outside of class
void example::addMethod() {
    std::cout << "this is another way to define contents of a method elsewhere";
}

// how to use constructors
class constructor_ex {
    public: 
        int a;
        float b;
        std::string c;

        constructor_ex(int x, float y, std::string z){
            a = x;
            b = y;
            c = z;
        }
    private:
        int private_var = 2000;
        const double private_doub = 3.14;

};


// access private attributes
    // use set, get methods
class private_access{
    private:
        int salary;

    public:
        void setSalary(int input) {
            salary = input;
        }
        int getSalary() {
            return salary;
        }
};


// inheritance
    // base class
class bass{
    public:
        int drum = 1000;
        std::string bezos = "hello i'm bass";
        void guitar() {
            std::cout << "tum tum tum \n";
        }
        // bass(int x) {
        //     drum = x;
        // }
};

class jazz: public bass{
    public:
        std::string jazzus = "JAZZZZ IS KING";
};

// multilevel inheritance
class grandson: public jazz {
    int grandfather = 5000;
};

// multiple inheritance
class mrworldwide: public jazz, public bass, public grandson {
    int pitbull = 2000;
};

// access specifiers (protected)
class protection_master {
    // classes that inherit from this class can use these variables
    protected:
        int shield;
};

class protection_child: public protection_master {
    public:
        void set_shield(int shield_num) {
            shield = shield_num;
        }
};

int main() {
    example firstObj; // created a example class object
    firstObj.myNum = 3;
    firstObj.myString = "hello";

    std::cout << firstObj.myNum << std::endl;
    firstObj.myMethod();

    constructor_ex example1(1, 2.0, "hello");

    // inheritance
    jazz jass;
    // although jass is from jazz it can use stuff from its parent class bass
    jass.guitar();
    std::cout << jass.jazzus << std::endl;
    std::cout << jass.drum << std::endl;

    // multilevel(grandchild) inheritance
    grandson johnny;
    johnny.guitar();
    std::cout << johnny.drum << std::endl;
}

