#include<iostream>
#include <string>

void bakePizza();
void bakePizza(std::string topping);
void bakePizza(std::string topping1, std::string topping2);

int main(){
    bakePizza();
    std::cout<<"\n ================== \n";
    bakePizza("Mashroom!");
    std::cout<<"\n ==================\n";
    bakePizza("Peparonni", "Chicken");
}
void bakePizza(){
    std::cout<<"Here is Your Pizza!";
}
void bakePizza(std::string topping){
    std::cout<<"Here is Your "<<topping<<" Pizza!";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout<<"Here is your "<<topping1<<" & "<<topping2<<" Pizza!";
}
