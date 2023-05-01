#include "person.h"
#include "person_builder.h"

PersonBuilder Person::create(std::string name)
{
    return PersonBuilder{name};
}
