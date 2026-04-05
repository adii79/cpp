#include <iostream>

int main() {
    for(int i = 0; i <= 20 ; i++){
        if(i==13){
            continue; // skip 13
            // break;   // print till 12 (break after 13)
        }
        std::cout<<i<<'\n';
    }
}
