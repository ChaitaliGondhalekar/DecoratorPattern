//////////////////////////////////////////////////////////////////////////////
// Here is concrete decorator Mocha. It extends CondimentDecorator that extends
// Beverage. So Mocha can decorate ( Wrap ) Beverages ( Espresso, Decaf etc.)
//
//////////////////////////////////////////////////////////////////////////////

#ifndef _mocha_h_
#define _mocha_h_

#include "Condiments.h"

class Mocha : public CondimentDecorator
{
  public:

	Mocha( Beverage *beverage) : CondimentDecorator(beverage) {}    // Pass the beverage we are wrapping to decorator

	std::string getDescription() 
	{
		return CondimentDecorator::getDescription() + ", Mocha ";
	}

	double cost() 
	{
		return ( 0.20 + CondimentDecorator::cost() );			// First delegate the call to the object we're decorating
	}															// (Beverage) then add the cost of decorator (Mocha)
};

#endif