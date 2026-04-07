#include<iostream>

int main(){
    std::string foods[5];
    std::string temp;
    for(int i = 0; i < sizeof(foods)/sizeof(foods[0]); i++){
        std::cout<<"Enter food you like or q to Quit \n";
        std::cin>>temp;
        if(temp == "q"){
            break;
        }
        foods[i] = temp;
    }
    for(auto x : foods){
        std::cout<<x<<" ";
    }
}
