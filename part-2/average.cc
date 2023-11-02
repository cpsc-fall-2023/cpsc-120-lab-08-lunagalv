// Luna Galvan
// Lulegalvan@csu.fullerton.edu
// @lunagalvan
// Partners: @lunagalvan

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (argc <= 1) {
    std::cout << "error: you must suppy at least one number\n";
    return 1;
  }
  double sum = 0.0;
  for (int i = 1; i < argc; i++) {
    sum += std::stod(arguments[i]);
  }
  double average = 0.0;
  average = sum / (argc - 1);
  std::cout << "average = " << average << std::endl;

  return 0;
}
