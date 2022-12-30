#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  
  std::cout << "shoot! \n";
  std::cin >> user;

  if (user == 1) {
    std::cout << "User choose: ✊\n";
  }
  else if (user == 2) {
    std::cout << "User choose: ✋\n"; 
  }
  else {
    std::cout << "User choose: ✌️\n"; 
  }

  if (computer == 1) {
    std::cout << "Computer choose: ✊\n";
  }
  else if (computer == 2) {
    std::cout << "Computer choose: ✋\n"; 
  }
  else {
    std::cout << "Computer choose: ✌️\n"; 
  }
  
  if (user == computer) {
    std::cout << "Its a tie\n";
  }

  else if (user == 1) {
    if (computer == 2) {
      std::cout << "Computer Wins!\n";
    }
    else if (computer == 3) {
      std::cout << "User Wins!\n";
    }
  }

  else if (user == 2) {
    if (computer == 1) {
      std::cout << "You Win!\n";
    }
    else if (computer == 3) {
      std::cout << "Computer Wins!\n";
    }
  }

  else if (user == 3) {
    if (computer == 1) {
      std::cout << "Computer Wins!\n";
    }
    
    else if (computer == 2) {
      std::cout << "You Win!\n";
    }
  }

  return 0;

}