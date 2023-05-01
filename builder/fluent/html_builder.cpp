#include "html_builder.h"
#include "html_element.h"

HTMLBuilder::HTMLBuilder(std::string name)
{
    m_root = new HTMLElement(name);
}

HTMLBuilder::~HTMLBuilder()
{
    if (m_root != nullptr) {
        delete m_root;
        m_root = nullptr;
    }
}

HTMLBuilder* HTMLBuilder::addChildren(std::string name, std::string text)
{
    HTMLElement* element = new HTMLElement(name, text);
    m_root->addChildren(element);
    return this;
}

std::string HTMLBuilder::str() const
{
    return m_root->str();
}
