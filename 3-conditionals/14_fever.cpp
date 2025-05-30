// Fever 🤒
// Codédex

#include <iostream>

int main() {
  int temperature;
  std::cout << ("Enter the temperature: ");
  std::cin >> temperature;

  if (temp >= 100) {
    std::cout << "You have a fever. 🤒\n";
  }
  else {
    std::cout << "You do not have a fever. 🕺\n";
  }
}
