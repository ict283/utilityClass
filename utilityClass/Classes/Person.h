// For review purposes only! Does not represent the actual solution!

#ifndef Person_H
#define Person_H

#include <stdio.h>
#include <iostream>

using namespace std;

class Person
{
public:
    
friend ostream& operator << (ostream &os, const Person &P);
     
friend istream& operator >> (istream &is, Person &P);

Person();

Person(string nm, int ag);

~Person();

string getName() const;

int getAge() const;

void setName(string nm);

void setAge(int ag);

private:

string name;

int age;
    
};

#endif
