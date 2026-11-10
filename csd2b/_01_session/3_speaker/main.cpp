#include <iostream>


/* Session content
 * [DISCUSS]
 * - Associaton: a class can contain a field which itself is an object of another class, e.g.:
 *   - a speaker has a tweeter
 *   - a car has wheels
 *   - ...?
 * - concept of constructor, fields en methods
 */



class Tweeter{
public:
  // default constructor
  Tweeter();
  // overloaded constructor
  Tweeter(float diam);

  // fields
  float diameter;
  float conePosition;
};

Tweeter::Tweeter() {
  std::cout << "Tweeter - default constructor\n";
  // NOTE: duplicate code alarm!!
  // constructor delegation is a better strategy!

  // in cm
  diameter = 2.5f;
  // number with an f --> indicate it is a float
  conePosition = 0.0f;
}

Tweeter::Tweeter(float diam) {
  std::cout << "Tweeter - constructor with float diam parameter\n";
  // in cm
  diameter = diam;
  // number with an f --> indicate it is a float
  conePosition = 0.0f;
}

class Speaker{
public:
  Speaker();
  Tweeter aTweeter;
};

Speaker::Speaker() {
  std::cout << "Speaker - constructor\n";
  aTweeter.diameter = 2.4;
  std::cout << "The diameter of the tweeter is: "
    << aTweeter.diameter << "\n";
}

// TODO - add woofer

int main() {
  Speaker aSpeaker;
};
