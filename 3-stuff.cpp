#include "1-LL.h"
#include "2-stuff.h"

#include <iostream>
using namespace std;

/**********************************************************************
Function/method Name - Stuff Constructor
Function/method Description  - This is a default constructor which will
assign default values to variables.
Return Value
Incoming Parameters
Outgoing Parameters
**********************************************************************/

Stuff::Stuff()
{
    LastName = "Uknwon";
    FirstName = "Not Available";
    StreetAddress = "Uknown-street";
    city = "uknown";
    ST = "Alabama";
    zip = "35632;";
}

/**********************************************************************
Function/method Name - Stuff parameterized constructor
Function/method Description  - This parameterized constructor will take
the value from the paramter and assign it to the data members.
Return Value -N/A
Incoming Parameters - N/A
Outgoing Parameters - N/A
**********************************************************************/

Stuff::Stuff(string LastN, string firstN, string street, string cT, string state, string zipCode, string thanksArray[])
{
    LastName = LastN;
    FirstName = firstN;
    StreetAddress = street;
    city = cT;
    ST = state;
    zip = zipCode;
    for (int i = 0; i < ThanksSize; i++)
    {
        thanks[i] = thanksArray[i];
    }
}

/**********************************************************************
Function/method Name - friend function of operator<
Function/method Description  - < operator will return if the condition will
true by comparing both the sides.
Return Value - N/A
Incoming Parameters - N/A
Outgoing Parameters -N/A
**********************************************************************/

/****************************************/
// help by Dr. Jenkins
bool operator<(const Stuff &left, const Stuff &right)
{
    return (left.LastName == right.LastName);
}

/**********************************************************************
Function/method Name - friend function of operator>
Function/method Description  - > operator will return if the condition will
true by comparing both the sides.
Return Value - N/A
Incoming Parameters - N/A
Outgoing Parameters -N/A
**********************************************************************/
bool operator>(const Stuff &left, const Stuff &right)
{
    return (left.LastName < right.LastName);
}
/*********************************************/

/**********************************************************************
Function/method Name - friend function of operator<<(Insertion operator)
Function/method Description  - << operator is the overloaded operator for
printing the data from the copied class.
true by comparing both the sides.
Return Value - N/A
Incoming Parameters - ostream &as and class passed.
Outgoing Parameters -N/A
**********************************************************************/

ostream &operator<<(ostream &as, const Stuff &right)
{
    as << right.LastName << endl;
    as << right.FirstName << endl;
    as << right.city << endl;
    as << right.zip << endl;
    as << right.ST << endl;
    as << right.StreetAddress << endl;
    for (int i = 0; i < ThanksSize; i++)
    {
        cout << right.thanks[i] << endl;
    }
    return as;
}
