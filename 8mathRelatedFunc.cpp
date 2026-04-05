#include <cmath>
#include <cstdlib>
#include<iostream>

int main(){
    double x = 3.99;
    double y = 4;
    double z;
    //max
    z = std::max(x,y);
    std::cout<<z<<"\n";
    //min
    z = std::min(x,y);
    std::cout<<z<<"\n";
    //power
    z = std::pow(x,y);
    std::cout<<z<<"\n";
    //sqrt
    z = std::sqrt(x);
    std::cout<<z<<"\n";
    //absolute
    z = std::abs(-20);
    std::cout<<z<<"\n";
    //round
    z = std::round(1.98);
    std::cout<<z<<"\n";
    z = std::round(1.29);
    std::cout<<z<<"\n";
    //celi
    z = std::ceil(1.6);
    std::cout<<z<<"\n";
    //floor
    z = std::floor(3.9);
    std::cout<<z<<"\n";
}
