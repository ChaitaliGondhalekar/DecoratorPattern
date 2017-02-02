//////////////////////////////////////////////////////////////////////////////////
// Decorator pattern provides an alternative to sub-classing for extending 
// behavior, it attaches additional responsibilities to an object dynamically.
//
// Decorators need the same "interface" as the component they wrap because they
// need to stand up in place of the component. Here we subclass the abstract class
// Beverage in order to have correct type, not to inherit its behavior. The behavior
// is acquired by composing objects together.
//
// Decorators change the behavior of their components by adding new functionality
// by wrapping a component of same type.
//
// Here CondimentDecorator class provides decorator interface that will wrap the objects
// of type Beverage ( Sub-classed from), that is why Condiment inherit from same abstract 
// class Beverage but it inherits from Beverage to get type so that it can wrap beverages.
// The behavior will be extended by composition dynamically as CondimentDecorator store
// reference to Beverage.
//
//////////////////////////////////////////////////////////////////////////////////

#ifndef _condiments_h_
#define _condiments_h_

#include "Beverage.h"

class CondimentDecorator : public Beverage
{
  public:
	CondimentDecorator (Beverage *beverageReference) {

		this->beverageWrapper = beverageReference;				
	}

	std::string getDescription()
	{
		return this->beverageWrapper->getDescription();
	}

	double cost ()
	{
		return this->beverageWrapper->cost();
	}

  private:
	  Beverage *beverageWrapper;								// To hold the beverage we are wrapping  
};

#endif