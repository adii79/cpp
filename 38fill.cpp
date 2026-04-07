#include <iostream>
#include <string>

int main(){
    const int size = 99;
    std::string foods[size];
    fill(foods,foods+(size/3),"pizza");
    fill(foods+(size/3),foods+size,"Burger");
    for(auto x: foods){
        std::cout<<x<<" ";
    }
}
