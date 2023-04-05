#include "ListStrategies.h"

/* List strategy definitions */
void ListStrategy::start(std::ostringstream& oss)
{
    // To be defined
}

void ListStrategy::appendItem(std::ostringstream& oss, std::string& item)
{
    oss << item << '\n';
}

void ListStrategy::end(std::ostringstream& oss)
{
    // To be defined
}

/* HTML strategy definitions */

void HTMLStrategy::start(std::ostringstream& oss)
{
    oss << "<ul>\n";
}

void HTMLStrategy::appendItem(std::ostringstream& oss, std::string& item)
{
    oss << "\t<li>" << item << "</li>\n";
}

void HTMLStrategy::end(std::ostringstream& oss)
{
    oss << "</ul>\n";
}

/* Markdown strategy definitions */

void MarkdownStrategy::appendItem(std::ostringstream& oss, std::string& item)
{
    oss << "*" << item << '\n';
}
