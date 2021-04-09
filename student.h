#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class student{
    private:
        char* name = new char[30];
        float grade;
        int idNumber;
    public:
        student(const char* name, float gpa, int id);
        char* getName();
        float getGrade();
        int getId();
};

#endif