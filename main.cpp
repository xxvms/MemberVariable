#include <iostream>
#include "Person.h"
#include <string>

int main() {
    Person John("John", "Snow", 345);
    John.Set_Resource("John Resource");
    John.Set_Resource("John 2nd Resource");
    //Person Tyrion = John;
    //John = Tyrion;
    std::string s1 = John.Get_Resource_Name();



    return 0;
}