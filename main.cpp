#include "1-LL.h"
#include "2-stuff.h"
#include "4-Things.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*******************************STUFFLIST****************************************/
    LL<Stuff> stuffList;

    string sarray[3] = {"Aunt Dodie, thank you for all of your mashed potatoes.", "SisterShirley, thank you for turning cartwheels.", "Johnny Sue, thank you for being nice."};

    // object 1
    Stuff s("Singh", "Parminder", "North Pine street", "Florence", "Alabama", "35632", sarray);

    // Insert function
    stuffList.Insert(s);

    string sarray1[3] = {"Uncle Tim, thank you for all of your mashed potatoes.", "Brother Bob, thank you for turning cartwheels.", "Mary Houston, thank you for being nice."};

    // object 2
    Stuff s1("Peter", "John", "colorod street",
             "Huntsville", "Alabama", "35634", sarray1);

    // Insert function
    stuffList.Insert(s1);

    // Print function
    stuffList.Print();

    cout << "*******Copy Constructor********" << endl;
    Stuff s2(s1);
    stuffList.Insert(s2);
    stuffList.Print();

    cout << "*******Assignment Operator*********" << endl;
    Stuff s3;
    s3 = s2;
    stuffList.Insert(s2);
    stuffList.Print();

    /*****************THINGS CLASS***************/

    LL<Things> ThingList;

    int courseNumber = 1;
    int noOFItems = 2;
    double *arr = new double[noOFItems];

    for (int i = 0; i < noOFItems; i++)
    {
        cin >> arr[i];
    }

    // object 1
    Things t(courseNumber, noOFItems, arr);
    ThingList.Insert(t);

    int courseNum = 2;
    int noOFItems1 = 2;
    arr = new double[noOFItems1];
    for (int i = 0; i < noOFItems1; i++)
    {
        cin >> arr[i];
    }

    Things t2(courseNum, noOFItems1, arr);
    ThingList.Insert(t2);
    ThingList.Print();

    cout << "Copy  constructor" << endl;
    Things t3(t);
    ThingList.Insert(t3);
    ThingList.Print();

    cout << "Assignement constructor" << endl;
    Things t4;
    t4 = t;
    ThingList.Insert(t4);
    ThingList.Print();

    delete[] arr;
    arr = NULL;

    return 0;
}
