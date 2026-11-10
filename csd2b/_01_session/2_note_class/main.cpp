#include <iostream>

/* Session content
 * [DISCUSS]
 * - concept of a class
 * - concept of constructor, fields en methods
 * "2_note_class" and "2_note_class_final" with respect to organisation example code throughout course
 * [IMPLEMENT]
 * class - implementation steps
 * 1. define the class
 * 2. define the constructor
 * 3. implement the constructor
 * 4. add fields / methods (and define the methods)
 * [DEMONSTRATE]
 * - create two objects with different frequencies, to demonstrate added value of classes
 */
class Note {

public:
  // constructor
  Note(int midiNote);

  // default midi note value 60
  int midiNote;
  int shiftOctaveUp();
};

Note::Note(int midiNote)
{
  // body of the constructor
  std::cout << "Note::Note() - inside the constructor of the Note class" << std::endl;
  std::cout << "Parameter midiNote value: " << midiNote << std::endl;
  // this pointer --> to indicate class field
  this->midiNote = midiNote;
}

int Note::shiftOctaveUp()
{
  return midiNote + 12;
}

int main() {
  Note note(64);
  Note anotherNote(40);
  std::cout << "\nObject note - midiNote: " << note.midiNote << std::endl;
  std::cout << "\nObject note - shiftOctaveUp returns: " << note.shiftOctaveUp() << std::endl;
  std::cout << "\nObject anotherNote - midiNote: " << anotherNote.midiNote << std::endl;
  std::cout << "\nReached the end of the application.\n";

};
