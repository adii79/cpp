#include<iostream>
#include <string>

int main(){
   int a = 10;
  std::string s = std::to_string(a);
  std::cout<<typeid(a).name()<<" "<<typeid(s).name();
  std::basic_string<char,
                    std::char_traits<char>,
                    std::allocator<char>> ss = "something";
    std::cout<<ss;
}
