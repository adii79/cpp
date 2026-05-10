#include<iostream>

struct student {
    std::string name;
    double roll;
    bool cracked = false;
};

int main(){
  student adi ;
  adi.cracked = true;
  adi.name = "Aditya";
  adi.roll = 38;
  std::cout<<&adi<<"\n";
  std::cout<<sizeof(student)<<"\n";
std::cout<<typeid(adi).name();
  // std::cout<<adi;
  student test = {
    .name = "test",
    .roll= 99
  };
  std::cout<<std::endl;
  std::cout<<sizeof(test)<<std::endl;
  std::cout<<test.cracked;
  std::cout<<std::endl;
  std::cout<<adi.cracked;

}
