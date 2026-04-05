#include<iostream>
#include <string>
// #include<math.h>

std::string concatString(std::string string1, std::string string2);
int max(int a , int b);
int main() {
    std::cout<<concatString("hi", "man!");
    std::cout<<max(4,6);
}
std::string concatString(std::string string1, std::string string2){
    return string1 +" "+string2+'\n';
}
int max(int a , int b){
    return std::max(a,b);
}
