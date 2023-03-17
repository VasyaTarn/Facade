#include <iostream>
#include "PCfacade.h"

int main()
{
    PCfacade facade;
    facade.beginWork();
    cout << endl;
    facade.endWork();

    return 0;
}


