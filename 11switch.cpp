#include<iostream>

int main() {
    char grade;
    std::cout<<"What Letter Grade ?: ";
    std::cin>>grade;
    switch(grade){
        case 'A':
            std::cout<<"You did Great!";
            break;
        case 'B':
            std::cout<<"You did Good!";
            break;
        case 'C':
            std::cout<<"You did Reasonable";
            break;
        case 'D':
            std::cout<<"You Need to improve";
            break;
        case 'F':
            std::cout<<"Sorry , Better Luck Next Time";
            break;
        default:
                std::cout<<"Please only enter valid";
    }
}
