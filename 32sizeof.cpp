#include<iostream>
#include <string>

int main(){
    std::string name = "Adi";
   double gap = 3.3;
 std::string cartoons[] = {"spongebob","shinchan","Dora"};
 std::cout<<sizeof(name) << " type "<<sizeof(std::string)<<"\n";
 std::cout<<sizeof(cartoons)/sizeof(cartoons[0]);
}
