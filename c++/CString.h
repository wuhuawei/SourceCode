/*
 * 可变参数
 */
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

void CSFuncString::printf(int format, ...)
{
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

// 调用范例
//    CSFuncString string;
//    string.printf(1, 'a', 'b');
