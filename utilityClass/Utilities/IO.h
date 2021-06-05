// For review purposes only! Does not represent the actual solution!

#ifndef IO_h
#define IO_h

#include <iostream> // https://www.cplusplus.com/reference/iostream/
#include <fstream>  // https://www.cplusplus.com/reference/fstream/
#include "../Classes/Person.h"
#include "../Classes/Prime.h"

using namespace std; //https://www.geeksforgeeks.org/namespace-in-c/

class IO
{
public:

IO();

~IO();

/* file readers */
bool personReader (string file, Person& person);

bool primeReader (string file, Prime& prime);

/* file writers */
bool personWriter (string file, Person& person);

bool primeWriter (string file, Prime& prime);

};

#endif /* IO_h */
