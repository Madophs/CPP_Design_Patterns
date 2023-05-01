#ifndef __PERSON_BUILDER_BASE__
#define __PERSON_BUILDER_BASE__

#include "person.h"

class PersonAddressBuilder;
class PersonJobBuilder;

class PersonBuilderBase
{
    public:
        PersonAddressBuilder lives() const;
        PersonJobBuilder works() const;
        operator Person()
        {
            return std::move(m_person);
        }
    protected:
        Person& m_person;
        explicit PersonBuilderBase(Person& person) : m_person(person)
        {
        }
};

#endif
