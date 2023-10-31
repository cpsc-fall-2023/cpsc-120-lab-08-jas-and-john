// Jonathan and Jasmine
// jonathon.dieppp@csu.fullerton.edu
// @JDiep05
// Partners: @Jasminiee

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  double sum{0.0};

  if (arguments.size() <= 2) {
    std::cout << "error: you must supply at least one number \n";
    return 1;
  }

  for (const std::string& num : arguments) {
    if (num == arguments.at(0)) {
      continue;
    }
    double number{std::stod(num)};
    sum += number;
  }
  double average{sum / (static_cast<double>((arguments.size() - 1)))};

  std::cout << "average = " << average << "\n";
  return 0;
}
