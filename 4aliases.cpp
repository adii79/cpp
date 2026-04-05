// #include <array>
#include<iostream>
#include <string>
#include <vector>

typedef std::string text_t;

using vectorNum = std::vector<int>;

int main(){
    text_t name = "adi";
    std::cout<<name<<" \n";
    vectorNum nums= {6,8,10};
    for(auto x:nums){
        std::cout<<x<<" ";
    }
        std::cout<<"\n";
    std::array<int, 20> arrray = {1,2,4,5};
    for(auto x:arrray){
        std::cout<<x<<" ";
    }
        std::cout<<"\n";
}
