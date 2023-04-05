#include "color_specification.h"

ColorSpecification::ColorSpecification(Color color) : m_color(color)
{
}

bool ColorSpecification::isSatisfied(Product *product)
{
    return m_color == product->getColor();
}
