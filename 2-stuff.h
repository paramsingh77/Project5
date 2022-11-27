#ifndef _STUFF_H
#define _STUFF_H
#include <iostream>
using namespace std;

const int ThanksSize = 2;

/***************************CLASS STUFF******************************/
class Stuff
{
    // data members
    string LastName;
    string FirstName;
    string StreetAddress;
    string city;
    string ST;
    string zip;
    string thanks[ThanksSize];

public:
    // Constructors
    Stuff();
    Stuff(string LastN, string firstN, string street, string cT, string state,
          string zipCode, string thanksArray[]);

    // friend functions
    friend bool operator<(const Stuff &left, const Stuff &right);
    friend bool operator>(const Stuff &left, const Stuff &right);
    friend ostream &operator<<(ostream &as, const Stuff &right);
};

#endif