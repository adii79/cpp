#include<iostream>
#include <string>

int main() {
    std::string name;
    int age;
    // std::cout<<"Whats Your Name ? :";
    // std::cin>>name;
    // std::cout<<"Whats your age : ";
    // std::cin>>age;
    // std::cout<<"Hello "<<name<<"\n";
    // std::cout<<"your are "<<age<<" years old \n";

    // cin cannot handle spaces
    std::cout<<"Whats your full name ? : ";
    //problem
    // std::cin>>name;
    //solution
    std::getline(std::cin,name);
    std::cout<<"Whats your age : ";
    std::cin>>age;
    std::cout<<"Hello "<<name<<"\n";
    std::cout<<"your are "<<age<<" years old \n";

}
