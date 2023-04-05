#ifndef LIST_STRATEGIES_H
#define LIST_STRATEGIES_H

#include <iostream>
#include <sstream>

enum ListStrategyType
{
    Default, HTML, Markdown
};

struct ListStrategy
{
    virtual void start(std::ostringstream& oss);
    virtual void appendItem(std::ostringstream& oss, std::string& item);
    virtual void end(std::ostringstream& oss);
};

struct HTMLStrategy : ListStrategy
{
    virtual void start(std::ostringstream& oss) override;
    virtual void appendItem(std::ostringstream& oss, std::string& item) override;
    virtual void end(std::ostringstream& oss) override;
};

struct MarkdownStrategy : ListStrategy
{
    virtual void appendItem(std::ostringstream& oss, std::string& item) override;
};

#endif