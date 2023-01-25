#include <iostream>

int main() {
  
  int dog_age = 5;//This version of the program is for dogs older than 2 years old.
  int early_years;
  int later_years;
  int human_years;

  early_years = 21;
  later_years = (dog_age - 2) * 4;
  human_years = early_years + later_years;

  std::cout << "My name is Emat! Ruf ruff, I am " << human_years << " years old in human years." << "\n";
}
