#include "../include/vector.hpp"
#include <iostream>

int main() {
  // makes the capasity of myvector object size 10;
  // has template
  mystl::myvector<int> a(10);

  // this sets upto 4 elements in the myvector
  a[1] = 10;
  a[0] = 20;
  a[3] = 30;
  a[2] = 20;

  // this throws a error
  try {
    a[11] = 20;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  // this overloaded operator's also have methods inside them like for a[3]
  // there is .at and for setting or feeding the variable there is .set method
  // // this returns 30
  std::cout << a[3] << std::endl;
  a.pop();
  // returns 0
  std::cout << a[3] << std::endl;

  return 0;
}
