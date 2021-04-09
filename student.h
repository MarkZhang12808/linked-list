//Mark Zhang - 09 April 2021 - Linked List
//header file for student class
//student has 3 attributes, name, grade, and idNumber

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