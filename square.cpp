#include <iostream>

int main() {

  int i = 0;
  int square = 0;

  while (i <= 9) {
    square = i * i;
    std::cout << i << " " << square << "\n";
    i++;
  }

}
