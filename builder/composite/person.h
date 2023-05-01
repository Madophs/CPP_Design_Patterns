#pragma once

#include <iostream>
#include <memory>
#include <ostream>

class PersonBuilder;
class PersonAddressBuilder;
class PersonJobBuilder;

class Person
{
    public:
        Person(std::string name) : m_name(name) { }
        Person() {}

        static PersonBuilder create(std::string name);

        friend std::ostream& operator <<(std::ostream &out, const Person& person) {
            out << "Name: " << person.m_name;
            out << "\nLives in " << person.m_city;
            out << "\nWorks at " << person.m_companyName;
            return out;
        }

        friend class PersonBuilder;
        friend class PersonAddressBuilder;
        friend class PersonJobBuilder;
    private:
        std::string m_name;
        std::string m_streetAddress, m_postCode, m_city;
        std::string m_companyName, m_position;
        int m_annualIncome;
};

