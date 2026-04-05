#include<iostream>
#include <string>

int main(){
    int age;
    std::cout<<"Enter Your age: ";
    std::cin>>age;
    if(age>100){

        std::cout<<"You are to old to enter @-///::";
    }
    else if(age>=18){
        std::cout<<"You can enter the site :)";
    }
    else if(age<=0){
    std::cout<<"You are not born yet meh :}";

    }
    else{
        std::cout<<"You cannot enter the site :(";

    }
}
