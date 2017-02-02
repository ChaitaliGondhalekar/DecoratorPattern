/////////////////////////////////////////////////////////////////////////////////
// Here is concrete Beverage DarkRoast. We can extend the functionality
// of this Beverage by wrapping it with decorators ( of type Beverage) at runtime
//
/////////////////////////////////////////////////////////////////////////////////

#ifndef _dark_roast_h_
#define _dark_roast_h_

#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
	DarkRoast() {
		description = "Dark Roast Coffee";
	}

	double cost() {
		return 0.99;
	}
};

#endif