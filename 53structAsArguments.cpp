#include<iostream>

struct car {
  std::string model;
  int year;
std::string color;
};
void printCar(car &car){
    std::cout<<car.model<<"\n";
    std::cout<<car.year<<"\n";
    std::cout<<car.color<<"\n";
}
void changeColor(car &car){
    std::cout<<"Enter the color";
    std::cin>>car.color;
}
int main(){
    car nano;
    nano.model = "nano nx";
    nano.year = (int) 2019.0;
    printCar(nano);
    changeColor(nano);
    printCar(nano);
}
