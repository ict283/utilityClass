// For review purposes only! Does not represent the actual solution!

#include "IO.h"

IO::IO()
{
    cout<<"IO Ready!"<<endl;
}

IO::~IO()
{
    cout<<"IO Shut Down!"<<endl;
}

/* file readers */

bool IO::personReader (string file, Person& person){
    
    bool result = false;
    ifstream infile (file);
    
    if(infile.is_open())
    {
        string str;
        int num;
        getline(infile, str,',');
        infile >> num;
        person.setName(str);
        person.setAge(num);
        infile.close();
        result=true;
    }
    return result;
}


bool IO::primeReader (string file, Prime& prime){
    
        bool result = false;
        ifstream infile (file);
    
        if(infile.is_open())
        {
            int num;
            infile >> num;
            prime.setPrime(num);
            infile.close();
            result=true;
        }
        return result;
}

/* file writers */

bool IO::personWriter (string file, Person& person){
        
        bool result = false;
        ofstream outfile (file);
    
        if(outfile.is_open())
        {
            outfile<<"personWriter : "<<person.getName()<<", "<<person.getAge();
            outfile.close();
            result=true;
        }
        return result;
}


bool IO::primeWriter (string file, Prime& prime){
    
        bool result = false;
        ofstream outfile (file);
    
        if(outfile.is_open())
        {
            outfile<<"primeWriter : "<<prime.getPrime();
            outfile.close();
            result = true;
        }
        return result;
}
