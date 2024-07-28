#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL)); 
    int ynum;
    int bnum = (rand() % 6)+ 1;

    std::cout << "Which number do you choose? (1-6): ";
    std::cin >> ynum;

    if(ynum < 1 || ynum > 6){
        std::cout << "Invalid number. Please choose a number between 1 and 6." << std::endl;
        return 1;
    }
    
    std::cout << "The number chosen by the computer is: " << bnum << std::endl;

    if (ynum > bnum){
        std::cout << "You win!" << std::endl;
    }
    else if (ynum == bnum){
        std::cout << "It's a tie!" << std::endl;
    }
    else{
        std::cout << "The computer wins!" << std::endl;
    }

    return 0;
} 
