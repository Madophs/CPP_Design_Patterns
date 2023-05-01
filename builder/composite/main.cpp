#include "person.h"
#include "person_builder.h"
#include "person_address_builder.h"
#include "person_job_builder.h"
#include <memory>

using namespace std;

int main()
{
    //Person person = Person::create()
    Person person = Person::create("Jair")
        .lives().at("matamoros").in("michoacan").withPostcode("999")
        .works().at("Linux foundation").as("Software developer").gaining(100000);
    cout << person << endl;
    return 0;
}
