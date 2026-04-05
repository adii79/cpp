#include<iostream>

int myNum = 3;
void printNum();
int main() {
    int myNum = 1;
    std::cout<<myNum;
    std::cout<<'\n';
    std::cout<<::myNum; //scope resolution operator
    std::cout<<'\n';
    printNum();
}

void printNum(){
    int myNum = 2;
    std::cout<<myNum<<'\n';
}
