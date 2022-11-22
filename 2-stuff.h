#ifndef _STUFF_H
#define _STUFF_H
#include <iostream>
using namespace std;

const int ThanksSize = 5;

class Stuff
{
    string LastName;
    string FirstName;
    string StreetAddress;
    string city;
    string ST;
    string zip;
    string thanks[ThanksSize];

public:
    Stuff()
    {
        LastName = "Uknwon";
        FirstName = "Not Available";
        StreetAddress = "Uknown-street";
        city = "uknown";
        ST = "Alabama";
        zip = "35632;";
    }
 };

// class ThankYouNote
// {
//     Node *noteHead;
//     Node *helperNote(Node *c);

// public:
//     ThankYouNote();
//     ~ThankYouNote();
//     bool InsertCourse(string LastN, string FirstN, string StreetAd, string CT, string State, string zipCode, string thanksArray);
//     bool removeNotebyLastName(string lastName);
//     bool findNotebyFirstName(string lastName);
// };

#endif