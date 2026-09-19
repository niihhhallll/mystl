#include "../include/vector.hpp"
#include <memory>
#include <iostream>

template<typename t>
mystl::myvector<t>::myvector(int size)
{
    this->ptr = std::make_shared<t[]>(size);
    this->size_of_vector = size;
    std::cout << "Constructer activated." << std::endl;
    return;
}
