#include <iostream>

int searchArray(int array[], int size, int element);

int main(){
    int array[] = {3,4,22,6,99,0};
    int b;
    for(auto x: array){
        std::cout<<x<<" ";
    }
    std::cout<<'\n'<<": ";
    std::cin>>b;
    int a = searchArray(array, 6, b);
    std::cout<<a;
}
int searchArray(int array[], int size, int element){
    for(int i = 0 ; i < size ; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}
