#include<iostream>
#include <string>

int main(){
    int temp;
    std::string cloud;
    std::cout<<"Enter the temp : ";
    std::cin>>temp;
    // std::cin.ignore();
    std::cout<<"Are there clouds or sunny (Y or N): \n";
    std::cin>>cloud;
    // std::getline(std::cin,cloud);
    // does not work on const char* array

    if(temp > 0 && temp < 30){
        if(cloud == "N" || (temp > 10 && temp < 20)){
            std::cout<<"Day is pleasent and sunny!, Nice :)";
        }
        else if(cloud == "Y" && temp >= 20){

        }
        else {
            std::cout<<"Day is Good;";
        }
    }
    else {
        std::cout<<"Temp is meh. \n";
    }
    return 0;
}
