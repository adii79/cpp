#include<iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[] = {2.3,4.4,8.9,0.1,6,999};
    double out = getTotal(prices, sizeof(prices)/sizeof(prices[0]));
    std::cout<<out;
}
double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}
