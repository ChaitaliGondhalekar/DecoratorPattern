//////////////////////////////////////////////////////////////////////////////
// Here is concrete decorator Soy. It extends CondimentDecorator that extends
// Beverage. So Soy can decorate ( Wrap ) Beverages ( Espresso, Decaf etc.)
//
//////////////////////////////////////////////////////////////////////////////

#ifndef _soy_h_
#define _soy_h_

#include "Condiments.h"

class Soy : public CondimentDecorator
{
public:

	Soy( Beverage *beverage) : CondimentDecorator(beverage) {}		// Pass the beverage we are wrapping to decorator

	std::string getDescription() 
	{
		return CondimentDecorator::getDescription() + ", Soy ";
	}

	double cost() 
	{
		return ( 0.15 + CondimentDecorator::cost() );				// First delegate the call to the object we're decorating
	}																// (Beverage) then add the cost of decorator (Soy)
};

#endif