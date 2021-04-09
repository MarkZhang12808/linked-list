//Mark Zhang - 09 April 2021 - Linked List
//CPP file for the node class
//contains constructor and destructor for node and functions to get student and next node
//as well as functions to set the student and next node

#include "node.h"
#include "student.h"
using namespace std;

node::node(student* student1){
    newStudent = student1;
    nextNode = NULL;
}
node::~node(){
    delete &newStudent;
    nextNode = NULL;
}

void node::setStudent(student* nStudent2){
    newStudent = nStudent2;
}

void node::setNext(node* nNode){
    nextNode = nNode;
}

student* node::getStudent(){
    return newStudent;
}

node* node::getNext(){
    return nextNode;
}

