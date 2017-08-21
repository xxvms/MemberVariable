//
// Created by tombr on 17/08/2017.
//

#ifndef CASTING_RESOURCE_H
#define CASTING_RESOURCE_H

#include <string>

class Resource {
private:
    std::string name;
public:
    Resource(std::string n); // default constructor that takes string
    Resource(const Resource& r); // copy constructor to make one resoure from other
    Resource& operator=(const Resource& r); // copy assignment operator to set values of one resource
    ~Resource();             // Destructor
    std::string Get_Name() const { return name; }
};

#endif //CASTING_RESOURCE_H
