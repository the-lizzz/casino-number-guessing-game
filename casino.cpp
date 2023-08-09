#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stdlib.h>
int main(){
    system("clear");
    system("cat header.ascii");
    int bet_amount;
    int balance = 500;
    srand((unsigned int)time(NULL));
    int number = 1 + (rand() % 15);
    int gnumber;
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "balance : $";
    std::cout << balance;
    do{
        std::cout << "\nenter the amount you want to bet:\n";
        std::cin >> bet_amount;
        if(bet_amount > balance){
            std::cout << "OOPS! it seems you dont have enough money!";
        }
        else if(bet_amount != 0){
            std::cout << "number:";
            std:: cin >> gnumber;
            if(gnumber == number){
                int nbalance = bet_amount*5;
                balance = balance+nbalance;
                std::cout << "CONGRATS!\n";
                std::cout << "balance : +$";
                std::cout << balance;
            }
            else if(gnumber != number){
                balance = balance-bet_amount;
                std::cout << "YOU LOSE:\n";
                std::cout << "balance : -$";
                std::cout << balance;
            }
        if(balance == 0){
            std::cout << "\nYOU LOST ALL OF YOUR MONEY!\n";
            break;
        }
        }

    }while(true);
}
