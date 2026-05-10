#include<iostream>

int factorial(int num){
    if(num <= 1) return 1;
    else return num*factorial(num-1);
}


int main(){
    int a = factorial(3);
    std::cout<<a;
}
