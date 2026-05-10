#include<iostream>

enum Day {
    sum = 0,
    mon = 1,
    tue = 2,
    wed = 3,
    thus = 4,
    fri = 5,
    sat = 6
};
void printSome(Day &a){
    std::cout<<a<<std::endl;
}
int main(){
    Day a = sat;
   printSome(a);
   Day b = static_cast<Day>(0);
   printSome(b);
   std::cout<<b;
}
