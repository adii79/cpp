#include<iostream>
#include <string>

int main(){
    std::string name = "Adi";
    std::string *pName = &name;
    std::cout<<name<<"\n";
    std::cout<<pName<<"\n";

    std::string freePizza[5] = {"pizza 1","pizza 2","pizza 3","pizza 4","pizza 5"};
    std::string *pFreePizza = freePizza;

    std::cout<<pFreePizza<<"\n";
    std::cout<<*pFreePizza<<"\n";
    std::cout<<"==============================\n";
    for(auto x: *pFreePizza){
    std::cout<<x<<"\n";
    }

    std::string name1 = "Adi";
    std::string* ptr = &name1;

    std::cout << ptr->length() <<std::endl;
}
