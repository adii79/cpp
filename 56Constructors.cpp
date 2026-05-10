#include<iostream>
#include <string>
class car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;
        car(std::string make, std::string model, int year, std::string color){
            this->make = make;
            this->model = model;
            this->year = year ;
            this->color = color;
        }
        car(std::string make, std::string model, int year){
                    this->make = make;
                    this->model = model;
                    this->year = year ;
                    this->color = "black";
                }

};
int main(){
   car car1("cheevy","corvette",2022,"black");
   std::cout<<car1.color;
   car car2("tata","altroz",2026);
   std::cout<<car2.color;
}
