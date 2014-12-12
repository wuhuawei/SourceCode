#ifndef __CSTRING_H_
#define __CSTRING_H_

class CString
{
public:
//    virtual ~CString();
    ~CString();
};

class CSFuncString : public CString
{
public:
    CSFuncString();
    ~CSFuncString();
    
    void printf(int format, ...);
};

#endif