// For review purposes only! Does not represent the actual solution!

#include "Prime.h"

Prime::Prime(){
    prime_num = -1; //default value
}

Prime::~Prime(){
}

bool Prime::isPrime(const int n)
{
        if(isdigit(n)!=0)
        {
                return false;
        }

        if (n == 0 || n == 1 || n<0)
        {
                return false;
        }
        else
        {
                for (int i = 2; i <= n / 2; ++i)
                {
                        if (n % i == 0)
                        {
                                return false;
                        }
                }
        }
        return true;
}

bool Prime::setPrime(const int n)
{

        if(isPrime(n))
        {
                prime_num=n;
                return true;
        }
        else
                return false;
}

int Prime::getPrime() const
{
        return prime_num;
}
