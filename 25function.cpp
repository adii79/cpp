#include<iostream>
#include <string>

void happyHappy(std::string name, int num);

int main() {
    happyHappy("ad", 500);
}
void happyHappy(std::string name, int num){
    // int num1 = num ;
    for(int n = num ;n > 0; n--){
        std::cout<<"i am "<<name<< "happy ! \n";
    }
}
