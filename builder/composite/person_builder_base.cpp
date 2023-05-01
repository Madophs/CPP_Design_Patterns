#include "person_builder_base.h"
#include "person_address_builder.h"
#include "person_job_builder.h"

PersonAddressBuilder PersonBuilderBase::lives() const
{
    return PersonAddressBuilder{m_person};
}

PersonJobBuilder PersonBuilderBase::works() const
{
    return PersonJobBuilder{m_person};
}
