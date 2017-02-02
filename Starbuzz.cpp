#include "Beverage.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "DarkRoast.h"
#include "Decaf.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"
#include <new>
#include <iostream>

using namespace std;

void main()
{
	
	Beverage *beverage = new Espresso();
	cout << beverage->getDescription() + "  $" << beverage->cost() << endl;

	Beverage *beverage2 = new DarkRoast();											// Beverage DarkRoast
	beverage2 = new Mocha(beverage2);												// Decorate with Mocha
	beverage2 = new Mocha(beverage2);												// Decorate with Mocha
	beverage2 = new Whip(beverage2);												// Decorate with Whip
	cout << beverage2->getDescription() + "  $" << beverage2->cost() << endl;		// Delegates cost to decorated beverages


	Beverage *beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	cout << beverage3->getDescription() + "  $" << beverage3->cost() << endl;


	int ch = cin.get();
}