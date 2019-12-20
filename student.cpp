//inclusions

#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;



//constructor
Student::Student()
{
  
}

Student::~Student()
{
  delete &firstN;
  delete &lastN;
  delete &id;
  delete &gpa;
}



//getters (no setters lol)
char* Student::getFirst()
{
  return firstN;
}

char* Student::getLast()
{
  return lastN;
}

int* Student::getId()
{
  return &id;
}

float* Student::getGpa()
{
  return &gpa;
}
