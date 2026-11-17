#include <iostream>
#include <cstdlib>

int main()
{
    const int SIZE=5;
    int winningDigits[SIZE];
    int player[SIZE];
    int matchcount=0;
    
    for(int i=0; i < SIZE; i++) {
        winningDigits[i]= rand() % 10;
    }
    std::cout<<"Enter 5 Digits (0-9): ";
    for(int i=0; i<SIZE; i++) {
        std::cin >> player[i];
    }
    for(int i=0; i<SIZE; i++) {
        if(winningDigits[i] == player[i]){
            matchcount++;
        }
    }
    std::cout<<"Winning Digits: ";
    for(int i=0; i < SIZE; i++){
        std::cout<<winningDigits[i]<<" ";
    }
    std::cout<<"\n";

    std::cout<<"Player Digits:  ";
    for(int i=0; i < SIZE; i++) {
        std::cout<<player[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"Matches: "<<matchcount;

    return 0;
}