#include<iostream>

int main(){
    int *pointer = nullptr;
    int x = 123;
    pointer = &x;
    if(pointer != nullptr){
        std::cout<<"address assigned : "<<pointer<<"\n";
    }
    else{
        std::cout<<"address not assigned"<<"\n";
    }
}
