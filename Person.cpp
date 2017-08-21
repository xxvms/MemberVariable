//
// Created by tombr on 17/08/2017.
//

#include "Person.h"
Person::Person(std::string first, std::string last, int arbitrary):
        first_name(first), last_name(last), arbitrary_number(arbitrary)
{}

Person::~Person() {

    // delete pResource; // share_ptr does not need delete inside destructor as this will be taken care automatically
}


std::string Person::Get_Name()const {
    return first_name + " " + last_name;
}

void Person::Set_Resource(std::string resource_name) {

    pResource.reset(new Resource(resource_name));

}


