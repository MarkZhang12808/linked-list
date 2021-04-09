#include <iostream>
#include <cstring>
#include "student.h"
#include "node.h"

using namespace std;

void add(char* name, float gpa, int idNum);
void print(node* nextNode);

node* head = NULL;

int main(){
   bool running = true;
    while(running == true){
        char input[10];
        cout << "enter a command: add, print, quit" << endl;
        cin >> input;
        if (strcmp(input, "add") == 0){
            char* studentName = new char[30];
            float gpa = 0;
            int idNum = 0;
            cout << "enter name" << endl;
            cin.clear();
            cin.ignore(999, '\n');
            cin.getline(studentName, 30);
            cout << "enter gpa" << endl;
            cin >> gpa;
            cin.clear();
            cin.ignore(999, '\n');
            cout << "enter id" << endl;
            cin >> idNum;
            add(studentName, gpa, idNum);
            cout << "Successfully created student with following parameters: " << 
            "\nNAME: " << studentName << "\nGPA: " << gpa << "\nID#: "<< idNum << endl;
            //print(head);
            cout << '\n' << endl;
        }
        else if(strcmp(input, "print") == 0){
            print(head);
        }
        else if(strcmp(input, "quit") == 0){
            cout << "Successfully quit program" << endl;
            running = false;
        }
        else{
            cout << "please enter a valid command!" << endl;
        }
    }
    return 0;
}

void add(char* name, float gpa, int idNum){
    student* newStudent = new student(name, gpa, idNum);
    node* currentNode = head;
    if(currentNode == NULL){
        head = new node();
        head->setStudent(newStudent);
    }
    else{
        while (currentNode->getNext() != NULL){
            currentNode = currentNode->getNext();
        }
        currentNode->setNext(new node());
        currentNode->getNext()->setStudent(newStudent);
    }
}

void print(node* nextNode){
    if(nextNode == head){
        cout << "STUDENTS:" << endl;
    }
    if(nextNode != NULL){
        cout << "  Name: " << nextNode->getStudent()->getName() << endl;
        cout << "  GPA: " << nextNode->getStudent()->getGrade() << endl;
        cout << "  ID number: " << nextNode->getStudent()->getId() << endl;
        cout << "\n**************************************" << endl;
        print(nextNode->getNext());
    }
}