#include "node.h"
#include "student.h"
using namespace std;

node::node(){
    newStudent = NULL;
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

