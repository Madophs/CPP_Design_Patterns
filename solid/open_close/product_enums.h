#ifndef __PRODUCT_ENUMS__
#define __PRODUCT_ENUMS__

enum Brand {Sony, Samsung, Apple};
enum Color {Blue, Black, White};
enum Size {Small, Medium, Large};

inline const char * enum2String(Brand brand)
{
    switch (brand) {
        case Sony:
            return "Sony";
        case Samsung:
            return "Samsung";
        case Apple:
            return "Apple";
        default:
            return "Unknown";
    }
}

inline const char * enum2String(Color color)
{
    switch (color) {
        case White:
            return "White";
        case Black:
            return "Black";
        case Blue:
            return "Blue";
        default:
            return "Unknown";
    }
}

inline const char * enum2String(Size size)
{
    switch (size) {
        case Small:
            return "Small";
        case Medium:
            return "Medium";
        case Large:
            return "Large";
        default:
            return "Unknown";
    }
}

#endif
