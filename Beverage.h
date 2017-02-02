////////////////////////////////////////////////////////////////////////////////
// As per design principle 4 : Classes should be open for extension, but 
// closed for modification.
//
// Inheriting from Base class that implements a lot, is not a good idea
// as some of subclasses might not need all the functionalities (methods)
// of Base class. Also it violates design principle 2.
//
// Inheriting behavior by sub classing, set the behavior statically at compile 
// time. And all subclasses must inherit the same behavior. If object's behavior
// is extended through composition (has-a), then it can be extended dynamically
// at a runtime.
//
// This code show application of "Decorator Pattern"
////////////////////////////////////////////////////////////////////////////////

#ifndef _beverage_h_
#define _beverage_h_

#include <string>

class Beverage
{
  public:

	  Beverage () {
		 description = "Unknown Beverage";
	  }

	  virtual std::string getDescription() {
		  return description;
	  }

	  virtual double cost () = 0 ;

  protected:
	  std::string description;
	  
};


#endif