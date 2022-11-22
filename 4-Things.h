 #ifndef _STUFF_H
#define _STUFF_H

#include <iostream>
using namespace std;

const ThanksSize = 5;

class Node
{
    int courseNumber;
    int sizeArr;
    double *gradeArr = new double[sizeArr];
    Node *nextReciever;

    Node(int courseNum, int sizeOfArr, int gradeArr[]);
    friend class ThankYouNote;
};


class Things
{
    Node *headGrade;
    Node *helperNote(Node *c);

public:
    Things();
    ~Things();
    Things(const Things &right);
    bool InsertCourse(string LastName, string FirstName, string StreetAddress, string city, string ST, string zip, string thanks);
    bool removeNotebyLastName(string lastName);
    bool findNotebyFirstName(string lastName);
};



