//
// Created by tombr on 17/08/2017.
//

#ifndef CASTING_PERSON_H
#define CASTING_PERSON_H


#include <string>
#include "Resource.h"
#include <memory>

class Person {
private:
    std::string first_name;
    std::string last_name;
    int arbitrary_number;
    std::unique_ptr<Resource> pResource;
public:
    Person(std::string first, std::string last, int arbitrary);
    ~Person(); // not needed in share_ptr
    std::string Get_Name()const;
    int Get_number() const { return  arbitrary_number; } // by adding word const after function name allow us to use this function with const objects as we guarantee that it will not change anything
    void Set_number(int number) { arbitrary_number = number; }
    void Set_First_name(std::string first) {first_name = first; }
    void Set_Resource(std::string resource_name);
    std::string Get_Resource_Name() const { return pResource->Get_Name();}
};


#endif //CASTING_PERSON_H
