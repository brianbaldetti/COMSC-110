//
//  main.cpp
//  hw18
//
//  Created by brian on 5/4/22.
//  program creates and manipulates a linked list of strings
//
#include <iostream>
#include <string>
using namespace std;

//declares structure
struct Node
{
    string value;
    Node* next;
};

//declares func prototypes
void addString(Node*&, string);
int countStrings(Node*, string);
string toString(Node*);
void deleteList(Node*&);
void printResult(string, int);

int main()
{
    //initializes variables
    Node* head = nullptr;
    int numOfTimes = 0;
    string cat;
    
    //calls funcs
    addString(head, "hello");
    addString(head, "world");
    addString(head, "how");
    addString(head, "are");
    addString(head, "you!");
    
    numOfTimes = countStrings(head, "good");
    cat = toString(head);
    
    printResult(cat, numOfTimes);
    deleteList(head);

    return 0;
}

//appends strings to a link list
void addString(Node*& headPtr, string word)
{
    Node* newNode = new Node;
    newNode->value = word;
    newNode->next = nullptr;
    
    if (!headPtr)
        headPtr = newNode;
    else
    {
        Node* tempPtr = headPtr;
        
        while (tempPtr->next)
            tempPtr = tempPtr->next;
        
        tempPtr->next = newNode;
    }
}

//counts the number of IDENTICAL strings to the string provided as an argument
int countStrings(Node* headPtr, string word)
{
    int count = 0;
    
    while (headPtr)
    {
        if (headPtr->value == word)
            count++;
        
        headPtr = headPtr->next;
    }
    
    return count;
}

//concatanates all the strings in the linked list to one string
string toString(Node* nodePtr)
{
    string catString;
        
    while (nodePtr)
    {
        catString += nodePtr->value;
        nodePtr = nodePtr->next;
    }
    
    return catString;
}

//deletes the linked list
void deleteList(Node*& headPtr)
{
    Node* tempPtr = headPtr;
    
    while (headPtr)
    {
        headPtr = headPtr->next;
        delete tempPtr;
        tempPtr = headPtr;
    }
}

//prints the resutls
void printResult(string word, int num)
{
    cout << "The string you searched for appears " << num << " times in the list.\n";
    cout << "All the words in the list concatenated are: " << endl << word << endl;
}
