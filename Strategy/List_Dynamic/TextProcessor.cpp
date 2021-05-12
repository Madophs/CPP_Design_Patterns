#include "TextProcessor.h"
#include <assert.h>

TextProcessor::TextProcessor(ListStrategyType i_listStrategyType)
{
    this->m_pListStrategy = std::make_unique<ListStrategy>();
    this->m_listStrategyType = i_listStrategyType;
}

void TextProcessor::appendList(std::vector<std::string> i_itemList)
{
    m_pListStrategy->start(m_oss);
    for (std::string& item : i_itemList)
        m_pListStrategy->appendItem(m_oss, item);
    m_pListStrategy->end(m_oss);
}

void TextProcessor::setStrategy(ListStrategyType i_listStrategyType)
{
    this->m_listStrategyType = i_listStrategyType;
    
    this->releaseListStrategyPtr();

    switch (m_listStrategyType)
    {
        case ListStrategyType::Default:
            m_pListStrategy = std::make_unique<ListStrategy>();
            break;
        case ListStrategyType::HTML:
            m_pListStrategy = std::make_unique<HTMLStrategy>();
            break;
        case ListStrategyType::Markdown:
            m_pListStrategy = std::make_unique<MarkdownStrategy>();
            break;
        default:
            std::cerr << "[ERROR] Unknown list strategy type" << std::endl;
            exit(EXIT_FAILURE);
    };
}

void TextProcessor::clearStreamBuf()
{
    this->m_oss.str(std::string());
}

std::string TextProcessor::getStreamObjStr() const
{
    return m_oss.str();
}

std::ostream& operator << (std::ostream& out, TextProcessor& i_textProcessor) {
    out << i_textProcessor.getStreamObjStr();
    return out;
}

/* Private function defintions */

void TextProcessor::releaseListStrategyPtr()
{
    // Nothing to do here
    if (m_pListStrategy == nullptr || m_pListStrategy.get() == nullptr)
        return;
    
    ListStrategy* listStrategyPtr = m_pListStrategy.release();

    assert(m_pListStrategy.get() == nullptr);
    assert(m_pListStrategy == nullptr);

    if (listStrategyPtr != nullptr)
        delete listStrategyPtr;
}
