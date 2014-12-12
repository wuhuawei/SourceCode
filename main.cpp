//
//  main.cpp
//  cocosTest
//
//  Created by 华伟吴 on 14-9-5.
//  Copyright (c) 2014年 华伟吴. All rights reserved.
//

/*
 //    CString *pBase = NULL;
 //    pBase = new CSFuncString();
 //    delete pBase;
 
 //    std::cout<<typeid(int).name()<<std::endl;
 //    std::cout<<typeid(CString).name()<<std::endl;
 //    std::cout<<typeid(CString &).name()<<std::endl;
 //    std::cout<<typeid(CString *).name()<<std::endl;
 
 //    std::stack<int, std::vector<int>> vNumber;
 //    for (int i =0; i< 10; i++)
 //    {
 //        vNumber.push(i);
 //    }
 //    vNumber.pop();
 //    std::cout<< vNumber.size() <<std::endl;
 //    std::cout<< vNumber.top() <<std::endl;
 
// std::random_device rd;
// std::mt19937 gen(rd());

 */
#include <iostream>
#include <stack>
#include <vector>
#include <random>
#include <map>
#include <cmath>
#include <iomanip>
#include "time.h"
#include "CString.h"

#define n 100
#define m 2*n-1
typedef struct
{
    float weight;
    int lchild, rchild, parent;
}HNode;
typedef HNode HuffmanTree[m];

class IMemoryManager
{
public:
    virtual void* allocate(size_t size) = 0;
    virtual void free(void *) = 0;
};

class MemoryManager : public IMemoryManager
{
public:
    MemoryManager();
    virtual ~MemoryManager();
    
    virtual void* allocate(size_t size);
    virtual void free(void*);
};

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



class Complex
{
public:
    Complex (double a, double b): r (a), c (b) {}
private:
    double r; // Real Part
    double c; // Complex Part
    
public:
    
    void* operator new(size_t size);
    void* operator new[](size_t size);
    void operator delete(void* pointerToDelete);
    void operator delete[](void* pointerToDelete);
};
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

int main(int argc, const char * argv[])
{
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
    return 0;
}

