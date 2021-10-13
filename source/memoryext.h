#pragma once

#include <memory>

namespace std _GLIBCXX_VISIBILITY(default)
{

template<typename T>
std::unique_ptr<T> uPtr(void * p){
    return std::unique_ptr<T>(static_cast<T *>(p));
}

}
