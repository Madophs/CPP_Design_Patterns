#include "specification_builder.h"
#include "brand_specification.h"
#include "color_specification.h"
#include "size_specification.h"

Specification<Product>* SpecificationBuilder::make(Brand brand)
{
    return new BrandSpecification(brand);
}

Specification<Product>* SpecificationBuilder::make(Color color)
{
    return new ColorSpecification(color);
}

Specification<Product>* SpecificationBuilder::make(Size size)
{
    return new SizeSpecification(size);
}
