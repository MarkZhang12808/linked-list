//Mark Zhang - 09 April 2021 - Linked List
//header file for the node class
//each node has a student* newStudent, which is its value
//each nodes is linked to the next node in the list via the node* nextNode

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
        node(student* student1);
        ~node();
        void setStudent(student* nStudent);
        student* getStudent();
        void setNext(node* nNode);
        node* getNext();
};

#endif