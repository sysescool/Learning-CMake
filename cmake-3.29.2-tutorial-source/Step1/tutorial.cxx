// A simple program that computes the square root of a number
#include <cmath>
// TODO5: 移除下面的行，由于使用 cpp11 中的 std::stod, 不再需要 include cstdlib
// #include <cstdlib> // TODO 5: Remove this line
#include <iostream>
#include <string>

// TODO 11: Include TutorialConfig.h
// TODO 11: 包含 TutorialConfig.h
#include "TutorialConfig.h"

int main(int argc, char* argv[])
{
  if (argc < 2) {
    // TODO 12: Create a print statement using Tutorial_VERSION_MAJOR
    //          and Tutorial_VERSION_MINOR
    // TODO 12: 创建一个语句来打印 Tutorial_VERSION_MAJOR 和 Tutorial_VERSION_MINOR
    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  // convert input to double
  // TODO 4: Replace atof(argv[1]) with std::stod(argv[1])
  // TODO 4: 将 atof 改为 stod， 以使用 cpp 11 功能
  const double inputValue = std::stod(argv[1]);

  // calculate square root
  const double outputValue = sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}
