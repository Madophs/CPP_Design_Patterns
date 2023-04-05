#ifndef __SPECIFICATION_BUILDER__
#define __SPECIFICATION_BUILDER__

#include "brand_specification.h"
#include "color_specification.h"
#include "product.h"
#include "size_specification.h"
#include "specification.h"

class SpecificationBuilder
{
    public:
        SpecificationBuilder(const SpecificationBuilder&) = delete;

        SpecificationBuilder(const SpecificationBuilder&&) = delete;

        static Specification<Product>* make(Brand brand);

        static Specification<Product>* make(Color color);

        static Specification<Product>* make(Size size);

    private:
        SpecificationBuilder() {}
};

#endif
