#include <iostream>
#include <vector>
#include <type_traits>
#include "color_specification.h"
#include "brand_specification.h"
#include "product.h"
#include "product_filter.h"
#include "size_specification.h"
#include "specification.h"

std::vector<Product> getProducts() {
    std::vector<Product> products;
    products.push_back(Product("s10", Samsung, Black, Medium));
    products.push_back(Product("Apple 13", Apple, Black, Large));
    products.push_back(Product("Galaxy", Samsung, Blue, Large));
    products.push_back(Product("Lua", Sony, White, Small));
    products.push_back(Product("Marshmallow", Samsung, Blue, Large));
    products.push_back(Product("Apple 11", Apple, Black, Medium));
    products.push_back(Product("Sony Stellar", Sony, White, Medium));
    products.push_back(Product("Young", Samsung, White, Small));
    return products;
}

int main()
{
    ColorSpecification colorSpec(Color::White);
    BrandSpecification brandSpec(Brand::Sony);
    SizeSpecification sizeSpec(Size::Medium);

    std::vector<Specification<Product>*> specs;
    specs.push_back(&colorSpec);
    specs.push_back(&brandSpec);
    specs.push_back(&sizeSpec);

    ProductFilter productFilter;
    auto products = getProducts();
    auto results = productFilter.apply(products, specs);

    for (auto &item: results) {
        std::cout << item << std::endl;
    }
    return 0;
}
