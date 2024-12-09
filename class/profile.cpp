#include "profile.hpp"
#include <iostream>
#include <vector>

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) {
        name = new_name;
        age = new_age;
        city = new_country;
        pronouns = new_pronouns;
        // hobbies = new_hobbies;
    }

std::string Profile::view_profile() {
    std::string profile_info;
    profile_info = "Name: " + name + "\n";
    profile_info += "Age: " + std::to_string(age) + "\n";
    profile_info += "City: " + city + "\n";
    profile_info += "Country: " + country + "\n";
    profile_info += "Pronouns: " + pronouns + "\n";
    profile_info += "Hoobbies: ";

    for (int i = 0; i < hobbies.size(); i++) {
        profile_info += hobbies[i];
    }

    profile_info += "\n";

    return profile_info;
}

void Profile::add_hobby(std::string new_hobby){
    hobbies.push_back(new_hobby);
}