#include "TextProcessor.h"

int main()
{
    std::vector<std::string> itemList({
        "1", "2", "3", "4", "5", "6"
    });
    TextProcessor tp;

    /* Default strategy */
    tp.appendList(itemList);
    std::cout << tp << std::endl;

    /* HTML strategy */
    tp.clearStreamBuf();
    tp.setStrategy(ListStrategyType::HTML);
    tp.appendList(itemList);
    std::cout << tp << std::endl;

    /* Markdown strategy */
    tp.clearStreamBuf();
    tp.setStrategy(ListStrategyType::Markdown);
    tp.appendList(itemList);
    std::cout << tp << std::endl;
    return 0;
}