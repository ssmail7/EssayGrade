//**************************************************************
// Written by Steven Smail for COP3331
//
// EssayDriver.cpp (Project 4)
//
// This is the driver program that tests the base class
// (GradedActivity) and it's derived class (Essay).
//**************************************************************

#include <iostream>
#include "Essay.h"
using namespace std;

int main()
{
  double grammar, spelling, length, content;

  // User input prompt for Grammar Points
  cout << "How many grammar points did "
       << "the student earn? (0 - 30): ";
  cin >> grammar;
  while(grammar < 0 || grammar > 30)
  {
    cout << "Invalid. Enter a number from 0 through 30: ";
    cin >> grammar;
  }

  // User input prompt for Spelling Points
  cout << "How many spelling points did "
       << "the student earn? (0 - 20): ";
  cin >> spelling;
  while(spelling < 0 || spelling > 20)
  {
    cout << "Invalid. Enter a number from 0 through 20: ";
    cin >> spelling;
  }

  // User input prompt for Length Points
  cout << "How many points for length did "
       << "the student earn? (0 - 20): ";
  cin >> length;
  while(length < 0 || length > 20)
  {
    cout << "Invalid. Enter a number from 0 through 20: ";
    cin >> length;
  }

  // User input prompt for Content Points
  cout << "How many points for content did "
       << "the student earn? (0 - 30): ";
  cin >> content;
  while(content < 0 || content > 30)
  {
    cout << "Invalid. Enter a number from 0 through 30: ";
    cin >> content;
  }

  // Define an Essay object and Essay pointer
  Essay student1;
  Essay * essaypnt = &student1;

  // Initialize the Essay object with the values entered
  essaypnt->setGrammar(grammar);
  essaypnt->setSpelling(spelling);
  essaypnt->setLength(length);
  essaypnt->setContent(content);

  // Display the points and the grade
  cout << "Grammar points: " << essaypnt->getGrammar() << endl;
  cout << "Spelling points: " << essaypnt->getSpelling() << endl;
  cout << "Length points: " << essaypnt->getLength() << endl;
  cout << "Content points: " << essaypnt->getContent() << endl;
  cout << "Overall score: " << essaypnt->getScore() << endl;
  cout << "Grade: " << essaypnt->getLetterGrade() << endl;
}
