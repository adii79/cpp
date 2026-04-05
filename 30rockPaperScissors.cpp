#include <cstddef>
#include <cstdlib>
#include<iostream>
#include <string>

int getUser();
void checkWinner(std::string user, std::string computer){
    if(user == computer){
        std::cout<<"Its a tie \n";
        return;
    }
    else if (user == "rock") {
        std::cout<<((computer != "paper") ? "You Won!\n" : "Computer Won :( \n");
        return;
    }
    else if (user == "paper"){
        std::cout<<((computer == "rock") ? "You Won!\n" : "Computer Won :( \n");
        return;
    }
    else if (user == "scissors"){
        std::cout<<((computer == "paper") ? "You Won \n" : "Computer Won :( \n");
       return ;
    }
}

int main() {
    std::string options[3] = {"rock", "paper", "scissors"};
    srand(time(NULL));
    int op = (rand()%3);
   int user ;
    do{
        op = (rand()%3);
        user = getUser();
        checkWinner(options[user], options[op]);
    }while(user != 3);


}

int getUser(){
    int user;
    std::cout<<"================================ \n";
    std::cout<<"Select the input: \n";
    std::cout<<"================================ \n";
    std::cout<<"0 - rock \n";
    std::cout<<"1 - paper \n";
    std::cout<<"2 - scissors \n";
    std::cout<<"3 - exit";
    std::cin>>user;
    return user;
}
