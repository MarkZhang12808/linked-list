//Mark Zhang - 09 April 2021 - Linked List
//CPP file for student class
//contains constructor for student and functions to get each of the 3 attributes

#include <iostream>
#include <cstring>
#include "student.h"
#include "node.h"
using namespace std;

student::student(const char* studentName, float gpa, int id){
    strcpy(name, studentName);
    idNumber = id;
    grade = gpa;
}

char* student::getName(){
    return name;
}
float student::getGrade(){
    return grade;
}

int student::getId(){
    return idNumber;
}

