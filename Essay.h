//****************************************************************
// Written by Steven Smail for COP3331
//
// Essay.h (Project 4)
//
// This is the class file that contains the Essay class; including
// the Mutator functions, the Accessor functions, a redefined
// getScore function and a redefined getLetterGrade function.
//****************************************************************

#ifndef ESSAY_H
  double lengthPts;    // Points for Correct Length
  double contentPts;   // Points for Content
public:
    contentPts = 0.0; }

  // Mutator functions
  { grammarPts = g; }

  void setSpelling(double s)
  { spellingPts = s; }

  void setLength(double l)
  { lengthPts = l; }

  void setContent(double c)
  { contentPts = c; }

  // Accessor functions

  double getSpelling()

  double getLength()

  double getContent()

  virtual double getScore()

  { setScore(getScore());
    return GradedActivity::getLetterGrade(); }
};
