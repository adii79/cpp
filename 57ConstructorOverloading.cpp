#include<iostream>
#include <string>
class pizza{
    public:
        std::string topping[3];
        pizza(std::string top){
            this->topping[0] = top;
        }
        pizza(std::string top, std::string top2){
            this->topping[0] = top;
            this->topping[1] = top2;
        }
        pizza(std::string top, std::string top2,std::string top3){
                    this->topping[0] = top;
                    this->topping[1] = top2;
                    this->topping[2] = top3;
                }
};
int main(){
    pizza pizza1("olivs","chadder","chicken");
    for (std::string x : pizza1.topping){
        std::cout<<x<<" ";
    }
}
