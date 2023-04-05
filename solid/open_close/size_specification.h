#ifndef __SIZE_SPECIFICATION__
#define __SIZE_SPECIFICATION__

#include "specification.h"
#include "product.h"

class SizeSpecification : public Specification<Product>
{
    public:
        SizeSpecification(Size size);

        bool isSatisfied(Product *item) override;

    private:
        Size m_size;
};

#endif

