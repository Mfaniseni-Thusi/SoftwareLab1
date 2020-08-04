
// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()

{

auto myScreen = Screen{6,6};
myScreen.forward();
myScreen.set('*');
myScreen.down();
myScreen.set('*');
myScreen.move(3,3);
myScreen.set("---");

myScreen.display();
cout << endl;

myScreen.reSize(16,16);
myScreen.display();
myScreen.clear(' ');

myScreen.move(7,7);
myScreen.set("BIG");
myScreen.move(8,5);
myScreen.set("SCREEN");
myScreen.display();
    cout << endl;

    myScreen.clear(' ');
for(int row=1; row<=6; row++){
        myScreen.move(row,1);
        myScreen.set('*');
}

myScreen.move(3,2);
myScreen.set('*');
    myScreen.move(3,3);
myScreen.set('*');
myScreen.move(3,4);
myScreen.set('*');
myScreen.move(2,5);
myScreen.set('*');
    myScreen.move(1,6);
myScreen.set('*');
myScreen.move(4,5);
myScreen.set('*');
myScreen.move(5,6);
myScreen.set('*');
myScreen.move(6,6);
myScreen.set('*');

myScreen.display();
cout << endl;
myScreen.clear(' ');

myScreen.getSquare(4,4,4);
myScreen.display();
cout << endl;
myScreen.clear();

return 0;
}

/*  Exercise 4.6
 Changing the interface does no affect the users directly,
 but the programmers can freely change the implementation because that only affects the user experience
but there normally no visual changes to the user.
*/


