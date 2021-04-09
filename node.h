#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

class node{
    private:
        student* newStudent;
        node* nextNode;
    public:
        node();
        ~node();
        void setStudent(student* nStudent);
        student* getStudent();
        void setNext(node* nNode);
        node* getNext();
};

#endif