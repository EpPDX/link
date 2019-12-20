/*
linked lists p1 
code by caley epstein
help with .h files from stefan ene (espesically nodes)
*/


//inclusions and setup
#include <iostream>
#include <cstring>


#include "node.h"
#include "student.h" 

#include <stdio.h>
#include <iomanip>





using namespace std;

int main()
{
  //variables
  char input[20];

  //collecting first students info
  Student* stud = new Student;
  cout << "first name:" << endl;
  cin.get(stud -> getFirst(), 20);
  cin.clear();
  
  cin.ignore(10000, '\n');
  cout << "last name:" << endl;
  cin.get(stud -> getLast(), 20);
  cin.clear();
  
  cin.ignore(10000, '\n');
  cout << "ID:" << endl;
  cin >> *stud -> getId();
  cin.clear();
  
  cin.ignore(10000, '\n');
  cout << "GPA:" << endl;
  cin >> *stud -> getGpa();
  cin.clear();
  cin.ignore(10000, '\n');


  //collecting student 2 info
  
  cout << endl;
  
  Student* stud2 = new Student;
  cout << "first name:" << endl;
  cin.get(stud2 -> getFirst(), 20);
  cin.clear();
  
  cin.ignore(10000, '\n');
  cout << "last name:" << endl;
  cin.get(stud2 -> getLast(), 20);
  cin.clear();
  
  cin.ignore(10000, '\n');
  cout << "ID:" << endl;
  cin >> *stud2 -> getId();
  cin.clear();
  
  cin.ignore(10000, '\n');
  cout << "GPA:" << endl;
  cin >> *stud2 -> getGpa();
  cin.clear();
  cin.ignore(10000, '\n');




  //printing students
  cout << endl;
  cout << "Student #1: " << stud -> getFirst() << " " << stud -> getLast() << ", ";
  cout << "ID: " << *stud -> getId() << ", GPA: ";
  cout << fixed << setprecision(2) << *stud -> getGpa() << endl;

  
  cout << "Student #2: " << stud2 -> getFirst() << " " << stud2 -> getLast() << ", ";
  cout << "ID: " << *stud2 -> getId() << ", GPA: ";
  cout << fixed << setprecision(2) << *stud2 -> getGpa() << endl << endl;




  //nodessssss
  Node* firstNode = new Node(stud);
  Node* secondNode = new Node(stud2);
  firstNode -> setStudent(stud);
  firstNode -> setNext(secondNode);
  secondNode -> setStudent(stud2);


  
  cout << endl << "nodes: " << endl;
  cout << firstNode -> getStudent() -> getFirst() << " " << firstNode -> getStudent() -> getLast() << endl;
  cout << firstNode -> getNext() -> getStudent() -> getFirst() << " " << firstNode -> getNext() -> getStudent() -> getLast() << endl;

  
  return 0;
}
