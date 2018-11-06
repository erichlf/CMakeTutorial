// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>
#include "TutorialConfig.h"

int main (int argc, char *argv[])
{
  if (argc < 2)
    {
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
    }
  std::string arg(argv[1]);
  if (arg == "--version") {
    std::cout << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    return 0;
  }

  double inputValue = std::stod(arg);

  double outputValue = sqrt(inputValue);
  std::cout << "The square root of "
            << inputValue << " is " << outputValue << std::endl;
  return 0;
}
