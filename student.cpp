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

