#ifndef __PERSON_ADDRESS_BUILDER__
#define __PERSON_ADDRESS_BUILDER__

#include "person_builder_base.h"

class PersonAddressBuilder : public PersonBuilderBase
{
    typedef PersonAddressBuilder self;
    public:
        PersonAddressBuilder(Person& person) : PersonBuilderBase(person)
        {
        }

        self& at(std::string street_address)
        {
            m_person.m_streetAddress = street_address;
            return *this;
        }

        self& withPostcode(std::string postCode)
        {
            m_person.m_postCode = postCode;
            return *this;
        }

        self& in(std::string city)
        {
            m_person.m_city = city;
            return *this;
        }
};

#endif
