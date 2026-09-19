#pragma once
#include <iostream>
#include <memory>

// s means sucess
#define exit_s 0
// f means failure
#define exit_f 1

namespace mystl {
template <typename t> class myvector {

private:
  int size;
  int last_index = 0;
  std::shared_ptr<t[]> ptr;

  void check(int index)
  {
      //complete this method in the next session.
      return;
  }
public:
  myvector(int size) : size(size) {
    this->ptr = std::make_shared<t[]>(static_cast<std::size_t>(size));
    std::cout << "Constructer activated." << std::endl;
    return;
  }


  t at(int index) {
    if (index >= this->size) {
      throw std::runtime_error("Out of Bounds");
    }
    return ptr[index];
  }

  // method, set's the index element
  int set(int index, t element) {
    if (index >= this->size) {
      throw std::runtime_error("Out of bounds");
    }
    if (this->last_index < index) {
      this->last_index = index;
    }
    ptr[index] = element;
    return exit_s;
  }

  // method, pops out the last-element
  int pop() {
    ptr[last_index] = 0;
    return exit_s;
  }

  // operator overloading
  // used for printing only;
  const t& operator[](const int& index) const { return ptr[index]; }

  // this overloaded operator can do a[0] = 10; !!
  // used for taking input;
  t& operator[](const int& index)
  {
      if(this->last_index < index)
      {
          this->last_index = index;
      }
      return ptr[index];
  }
};
} // namespace mystl
