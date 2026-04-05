#include<iostream>

int preIN(int x){
    return x++;
}
int postIN(int x){
    return ++x;
}

void print(int x) {
    std::cout<<x<<"\n";
}

int main(){
    int x = 10;
    print(x);
    x+=1; // x = x+1;
    print(x);
    x++;
    print(x);

    x-=2;
    print(x);
    x--;
    print(x);

    x*=x;
    print(x);
    x*=2;
    print(x);

    x/=10;
    print(x);

    x%=3;
    print(x);






    // // random
    // int y = 4;
    // ++y;
    // print(y);
    // y = 4;
    // y++;
    // print(y);

    // // random 2
    // int a = 2;
    // a = preIN(int (a));
    // print(int (a));
    // a = 2;
    // // a = postIN(int (a));
    // a = postIN(a);
    // print(int (a));



}
