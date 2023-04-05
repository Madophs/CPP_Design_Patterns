#ifndef TEXT_PROCESSOR_H
#define TEXT_PROCESSOR_H

#include "ListStrategies.h"
#include <vector>
#include <memory>

class TextProcessor
{
    public:
    TextProcessor(ListStrategyType i_listStrategyType = ListStrategyType::Default);

    void appendList(std::vector<std::string> i_itemsList);
    void setStrategy(ListStrategyType i_listStrategyType);
    void clearStreamBuf();
    std::string getStreamObjStr() const;
    friend std::ostream& operator << (std::ostream& out, TextProcessor& i_textProcessor);   

    private:
    void releaseListStrategyPtr();
    std::ostringstream m_oss;
    std::unique_ptr<ListStrategy> m_pListStrategy;
    ListStrategyType m_listStrategyType;
};

#endif