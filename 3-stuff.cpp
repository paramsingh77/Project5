#include "2-stuff.h"

#include <iostream>
using namespace std;
#include <fstream>
ThankYouNote::ThankYouNote()
{
    noteHead = nullptr;
}

bool ThankYouNote::InsertCourse(string LastN, string FirstN, string StreetA, string CT, string State, string zipCode, string thanksArray)
{

    cout << "array recieved" << endl;
    Node *noteH = new Node();
    ofstream obj;
    obj.open("fileHandling.txt");
    string s;
    noteH->LastName = LastN;
    s << noteH->LastName;
    s << endl;
    noteH->FirstName = FirstN;
    s << noteH->FirstName;
    s << endl;
    noteH->zip = zipCode;
    s << noteH->zip;
    s << endl;
    for (int i = 0; i < ThanksSize; i++)
    {
        noteH->thanks[i] = thanksArray[i];
        s << noteH->thanks[i];
    }
    helperNote(noteH);
}

Node *ThankYouNote::helperNote(Node *c)
{
    Node *temp = noteHead;
    if (noteHead == NULL)
    {
        noteHead = new Node();
    }
    else
    {
        while (temp->nextReciever != NULL)
        {
            temp = temp->nextReciever;
            cout << "Moved to next course";
        }
        temp->nextReciever = c;
    }
    cout << "Course-Linked" << endl;
    return temp;
}

bool ThankYouNote::removeNotebyLastName(string name)
{
    Node *prev = nullptr;
    Node *forward = noteHead;
    while (forward != nullptr && forward->LastName != name)
    {
        forward = forward->nextReciever;
    }
    Node *toDelete = forward;
    if (forward->nextReciever == NULL)
        prev->nextReciever = NULL;
    else
        prev->nextReciever = forward->nextReciever;

    delete forward;
}