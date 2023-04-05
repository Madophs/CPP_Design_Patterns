#include "brand_specification.h"

BrandSpecification::BrandSpecification(Brand brand):m_brand(brand)
{
}

bool BrandSpecification::isSatisfied(Product *item)
{
    return m_brand == item->getBrand();
}
