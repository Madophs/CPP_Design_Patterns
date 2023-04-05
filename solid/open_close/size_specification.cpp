#include "size_specification.h"

SizeSpecification::SizeSpecification(Size size) : m_size(size)
{
}

bool SizeSpecification::isSatisfied(Product *item)
{
    return m_size == item->getSize();
}
