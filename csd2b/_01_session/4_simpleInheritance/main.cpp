#include "dog.h"
#include "cat.h"

/* Session content
 * See _slides/Sessie1_inheritance.pdf
 */


int main ()
{
  Pet aPet("Peter");
  Cat aCat("Foo");
  Dog aDog("Bar");

  aPet.sleep();
  aCat.sleep();
  aDog.sleep();

  // end program
  return 0;
}
