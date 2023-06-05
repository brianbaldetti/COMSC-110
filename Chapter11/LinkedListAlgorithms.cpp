//
//  main.cpp
//  LinkedListAlgorithms
//
//  Created by brian on 5/2/22.
//  practice creating algorithms for linked list
//
#include <iostream>
using namespace std;

//declaring node structure
struct Node
{
    int value;
    Node* next;
};

//declare func prototypes
void appendNode(Node*&, int);

//main func
int main()
{
    //creating list head
    Node* head = nullptr;
    appendNode(head, 0);
        
    return 0;
}

//creates a node with the value in the int num variable
void appendNode(Node*& headPtr, int num)
{
    Node* newNode = new Node;
    newNode->value = num;
    newNode->next = nullptr;

    if (!headPtr)
    {
        headPtr = newNode;
    }
    else
    {
        Node* tempPtr = headPtr;
        
        while(tempPtr->next)
            tempPtr->next = tempPtr;
        
        tempPtr->next = newNode;
    }
}

