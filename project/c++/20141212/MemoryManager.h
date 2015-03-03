//mark: http://www.ibm.com/developerworks/cn/education/aix/au-memorymanager/index.html
// 20141212

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
