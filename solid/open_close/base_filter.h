#ifndef __BASE_FILTER__
#define __BASE_FILTER__

#include "product.h"
#include "specification.h"
#include <vector>

template <typename T>
class BaseFilter
{
    public:
        virtual std::vector<T> apply(std::vector<T> items, Specification<T>& specification) = 0;

        virtual std::vector<T> apply(std::vector<T> items, std::vector<Specification<T>*> &specifications) = 0;
};

#endif
