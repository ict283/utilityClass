// For review purposes only! Does not represent the actual solution!

#ifndef Person_H
#define Person_H

#include <string> //http://www.cplusplus.com/reference/string/string/

using namespace std; //https://www.geeksforgeeks.org/namespace-in-c/

class Person
{
public:

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
