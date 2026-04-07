#include<iostream>
#include <string>
#include <utility>

void valueSwap(int x, int y){
    // std::swap(x,y);
    int temp;
    temp = x;
    x = y;
    y = temp;
    std::cout<<x<<":"<<&x<<", "<<y<<":"<<&y<<" \n";
}
void refSwap(int &x, int &y){
    int temp = x;
    temp = x;
    x = y;
    y = temp;
    std::cout<<x<<":"<<&x<<", "<<y<<":"<<&y<<" \n";
}

int main() {
    int x = 10;
    int y = 99;
    std::cout<<"->>"<<x<<":"<<&x<<", "<<y<<":"<<&y<<" \n";
    valueSwap(x, y);
    std::cout<<"->>"<<x<<":"<<&x<<", "<<y<<":"<<&y<<" \n";
    refSwap(x, y);
    std::cout<<"->>"<<x<<":"<<&x<<", "<<y<<":"<<&y<<" \n";

}
