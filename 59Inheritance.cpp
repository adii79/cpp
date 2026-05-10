#include <iostream>
#include <string>
class flower {
  public:
    std::string color;
    std::string size;
};
class lily: public flower{
    public:
        std::string exotic = "a sunny day y me and a bunch of lilly between our hands <3";
};
int main(){
    lily love;
    love.color = "white";

   std::cout<<love.exotic;
  std::cout<<" "<<love.color;
}
