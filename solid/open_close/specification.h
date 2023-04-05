#ifndef __PRODUCT_SPECIFICATION__
#define __PRODUCT_SPECIFICATION__

template <typename T>
class Specification
{
    public:
        virtual bool isSatisfied(T* item) = 0;
};

#endif
