#include "1-LL.h"
#include "4-Things.h"

#include <iostream>
using namespace std;

Things::Things()
{
    courseNumber = 1;
    noOfItems = 0;
    d = nullptr;
    cout << "Constructor called " << endl;
}

Things::~Things()
{
    cout << "**Desctructor called**" << endl;
    delete[] d;
    d = NULL;
}

Things::Things(int courseN, int noItems, double *array)
{

    courseNumber = courseN;
    noOfItems = noItems;
    d = new double[noOfItems];
    for (int i = 0; i < noOfItems; i++)
    {
        d[i] = array[i];
    }
}

bool operator<(const Things &left, const Things &right)
{
    bool success;
    if (left.courseNumber > right.courseNumber)
    {
        success = true;
    }
    else
    {
        success = false;
    }
    return success;
}
bool operator>(const Things &left, const Things &right)
{
    bool success;
    if (left.courseNumber < right.courseNumber)
    {
        success = true;
    }
    else
    {
        success = false;
    }
    return success;
}

ostream &operator<<(ostream &as, const Things &right)
{

    as << "Course Number: " << right.courseNumber << endl;
    double sum = 0;
    int count = 0;
    for (int i = 0; i < right.noOfItems; i++)
    {
        count++;
        as << right.d[i] << endl;
        sum += right.d[i];
    }
    double ans = sum / count;
    cout << "Avergae of Grades is: " << sum << endl;
    return as;
}

Things::Things(const Things &right)
{

    courseNumber = right.courseNumber;
    noOfItems = right.noOfItems;
    d = new double[noOfItems];
    for (int i = 0; i < noOfItems; i++)
        d[i] = right.d[i];
}

Things &Things::operator=(const Things &right)
{
    if (this != &right)
    {
        if (d != nullptr)
            delete d;
        courseNumber = right.courseNumber;
        noOfItems = right.noOfItems;
        d = new double[noOfItems];
        for (int i = 0; i < noOfItems; i++)
        {
            d[i] = right.d[i];
        }
    }
    else
    {
        cout << "Objects are same!!!!" << endl;
    }
    return *this;
}
