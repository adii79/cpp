#include<iostream>

int main(){
    int grade;
    std::cout<<"enter grade : ";
    std::cin>>grade;
    grade >= 40 ? std::cout<<"You pass!" : std::cout<<"You fail :( ";
    std::cout<<'\n';
    std::cout<<(grade%2==1 ? "ODD" : "EVEN");
}
