#include <iostream>

int main(){
    // second [][int] should not be empty;
    std::string cars[][3]{{"altroz","nexon","safari"},
        {"panamera","macan","911 GT3 RS"}};
    for(auto& x: cars){
        for(auto y: x ){
        std::cout<<y<<" ";
        }
        std::cout<<"\n";
    }
}
