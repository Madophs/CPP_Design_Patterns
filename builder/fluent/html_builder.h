#ifndef __HTML_BUILDER__
#define __HTML_BUILDER__

#include<iostream>

class HTMLElement;

class HTMLBuilder
{
    public:
        HTMLBuilder(std::string name);
        ~HTMLBuilder();
        HTMLBuilder* addChildren(std::string name, std::string text);
        std::string str() const;
    private:
        HTMLElement* m_root;
};

#endif
