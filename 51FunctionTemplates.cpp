#include<iostream>

template<typename T>

T retirmmm(T x){
    return x;
}

template<typename T, typename U>
T max(T x, U y){
    return x>y ? x : y;
}
template<typename T, typename U>
auto maxA(T x, U y){
    return x>y ? x : y;
}

int main(){
    std::cout<<retirmmm(4)<<"\n";
    std::cout<<max(4,5);
    std::cout<<'\n'<<maxA(4.4,0.5);
}
