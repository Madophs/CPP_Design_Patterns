#include "product.h"
#include "product_enums.h"

Product::Product(std::string name, Brand brand, Color color, Size size) :
    m_name(name), m_brand(brand), m_color(color), m_size(size)
{
}

std::ostream& operator<<(std::ostream &out, const Product &product)
{
    out << product.getName() << " ->";
    out << " Brand: " << enum2String(product.getBrand());
    out << " Color: " << enum2String(product.getColor());
    out << " Size: " << enum2String(product.getSize());
    return out;
}
