#include <cstdio>
#include<iostream>
#include <string>

class car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    void accelerate(){
        std::cout<<"gas \n";
    }
    void bracket(){
        std::cout<<"breaks \n";
        // accelerate()
    }
};
int main(){
    car safari = {.make = "tata", .color = "black"};
    // printf("%s",safari.color);
    std::cout<<safari.make<<" ";
    std::cout<<safari.model<<" ";
    if (safari.year) {
    std::cout<<safari.year<<" ";

    }else {
        std::cout<<" yy ";
    }
    std::cout<<safari.color<<" \n";


}
