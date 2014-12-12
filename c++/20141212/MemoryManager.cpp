#include <stdlib.h>

#include "MemoryManager.h"

MemoryManager::MemoryManager()
{
}

MemoryManager::~MemoryManager()
{
}

void* MemoryManager::allocate(size_t size)
{
    return malloc(size);
}

void MemoryManager::free(void* memory)
{
}


static MemoryManager *gMemoryManager = nullptr;

void* Complex::operator new(size_t size)
{
    if (!gMemoryManager)
        gMemoryManager = new MemoryManager();
    return gMemoryManager->allocate(size);
}

void* Complex::operator new[](size_t size)
{
    if (!gMemoryManager)
        gMemoryManager = new MemoryManager();
        return gMemoryManager->allocate(size);
        }

void Complex::operator delete(void* pointerToDelete)
{
    if (!gMemoryManager)
        gMemoryManager = new MemoryManager();
    gMemoryManager->free(pointerToDelete);
}

void Complex::operator delete[](void* pointerToDelete)
{
    if (!gMemoryManager)
        gMemoryManager = new MemoryManager();
        gMemoryManager->free(pointerToDelete);
}

/*
Complex* array[1000];
for (int i = 0;i  <  5000; i++) {
    for (int j = 0; j  <  1000; j++) {
        array[j] = new Complex (i, j);
        std::cout<<" l "<<std::endl;
        }
        for (int j = 0; j  <  1000; j++) {
            delete array[j];
            std::cout<<" h "<<std::endl;
        }
        }
        std::cout<<" fuck "<<std::endl;
*/

