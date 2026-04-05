#include<iostream>

int main(){
    double temp;
    int conversion;
    std::cout<<"Enter the conversion you want 1 for Degree Celsius to Kelvin and 2 for vice versa ";
    std::cin>>conversion;
    if(conversion == 1 ){
        std::cout<<"enter temp in c: ";
        std::cin>>temp;
    }
    else{
        std::cout<<"enter temp in k: ";
        std::cin>>temp;
    }

    switch (conversion) {
        case 1:
            std::cout<<"kelvin temp: "<<temp+273<<"k for D Celsius: "<<temp;
            break;
        case 2:
            std::cout<<"D Celsius temp: "<<temp-273<<"C for kelvins: "<<temp;
            break;
        default: std::cout<<"Enter valid input";
    }
}
