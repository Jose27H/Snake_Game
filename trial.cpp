#include <iostream>
#include <cmath>
#include <string>
#include <array>
#include "HelloMom.h"

using namespace std;

int main()
{

    HelloMom jose[3];
    HelloMom hello("jose", 24, false);
    HelloMom thomas("thomas", 18, false);
    HelloMom Lauren("Lauren", 21, true);

    jose[0] = hello;
    jose[1] = thomas;
    jose[2] = Lauren;
    cout << thomas.getHomo() << endl
         << jose[1].getName() << endl
         << thomas.getAge() << endl;

    return 0;
}
