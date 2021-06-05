// For review purposes only! Does not represent the actual solution!

 #include "Person.h"

Person::Person()
{
        name="none";
        age=0;
}

Person::Person(string nm, int ag)
{
        name=nm;
        age=ag;
}

Person::~Person(){
}

string Person::getName() const
{
        return name;
}

int Person::getAge() const
{
        return age;
}

void Person::setName(string nm)
{
        name = nm;
}

void Person::setAge(int ag)
{
        age = ag;
}
