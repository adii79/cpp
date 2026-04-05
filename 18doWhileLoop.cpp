#include <iostream>
#include <string>

int main() {
    int num;
    do{
    std::cout<<"Enter a Even Num: \n";
    std::cin>>num;
    }while(!num%2 == 0 );
    std::cout<<"even num is"<<num;
    // char arr[5];
    // // std::getline(std::cin,arr);
    // for(int i = 0; i < 5; i++){
    // std::cin>>arr[i];
    // }
    // std::cout<<arr;
}
