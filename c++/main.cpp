#include <iostream>
#include "minorities.h"

void menu() {

  int choice = 0;

  std::cout << "Hi, welcome to Bofa, \n"
            << "Input 1 for Manager\n"
            << "Input 2 for Customer\n"
            << "Input 3 to Exit!\n";

  std::cin >> choice;


    if (choice == 1) {
      managerMenu();
    }
    if (choice == 2) {
      customerMenu();
    }
    if (choice == 3) {
      return;
    }
}

int main() {

  menu();

  return 0;
}
