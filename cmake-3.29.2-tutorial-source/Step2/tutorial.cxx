// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>

// TODO 5: Include MathFunctions.h
// TODO 5: 使用头文件 MathFunctions.h
#include "MathFunctions.h"

#include "TutorialConfig.h"

int main(int argc, char* argv[])
{
  if (argc < 2) {
    // report version
    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  // convert input to double
  const double inputValue = std::stod(argv[1]);

  // TODO 6: Replace sqrt with mathfunctions::sqrt
  // TOOD 6: 用 mathfunctions::sqrt 替换 sqrt （调用库函数）
  // calculate square root
  const double outputValue = mathfunctions::sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}
