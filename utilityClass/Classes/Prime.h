// For review purposes only! Does not represent the actual solution!

#ifndef Prime_h
#define Prime_h

#include <ctype.h> //http://www.cplusplus.com/reference/cctype/

using namespace std; //https://www.geeksforgeeks.org/namespace-in-c/

/*
   A prime is:
   - a number that is divisible only by itself and 1
   - non-negative
   - not 0 or 1
 */

class Prime
{

public:

Prime();

~Prime();

bool setPrime(const int n);

int getPrime() const;

private:

bool isPrime(const int n);

int prime_num;

};

#endif /* Prime_h */
