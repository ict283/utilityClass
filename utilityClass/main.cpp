// For review purposes only! Does not represent the actual solution!!

#include <stdio.h>
#include <iostream>
#include <fstream> //filestream
#include <string>
#include "Classes/Person.h"
#include "Classes/Prime.h"

using namespace std;

int main(void)
{
        //File IO - Person Class

        Person person;
        ifstream infile_1 ("person_in.txt");

        if(infile_1.is_open())
        {
                infile_1>>person;
                infile_1.close();
        }
        else
        {
                cout<<"Error reading file!"<<endl;
        }

        ofstream outfile_1 ("person_out.txt");

        if(outfile_1.is_open())
        {
                outfile_1<<person;
                outfile_1.close();
        }
        else
        {
                cout<<"Error writing file!"<<endl;
        }

        //File IO - Prime Class

        Prime prime;
        ifstream infile_2 ("prime_in.txt");

        if(infile_2.is_open())
        {
                infile_2>>prime;
        }
        else
        {
                cout<<"Error reading file!"<<endl;
        }

        ofstream outfile_2 ("prime_out.txt");

        if(outfile_2.is_open())
        {
                outfile_2<<prime;
                outfile_2.close();
        }
        else
        {
                cout<<"Error writing file!"<<endl;
        }

        return 0;
}
