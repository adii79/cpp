#include<iostream>

int main(){
    char* array[] = {"hi", "ok",};
    for(int i = 0 ; i < sizeof(array)/sizeof(array[0]); i++){
        std::cout<<array[i]<<"\n";
    }
}
