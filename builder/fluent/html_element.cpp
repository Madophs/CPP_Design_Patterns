#include "html_element.h"

HTMLElement::HTMLElement(std::string name, std::string text)
{
    m_name = name;
    m_text = text;
    m_indentLevel = 0;
}

HTMLElement::~HTMLElement()
{
    for (HTMLElement* element : m_children) {
        delete element;
        element = nullptr;
    }
    m_children.clear();
}

void HTMLElement::setText(std::string text)
{
    m_text = text;
}

void HTMLElement::setIndentLevel(int indentLevel)
{
    m_indentLevel = indentLevel;
}

void HTMLElement::addChildren(HTMLElement* element)
{
    element->setIndentLevel(m_indentLevel + 1);
    m_children.emplace_back(element);
}

std::string HTMLElement::str() const
{
    std::stringstream ss;
    std::string indentation(m_indentLevel << 1, ' ');
    ss << indentation << "<" << m_name << ">\n";
    if (!m_text.empty()) {
        ss << indentation << "  " << m_text << '\n';
    }
    for (HTMLElement* child : m_children) {
        ss << child->str();
    }
    ss << indentation << "</" << m_name << ">\n";
    return ss.str();
}

