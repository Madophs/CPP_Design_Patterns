#include "product_filter.h"

std::vector<Product> ProductFilter::apply(std::vector<Product> items, Specification<Product> &specification)
{
    std::vector<Product> results;
    for (auto &item: items) {
        if (specification.isSatisfied(&item)) {
            results.push_back(item);
        }
    }
    return results;
}

std::vector<Product> ProductFilter::apply(std::vector<Product> items, std::vector<Specification<Product>*> &specifications)
{
    std::vector<Product> results;
    for (Product& item : items) {
        bool allIsSatisfied = true;
        for (Specification<Product> *spec : specifications) {
            allIsSatisfied &= spec->isSatisfied(&item);
        }
        if (allIsSatisfied) {
            results.push_back(item);
        }
    }
    return results;
}

