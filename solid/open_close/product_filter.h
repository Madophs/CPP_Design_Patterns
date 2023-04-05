#ifndef __PRODUCT_FILTER__
#define __PRODUCT_FILTER__

#include "base_filter.h"

class ProductFilter : public BaseFilter<Product>
{
    public:
        std::vector<Product> apply(std::vector<Product> items, Specification<Product> &specification) override;
        std::vector<Product> apply(std::vector<Product> items, std::vector<Specification<Product>*> &specifications) override;
};

#endif
