#ifndef _VEC_H_
#define _VEC_H_

#include <memory>

template <typename T>
class vec
{
public:
    vec() : element(nullptr), first_free(nullptr), cap(nullptr);
    ~vec();
private:
    T* element;
    T* first_free;
    T* cap;
    
    std::allocator<T> allocate;
};

const
class nullptr_t_t
{
public:
} nullptr_t {};
#endif