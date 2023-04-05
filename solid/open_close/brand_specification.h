#ifndef __BRAND_SPECIFICATION__
#define __BRAND_SPECIFICATION__

#include "specification.h"
#include "product.h"

class BrandSpecification : public Specification<Product>
{
    public:
        BrandSpecification(Brand brand);

        bool isSatisfied(Product *item) override;
    private:
        Brand m_brand;
};

#endif
