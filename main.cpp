#include "1-LL.h"
#include "2-stuff.h"
#include <iostream>
using namespace std;

int main()
{
    Stuff s("Singh", "Parminder", "St.", );
    LL<Stuff> l;
    l.Insert(s);
    // l.print();
    return 0;
}