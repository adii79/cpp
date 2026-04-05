#include <cstdio>
#include<iostream>

void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);
int main() {
    double balance = 0;
    int choice = 0;
    do{
        std::cout<<"========================================= \n";
        std::cout<<"Enter Your Choice: \n";
        std::cout<<"========================================= \n";
        std::cout<<"1 - To Check the balace! \n";
        std::cout<<"2 - To Deposit money! \n";
        std::cout<<"3 - To withdraw money! \n";
        std::cout<<"4 - Exit ->! \n";
        std::cout<<"========================================= \n";
        std::cin>>choice;
        std::cin.clear();
        fflush(stdin);
        std::cout<<"========================================= \n";
        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:

                std::cout<<"Thank You !\n";
                break;
            default:
                std::cout<<"Enter a valid Choice ?\n";
        }
    }while(choice!=4);

}

void showBalance(double balance){
    std::cout<<"Your Current Balance = "<<balance<<" $ \n";
}

double deposit(double balance){
    double temp = 0;
    std::cout<<"Enter the amount to be deposited : \n";
    std::cin>>temp;
    return temp > 0 ?  temp :  balance;
}
double withdraw(double balance){
    double temp = 0;
    std::cout<<"Enter the amount to be deposited : \n";
    std::cin>>temp;
    return (temp > 0 && temp < balance) ?   temp :  balance;
}
