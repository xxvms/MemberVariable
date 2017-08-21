//
// Created by tombr on 17/08/2017.
//

#include <iostream>
#include "Resource.h"

Resource::Resource(std::string n): name(n) {
    std::cout << "Constructing " << name << '\n';
}

Resource::~Resource() {
    std::cout << "Destructing " << name << '\n';
}

Resource::Resource(const Resource &r) :name (r.name){
    std::cout << "copy constructing " << name << '\n';

}

Resource &Resource::operator=(const Resource &r) {
    //if class contains true Resource
    // check for self assignment then clean up existing resources
    // before setting new values
    name = r.Get_Name();
    std::cout << "copy assigning " << name << '\n';
    return *this;
}
