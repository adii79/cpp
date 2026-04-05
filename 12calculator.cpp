#include <cmath>
#include<iostream>

int main(){
    char operation;
    double A;
    double B;
    std::cout<<"==================***================="<<'\n';
    std::cout<<"Enter the OPERATION valid option(+,-,*,/):"<<'\n';
    std::cin>>operation;
    std::cout<<"==================***================="<<'\n';
    std::cout<<"Enter the Value of A:"<<"\n";
    std::cin>>A;
    std::cout<<"Enter the Value of B:"<<"\n";
    std::cin>>B;
    std::cout<<"Values of A: "<<A<<" B :"<<B<<"\n";

    switch (operation) {
        case '+': std::cout<<"Addition of the A and B : "<<A+B;
            break;
        case '-': std::cout<<"Subtraction of the A and B : "<<A-B;
            break;
        case '*': std::cout<<"Multiplication of the A and B : "<<A*B;
            break;
        case '/': std::cout<<"Division of the A and B : "<<A/B;
            break;
        default: std::cout<<"Not a valid operation";
    }
return 0;
}
