#include<iostream>
#include <cstddef>
#include <cstdlib>

int main() {
    srand(time(NULL));
    int num1 = (rand()%6)+1;
    int num2 = (rand()%6)+1;
    int num3 = (rand()%100)+1;

    std::cout<<num1<<'\n';
    std::cout<<num2<<'\n';
    std::cout<<num3<<'\n';

}
