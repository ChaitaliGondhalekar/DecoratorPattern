/////////////////////////////////////////////////////////////////////////////////
// Here is concrete Beverage Espresso. We can extend the functionality
// of this Beverage by wrapping it with decorators ( of type Beverage) at runtime
//
/////////////////////////////////////////////////////////////////////////////////

#ifndef _espresso_h_
#define _espresso_h_

#include "Beverage.h"

class Espresso : public Beverage
{
  public:
	  Espresso() {
		  description = "Espresso";
	  }
	  
	  double cost() {
		  return 1.99;
	  }
};

#endif