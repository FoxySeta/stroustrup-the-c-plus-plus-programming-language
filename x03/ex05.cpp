/*
 * X.3 [5] (∗1) Write out a bool, a char, an int, a double, and a string.
 */

#include <iostream>
#include <string>

int main() {
  std::cout << false << '*' << 0 << 1.2 << std::string{"string"} << '\n';
}
