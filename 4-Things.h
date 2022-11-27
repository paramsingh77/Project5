#include "1-LL.h"
#include <iostream>
using namespace std;

/************************THINGS CLASS********************************/
class Things
{
    // data members
    int courseNumber;
    int noOfItems;
    double *d;

public:
    // constructors
    Things();
    Things(int courseN, int noItems, double *array);

    // Copy Constructor
    Things(const Things &right);

    // Destructor
    ~Things();
    // Assignment Operator
    Things &operator=(const Things &right);

    // friend functions
    friend bool operator<(const Things &left, const Things &right);
    friend bool operator>(const Things &left, const Things &right);
    friend ostream &operator<<(ostream &as, const Things &right);
};