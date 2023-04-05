#ifndef __COLOR_SPECIFICATION__
#define __COLOR_SPECIFICATION__

#include "specification.h"
#include "product.h"

class ColorSpecification : public Specification<Product>
{
    public:
        ColorSpecification(Color color);

        bool isSatisfied(Product *product) override;

    private:
        Color m_color;
};

#endif
