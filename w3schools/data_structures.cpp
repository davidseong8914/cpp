// Data Structures Review
#include <iostream>

#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>

// for iterator
#include <algorithm>


// 1 vector
void vector_practice() {
    // 1. Initializing a vector
    std::vector<std::string> word = {"welcome", "hello", "bye"};
    std::string first = word[0]; // should give "welcome"
    std::string first = word.front();
    std::string last = word.back();
    std::string second = word.at(1);

    word.push_back("see you again");
    word.pop_back();

    for (std::string wordo : word) {
        wordo = wordo + "halo";
    }

    int word_size = word.size();
    std::cout << word_size;
}

// 2 list
void list_practice() {
    // can access both ends
    // can't index

    std::list<int> grades;
    std::list<std::string> cars = {"Kia", "Tesla", "Ford"};
    for (std::string car : cars) {
        std::cout << car;
    }
    // kia
    std::string first = cars.front();
    // ford
    std::string last = cars.back();

    // modifying
    cars.front() = "Hyundai";

    // add/pop
    cars.push_front("A");
    cars.push_back("B");

    cars.pop_front();
    cars.pop_back();

    // size
    int size = cars.size();

    // empty?
    // 1 or 0 for true and false
    bool truth = cars.empty();



}

// 3 stacks
void stack_practice() {
    // cannot declare with elements
    // LIFO

    std::stack<std::string> cars;

    // adding elements
    cars.push("Tesla");
    cars.push("Lightning Mcqueen");
    
    // accessing the "top element"
    std::cout << cars.top();

    // modifying
    cars.top() = "Hyundai";
    std::cout << cars.top();

    // delete
    cars.pop(); // removes the top element

    int numbers = cars.size();

}

// 4 queues
void queue_practice() {
    // FIFO
    // cannot add elements at declaration
    std::queue<std::string> cars;
    cars.push("Tesla");
    cars.push("Kia");

    cars.front(); // this will give "Tesla"
    cars.back(); // this will give "Kia"

    cars.pop();
    cars.front(); //this will now give "Kia"

    cars.push("Hyundai");
    cars.size(); // will give 2



}

// 5 deque
void deque_practice() {
    // double ended queue - elements can be removed from both ends
    std::deque<std::string> cars;
    cars = {"volvo", "bmw", "tesla"};

    std::deque<std::string> cars_2 = {"teslo", "kio", "hyondo"};

    std::string car = cars[0]; // volvo
    std::string car_1 = cars.at(0); // volvo

    cars[0] = "something else";
    cars.at(0) = "some other thing";

    for(std::string car : cars) {
        std::cout << car << std::endl;
    }

    std::cout << cars.front(); // access front element
    std::cout << cars.back(); // access back element

    cars.push_front("iphone");
    cars.push_back("android");

    cars.pop_front();
    cars.pop_back();

    std::cout << cars.size();





}

// 6 set
void set_practice() {
    // sorted autonmatically in ascending order (1, 2, 3, 7, 9, etc)
    // equal or duplicate values are ignored
    // added and removed - but element cannot be changed

    // std::set<std::string> cars;
    std::set<std::string> cars = {"Tesla", "Kia", "Hyundai"};

    // insert
    cars.insert("New Car");
    // remove
    cars.erase("removed car");
    // clear
    cars.clear();
    // size
    std::cout << cars.size();

    for (std::string car : cars) {
        std::cout << car << std::endl;
    }

}

// 7 map + unordered_map
void map_practice() {
    // accessible by keys
    // cannot have equal keys ex. ("Jenny", 10), ("Jenny", 12)
    // automatically sorted ascending by keys

    std::map<std::string, int> people;
    std::map<std::string, int> people_age = {{"James", 13}, {"John", 5}, {"Johnna", 33}};

    int james_age = people_age["James"];
    int john_age = people_age.at("John"); //preferred over [] because throws an exception when it doesn't exist

    // modifying values
    people_age["James"] = 99;
    people_age.at("Johnna") = 20;

    // add elements
    people_age["New dude"] = 30;
    people_age.insert({"new dude 2", 30});

    // remove elements
    people_age.erase("New dude");
    
    // clear 
    people_age.clear();

    // size
    people_age.size();

    // empty?
    people_age.empty();


    // looping
    // use "auto" keyword | for loop
    // .first for key .second for value

    for (auto person: people_age) {
        std::cout << "Person name " << person.first << std::endl;
        std::cout << "Person age " << person.second << std::endl; 
    }


}

// 8 Iterator
void iterator_practice() {
    std::vector<std::string> cars = {"Tesla", "Kia"};
    std::vector<std::string>::iterator i;
    // auto i = cars.begin();

    for (i = cars.begin(); i != cars.end(); i++) {
        std::cout << *i << std::endl;
    }
    // iterate in reverse
    for (auto i = cars.rbegin(); i != cars.rend(); ++i) {
        continue;
    }
    // iterate for map
    struct caser {
        int age;
        int height;
        std::string name;
    };

    caser Jose = {13, 14, "hello"};



    std::map<std::string, int> sample = {{"sample", 22}, {"sample_2", 33}};
    for (auto i = sample.begin(); i != sample.end(); ++i){
        std::cout << i->first << i->second << std::endl;
    }

    std::map<std::string, caser> struct_map;

    // combined with #include <algorithm> can use sort(), find()
    sort(cars.begin(), cars.end());
    // alphabetically, numerically, etc

    // reverse sort
    sort(cars.rbegin(), cars.rend());

    // find - if not found 0 returned
    auto it = find(cars.begin(), cars.end(), "Tesla");
    // upper bound - first element that is greater than a value
    auto it = upper_bound(cars.begin(), cars.end(), "Kia");
    // min element - smallest element
    auto it = min_element(cars.begin(), cars.end());
    // max element - biggest element
    auto it = max_element(cars.begin(), cars.end());
    

}


int main() {

    vector_practice();
    list_practice();
    stack_practice();
    queue_practice();
    deque_practice();
    set_practice();
    map_practice();
    iterator_practice();


    return 0;
}

/*
What is the point of all these data structures? 
- can I not just use deque for everything and just do deque.pop_front(), deque.push_back(), etc?
When do I use struct and when do I create classes?


*/