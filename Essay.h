//*****************************************************************
// Written by Steven Smail for COP3331
//
// Essay.h (Project 4)
//
// This is the class file that contains the Essay class; including
// the Mutator functions, the Accessor functions, a redefined
// getScore function and a redefined getLetterGrade function.
//*****************************************************************

#ifndef ESSAY_H
#define ESSAY_H
#include "GradedActivity.h"

class Essay : public GradedActivity
{
private:
  double grammarPts;   // Points for Grammar
  double spellingPts;  // Points for Spelling
  double lengthPts;    // Points for Correct Length
  double contentPts;   // Points for Content
public:
  // Default Constructor
  Essay()
  { grammarPts = 0.0;
    spellingPts = 0.0;
    lengthPts = 0.0;
    contentPts = 0.0; }

  // Mutator functions
  void setGrammar(double g)
  { grammarPts = g; }

  void setSpelling(double s)
  { spellingPts = s; }

  void setLength(double l)
  { lengthPts = l; }

  void setContent(double c)
  { contentPts = c; }

  // Accessor functions
  double getGrammar()
  { return grammarPts; }

  double getSpelling()
  { return spellingPts; }

  double getLength()
  { return lengthPts; }

  double getContent()
  { return contentPts; }

  virtual double getScore()
  { return (grammarPts + spellingPts + lengthPts + contentPts); }

  virtual char getLetterGrade()
  { setScore(getScore());
    return GradedActivity::getLetterGrade(); }
};

#endif
