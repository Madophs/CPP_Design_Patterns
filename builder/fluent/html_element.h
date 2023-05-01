#ifndef __HTML_ELEMENT__
#define __HTML_ELEMENT__

#include "html_builder.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <memory>

class HTMLElement
{
    public:
        HTMLElement(std::string name, std::string text = "");
        ~HTMLElement();

        static std::unique_ptr<HTMLBuilder> build(std::string name)
        {
            return std::make_unique<HTMLBuilder>(name);
        }

        void setText(std::string text);
        void setIndentLevel(int indentLevel);
        void addChildren(HTMLElement* element);
        std::string str() const;
    protected:
        std::string m_name;
        std::string m_text;
        int m_indentLevel;
        std::vector<HTMLElement*> m_children;
};
#endif
