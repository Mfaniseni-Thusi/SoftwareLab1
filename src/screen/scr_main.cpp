// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};

	myScreen.move(1,1);
	myScreen.set('*');
	myScreen.move(2,1);
	myScreen.set('*');
	myScreen.forward();
	myScreen.set('*');
	myScreen.move(3,1);
	myScreen.set('*');
	myScreen.forward();
	myScreen.forward();
	myScreen.set('*');
	myScreen.move(4,1);
	myScreen.set('*');
	myScreen.forward();
	myScreen.forward();
	myScreen.forward();
	myScreen.set('*');
	myScreen.down();
	myScreen.forward();
	myScreen.set('*');
	myScreen.down();
	myScreen.forward();
	myScreen.set('*');
	myScreen.move(5,1);
	myScreen.set('*');
	myScreen.move(6,1);
	myScreen.set('*');
	myScreen.move(1,6);
	myScreen.set('*');
	myScreen.move(2,6);
	myScreen.set('*');
	myScreen.move(3,6);
	myScreen.set('*');
	myScreen.move(4,6);
	myScreen.set('*');
	myScreen.move(5,6);
	myScreen.set('*');



	myScreen.display();


	cout << endl;
	return 0;
}

