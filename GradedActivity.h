//***************************************************************
// Written by Steven Smail for COP3331
//
// GradedActivity.h (Project 4)
//
// This is the class file that contains the GradedActivity class;
// including the Constructors, the Mutator function, and the
// Accessor functions.
//***************************************************************

#ifndef GRADEDACTIVITY_H#define GRADEDACTIVITY_H// GradedActivity class declarationclass GradedActivity{protected:  double score;  // To hold the numeric scorepublic:  // Default constructor  GradedActivity()  { score = 0.0; }
  // Constructor  GradedActivity(double s)  { score = s; }
  // Mutator function  void setScore(double s)  { score = s; }
  // Accessor functions  virtual double getScore()  { return score; }
  virtual char getLetterGrade()
  {    char letterGrade;  // To hold the letter grade
    if(score > 89)      letterGrade = 'A';    else if(score > 79)      letterGrade = 'B';    else if(score > 69)      letterGrade = 'C';    else if(score > 59)      letterGrade = 'D';    else      letterGrade = 'F';
    return letterGrade;  }};
#endif