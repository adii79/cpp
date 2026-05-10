#include<iostream>

int main(){
    char *pGrdes = nullptr;
    int size;
    std::cout<<"How many Grades to Enter in ? :";
    std::cin>>size;
    pGrdes = new char[size];
    for(int i = 0; i <size; i++){
        std::cout<<"Enter Grade #"<<i+1<<":";
        std::cin>>pGrdes[i];
    }
    for(int i = 0; i <size; i++){
        std::cout<<pGrdes[i]<<" ";
    }
    delete pGrdes;
    return 0;
}
