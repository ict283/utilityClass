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

ostream& operator << (ostream &os, const Person &P)
{
    os<<"Person : "<<P.getName()<<", "<<P.getAge()<<endl;
    
    return os;
}


istream& operator >> (istream &is, Person &P)
{
    string nm;
    int ag;
    
    if(is.peek()!='\n')
    {
        getline(is,nm,',');
        is>>ag;
    }
    else
    {
        is.ignore(1);
        getline(is,nm,',');
        is>>ag;
    }
    
    P.setName(nm);
    P.setAge(ag);
    
    return is;
}
