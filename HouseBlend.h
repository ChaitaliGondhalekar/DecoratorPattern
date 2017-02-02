/////////////////////////////////////////////////////////////////////////////////
// Here is concrete Beverage HouseBlend. We can extend the functionality
// of this Beverage by wrapping it with decorators ( of type Beverage) at runtime
//
/////////////////////////////////////////////////////////////////////////////////

#ifndef _house_blend_h_
#define _house_blend_h_

#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
	HouseBlend() {
		description = "House Blend Coffee";
	}

	double cost() {
		return 0.89;
	}
};

#endif