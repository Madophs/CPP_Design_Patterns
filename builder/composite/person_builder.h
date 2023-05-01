#ifndef __PERSON_BUILDER__
#define __PERSON_BUILDER__

#include "person_builder_base.h"

class PersonBuilder : public PersonBuilderBase
{
    public:
        explicit PersonBuilder(std::string name) : m_person{name}, PersonBuilderBase{m_person}
        {
        }
    protected:
        Person m_person;
};

#endif

