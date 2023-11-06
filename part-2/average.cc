// Jonathan and Jasmine
// jonathon.dieppp@csu.fullerton.edu
// @JDiep05
// Partners: @Jasminiee

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  std::vector<double> digits;
  double sum{0};

  if (arguments.size() <= 2) {
    std::cout << "error: you must supply at least one number \n";
    return 1;
  }

  for (int i = 1; i < argc; i++) {
    digits.push_back(std::stod(arguments[i]));
  }

  for (double num  : digits) {

    std::cout << num << "\n";
    sum += num;
  }
  std::cout << sum << std::endl;
  double average{sum / (argc - 1)};

  std::cout << "average = " << average << "\n";
  return 0;
}
