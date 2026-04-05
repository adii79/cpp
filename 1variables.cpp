// variables
#include<iostream>
#include<vector>
#include<variant>

 int main() {
    int x ; //Declaration
    x = 8; // assignment

    int integer = 10; //Inter(whole)
    double doublee = 20.20 ; // number including the decimal
    char character = 'a'; //single Character
    bool boolean = true ; // true or false
    bool boolean2 = 0;

    std::vector<std::variant<int,double,char,bool>> value1;
    // for new c++ version post 17+
    value1.push_back(x);
    value1.push_back(integer);
    value1.push_back(doublee);
    value1.push_back(character);
    value1.push_back(boolean);
    value1.push_back(boolean2);
    for(auto &x : value1){
        // std::cout<<x<<"\n";
        std::visit([](auto value){
            std::cout << value << "\n";
        }, x);
    }
    std::cout<<typeid(value1).name()<<"\n";
    // | Output | Data type |
    // | ------ | --------- |
    // | `i`    | `int`     |
    // | `d`    | `double`  |
    // | `c`    | `char`    |
    // | `b`    | `bool`    |
    // | `f`    | `float`   |
    // | `l`    | `long`    |
    
    //NSt3__16vectorINS_7variantIJidcbEEENS_9allocatorIS2_EEEE
    // NSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEE

    std::vector<std::vector<int>> some;
    std::cout<<typeid(some).name()<<"\n";
    std::cout<<typeid(boolean2).name();
 }
