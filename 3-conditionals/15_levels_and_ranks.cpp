// Levels and Ranks 💎
// Codédex

#include <iostream>

int main() {
  // Write code here
  int level;
  std::cout << "Enter your level: ";
  std::cin >> level;
  
  if (level <= 5) {
  std::cout << "🥉Bronze\n";
}
  else if (level <= 10) {
  std::cout << "🥈Silver\n";
}
  else if (level <= 15) {
  std::cout << "🥇Gold\n";
}
  else if (level <= 20) {
  std::cout << "🏅Platinum\n";
}
  else if (level <= 25) {
  std::cout << "💎Diamond\n";
}
}
