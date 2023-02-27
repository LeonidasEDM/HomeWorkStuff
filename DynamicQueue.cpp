#include "DynamicQueue.h"
#include <iostream>
#include <stdlib.h>

//-------------------------------------------------------------------------------
// constructors
//-------------------------------------------------------------------------------
/********************************************************************************
default constructor
********************************************************************************/
DynamicQueue::DynamicQueue() {
	front = nullptr;
	rear = nullptr;
}

//---------------------------------------------------------------
// methods (inserts and deletes)
//---------------------------------------------------------------
bool DynamicQueue::empty() {
	return (front == nullptr);
}

void DynamicQueue::read(char x) {
   bool validInsert = true; //Validates on weather or not something should be queued
   DynamicNode* n = front;
   if(empty()){
       validInsert = true; //if the list is empty, there can't be a duplicate value
   }
   else {
       while (n != nullptr) {
           if (front->info == x) { //if the queue has a single value it will invalidate if the second value is the same
               validInsert = false;
               break;
           }
           else if ( n->next != nullptr && n->next->info == x) { //Invalidates for any repeat value
               validInsert = false;
               break;
           }
           n = n->next;
       }
   }

    switch (validInsert) {
       case true: //If value was not found in the queue it will be inserted at the end
           std::cout << "inserting " << x << " in rear.";
            insert(x);
           break;
       case false:
           if(rear->info == x){ //If repeat value is already the rear
               std::cout << "Key " << x << " is already rear.";
               break;
           } else {
               std::cout << "Key already in queue, moving " << x << " to rear.";
               DynamicNode *temp = n->next;
               n->next = n->next->next;
               rear->next = temp;
               temp->next = nullptr;
               rear = temp;
           }
            break;
    }
}

void DynamicQueue::insert(char x) {

        DynamicNode *p = new DynamicNode;
        p->info = x;
        p->next = nullptr;
        if (empty()) {
            front = p;
        } else {
            rear->next = p;
        }
        rear = p;
}


int DynamicQueue::remove() {
	if (empty()) {
		std::cout << "queue underflow";
		exit(1);
	}

	DynamicNode* p = front;
	int temp = p->info;
	front = p->next;
	delete p;
	if (front == nullptr)
		rear = nullptr;

	return temp;
}

void DynamicQueue::print() {
    std::cout << " Queue: ";
    for(DynamicNode* n = front; n != nullptr; n = n->next){
        n != front ? std::cout << "->": std::cout << ""; //Display Arrow After Front
        std::cout << n->info; //Output Display Queue value
    }
    std::cout << std::endl;
}

