// Jonathan and Jasmine
// jonathon.dieppp@csu.fullerton.edu
// @JDiep05
// Partners: @Jasminiee

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  std::vector<double> values;
  double sum{0};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number \n";
    return 1;
  }

  for (int i = 1; i < argc; i++) {
    values.push_back(std::stod(arguments[i]));
  }

  for (double element  : values) {
    sum += element;
  }

  double average{sum / (argc - 1)};
  std::cout << "average = " << average << "\n";
  return 0;
}
