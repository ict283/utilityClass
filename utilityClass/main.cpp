// For review purposes only! Does not represent the actual solution!!

#include "Utilities/IO.h"
#include "Classes/Person.h"
#include "Classes/Prime.h"

using namespace std; //https://www.geeksforgeeks.org/namespace-in-c/

int main(void)
{
        IO util;

        /* File IO - Person Class */
        Person person;
        bool res_1 = util.personReader("person_in.txt",person);
        bool res_2 = util.personWriter("person_out.txt",person);

        /* File IO - Prime Class */
        Prime prime;
        bool res_3 = util.primeReader("prime_in.txt",prime);
        bool res_4 = util.primeWriter("prime_out.txt",prime);

        /* Debug: Show IO results */
        cout<<"personReader : "<<res_1<<endl;
        cout<<"personWriter : "<<res_2<<endl;
        cout<<"primeReader : "<<res_3<<endl;
        cout<<"primeWriter : "<<res_4<<endl;

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
