#ifndef __PRODUCT__
#define __PRODUCT__
#include <iostream>
#include <ostream>
#include "product_enums.h"

class Product {
    public:
        Product(std::string name, Brand brand, Color color, Size size);

        std::string getName() const
        {
            return m_name;
        }

        Color getColor() const
        {
            return m_color;
        }

        Brand getBrand() const
        {
            return m_brand;
        }

        Size getSize() const
        {
            return m_size;
        }

        friend std::ostream& operator << (std::ostream &out, const Product &product);

    protected:
        std::string m_name;
        Brand m_brand;
        Color m_color;
        Size m_size;
};

#endif
