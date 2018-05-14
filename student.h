#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>
using namespace std;






class student
{
    private:
    string fName;
    string lName;
    double studentGrade;
    vector<double> list;
    double temp, total, average;




    public:
    student();
    void setName(string,string);
    string fullName();
    void addGrade(double);
    double getScore();




};
















#endif
