//
//  main.cpp
//  LinkedListPractice
//
//  Created by brian on 5/3/22.
//  Practice for creating a linked list
//
#include <iostream>
using namespace std;

//structure used in linked list
struct Node
{
    int value;
    Node* next;
};

//main func
int main()
{
    Node* head = nullptr;
    Node* node1 = new Node;
    node1->value = 11;
    node1->next = nullptr;
    head = node1;
    
    cout << node1->value << endl << endl;
    
    return 0;
}
