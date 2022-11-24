#include <iostream>
#include <fstream>
#include <string>

void managerMenu() {
  std::string pw;
  std::cout << "Please input the administrative password: \n";

  std::cin >> pw;

  std::ofstream managerFile; //writing to a file

  managerFile.open("managerDatabase.txt");
  managerFile << "I heckin love minorities";
}

void customerMenu() {
  std::cout << "aww you're just a lousy customer huh\n";
}
