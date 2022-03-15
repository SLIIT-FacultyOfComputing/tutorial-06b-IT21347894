#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int SID, char Sname[20])
{
  studentId=SID;
  int i;
  
  int len= strlen(Sname);
  
  for(i=0; i<len; i++)
    {
      name[i]=Sname[i];
    }
 
  
}

// Display StudentId and Name
void Student::display() 
{
  cout << "Student ID:" << studentId << endl;
  cout << "Student Name:" ;

  int i;
     int len= strlen(name);
    for(i=0; i<len; i++)
      {
       cout << name[i];
      }

  
}
