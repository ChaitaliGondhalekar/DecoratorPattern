//////////////////////////////////////////////////////////////////////////////
// Here is concrete decorator Whip. It extends CondimentDecorator that extends
// Beverage. So Whip can decorate ( Wrap ) Beverages ( Espresso, Decaf etc.)
//
//////////////////////////////////////////////////////////////////////////////
#ifndef _whip_h_
#define _whip_h_

#include "Condiments.h"

class Whip : public CondimentDecorator
{
public:

	Whip( Beverage *beverage) : CondimentDecorator(beverage) {}		// Pass the beverage we are wrapping to decorator

	std::string getDescription() 
	{
		return CondimentDecorator::getDescription() + ", Whip ";
	}

	double cost() 
	{
		return ( 0.10 + CondimentDecorator::cost() );				// First delegate the call to the object we're decorating
	}																// (Beverage) then add the cost of decorator (Whip)
};

#endif