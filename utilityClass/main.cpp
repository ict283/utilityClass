// For review purposes only! Does not represent the actual solution!!

#include <stdio.h>
#include <iostream>
#include <string>
#include "Utilities/IO.h"
#include "Classes/Person.h"
#include "Classes/Prime.h"

using namespace std;

int main(void)
{
        IO util;
    
        /* File IO - Person Class */
        Person person;
        util.personReader("person_in.txt",person);
        util.personWriter("person_out.txt",person);

        /* File IO - Prime Class */
        Prime prime;
        util.primeReader("prime_in.txt",prime);
        util.primeWriter("prime_out.txt",prime);

        return 0;
}

/*
 Additional Notes:
 
 What's a stream?
 
 A stream represents a sequence of objects
 (usually bytes, but not necessarily so),
 which can be accessed in sequential order.
 
 https://stackoverflow.com/questions/1216380/what-is-a-stream
 */
