#include <cmath>
#include <iostream>

int main() {
    double a;
    double b;
    double c;
    std::cout<<"enter side A: ";
    std::cin>>a;
    std::cout<<"Enter side B: ";
    std::cin>>b;
    std::cout<<"Side c: "<<std::sqrt(std::pow(a,2)+std::pow(b,2));
}
