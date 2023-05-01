#ifndef __PERSON_JOB_BUILDER__
#define __PERSON_JOB_BUILDER__

#include "person_builder_base.h"

class PersonJobBuilder : public PersonBuilderBase
{
    typedef PersonJobBuilder self;
    public:
        PersonJobBuilder(Person& person) : PersonBuilderBase(person) {}

        self& at(std::string companyName)
        {
            m_person.m_companyName = companyName;
            return *this;
        }

        self& as(std::string position)
        {
            m_person.m_position = position;
            return *this;
        }

        self& gaining(int annualIncome)
        {
            m_person.m_annualIncome = annualIncome;
            return *this;
        }
};
#endif
