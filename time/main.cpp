#include "time.h"

/*
    Test program for the Time class.

    We create two Time objets and add them together.
*/

int main () {
    Time t {1, 30};
    Time t2 {0, 121};

    
    Time t3 = t+t2;
    t3.display();
}