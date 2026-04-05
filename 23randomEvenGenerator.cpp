#include<iostream>
#include <cstddef>

int main() {
    srand(time(NULL));
    int event = (rand()%5)+1;
    switch (event) {
        case 1:
            std::cout<<"Event 1";
            break;
        case 2:
            std::cout<<"Event 2";
            break;
        case 3:
            std::cout<<"Event 3";
            break;
        case 4:
            std::cout<<"Event 4";
            break;
        case 5:
            std::cout<<"Event 5";
            break;
    }
}
