//Mark Zhang - 09 April 2021 - Linked List
//main file for the linked list project
//Demonstration using linked list to store information on students
//User is able to add students to the list and print information about them and can quit the program
//delete is not available since this program's purpose is a demo

#include <iostream>
#include <cstring>
#include "student.h"
#include "node.h"

using namespace std;

void add(char* name, float gpa, int idNum);
void print(node* nextNode);

node* head = NULL;

int main(){ //main function, user enters commands here
   bool running = true;
    while(running == true){
        char input[10];
        cout << "enter a command: add, print, quit" << endl;
        cin >> input;
        if (strcmp(input, "add") == 0){ 
            //takes information from user and passes it to add function to add a student to the list
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
            //calls print function to print out all information on students in the list
            print(head);
        }
        else if(strcmp(input, "quit") == 0){
            //quits program and gives user confirmation
            cout << "Successfully quit program" << endl;
            running = false;
        }
        else{
            //in case user enters something that is not a recognizable command
            cout << "please enter a valid command!" << endl;
        }
    }
    return 0;
}

void add(char* name, float gpa, int idNum){
    student* newStudent = new student(name, gpa, idNum);
    node* currentNode = head;
    //creates a new student with user info and uses a currentNode to run through the linked list
    if(currentNode == NULL){
        //the first time something is added, head is NULL, so the function makes a new node
        //and assigns newStudent to it
        head = new node(newStudent);
    }
    else{
        //goes through the list until currentNode is set to the last node in the linked list
        while (currentNode->getNext() != NULL){
            currentNode = currentNode->getNext();
        }
        //at this point, currentNode points to NULL since it is the last node in the linked list
        //to add a new node, the last node is pointed to a new node by using setNext, meaning the new node
        //is now the last node in the list
        //the student is set to the newly made last node
        currentNode->setNext(new node(newStudent));
    }
}

void print(node* nextNode){
    if(nextNode == head){
        //creates a title at the start
        cout << "STUDENTS:" << endl;
    }
    if(nextNode != NULL){
        //checks that there is a student assigned to the node and then prints all the associated info
        cout << "  Name: " << nextNode->getStudent()->getName() << endl;
        cout << "  GPA: " << nextNode->getStudent()->getGrade() << endl;
        cout << "  ID number: " << nextNode->getStudent()->getId() << endl;
        cout << "\n**************************************" << endl;
        //recursively calls function so that every node in the list checked
        print(nextNode->getNext());
    }
}