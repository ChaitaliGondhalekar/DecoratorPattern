/////////////////////////////////////////////////////////////////////////////////
// Here is concrete Beverage Decaf. We can extend the functionality
// of this Beverage by wrapping it with decorators ( of type Beverage) at runtime
//
/////////////////////////////////////////////////////////////////////////////////

#ifndef _decaf_h_
#define _decaf_h_

#include "Beverage.h"

class Decaf : public Beverage
{
public:
	Decaf() {
		description = "Decaf Coffee";
	}

	double cost() {
		return 1.05;
	}
};

#endif