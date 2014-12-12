#include "CString.h"
#include <stdarg.h>
#include <stdio.h>
#include <string>

CString::~CString()
{
}


CSFuncString::CSFuncString()
{
}

CSFuncString::~CSFuncString()
{
}

void CSFuncString::printf(int format, ...)
{
//    CSFuncString string;
//    string.printf(1, 'a', 'b');
    va_list argp;
    va_start(argp, format);
    char para;
    int parano = 0;
    while (1)
    {
        para = va_arg(argp, int);
        if (strcmp(&para,"") ==0)
            break;
        parano++;
    }
    va_end(argp);
}

