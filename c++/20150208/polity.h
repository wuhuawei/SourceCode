#ifndef _MYPROJECT_PLLITY_H_
#define _MYPROJECT_PLLITY_H_

#include <stdlib.h>
#include <stdio.h>

#include "PolityTest.h"

template <class T>
struct OpNewCreateor
{
    static T* Create()
    {
        return new T();
    }
};

template <class T>
struct MallocCreator
{
    static T* Creator()
    {
        void* buffer = malloc(sizeof(T));
        if (!buffer)
            return 0;
        return new(buffer) T;
    };
};

template <class T>
struct prototypeCreator
{
    prototypeCreator(const T* pt) : m_pPrototype_(pt) { }
    
    void SetPrototype(const T* pt)
    {
        m_pPrototype_ = pt;
    }
    T* GetPrototype()
    {
        return m_pPrototype_;
    }
private:
    T* m_pPrototype_;
};

// WidgetManage is host or host classes
template <class CreationPolicy>
class WidgetManage : public CreationPolicy
{
};

typedef WidgetManage<OpNewCreateor<std::string>> mallocWidget;

#endif