#include<iostream>
#include <cstddef>

int main() {
    srand(time(NULL));
    int randomNum = (rand()%100) +1;
    int userIN;
    std::cout<<"Enter the num : ";
    std::cin>>userIN;
    std::cout<<'\n';
    while(!(randomNum==userIN)){
        if(userIN>randomNum){
            std::cout<<"Too Big !";
            std::cin>>userIN;
        }
        else {
            std::cout<<"Too Small !";
            std::cin>>userIN;
        }
        std::cout<<'\n';
    }
    std::cout<<"You got it Bro ! your num : "<<userIN <<" == random num : "<<randomNum;
}
