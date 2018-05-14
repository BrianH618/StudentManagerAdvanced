#include "student.h"
#include <string>
#include <vector>
using namespace std;

student::student()
{

}

void student::setName(string first, string last)
{
    fName= first;
    lName=last;
}

string student::fullName()
{
    string name = fName;
    name.append(" ");
    name.append(lName);
    return name;
    
}

void student::addGrade(double gradeEntered)
{
    studentGrade = gradeEntered;
    list.push_back(studentGrade);
}

double student::getScore()
{
    average = 0;
    total = 0;
    for(int i= 0; i<list.size();i++)
    {
        temp = list[i];
        total= total + temp;
        //average = total/list.size();
        //return average;
    }
    if(list.size()>0)
    {
        average = total/list.size();
    }
    return average;
   

}
