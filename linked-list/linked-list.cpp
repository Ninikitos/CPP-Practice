#include <iostream>
#include <cstdlib>
#include "linked-list.h"

using namespace std;

List::List()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::AddNode(int addData)
{
    nodePtr n = new node;
    n->next = NULL; // last node in list points to NULL
    n->data = addData; // adding data to new node

    // if head is pointing to somewhere, we have a List
    if(head != NULL)
    {
        curr = head;

        // while we are not in the end of the List, 
        // set curr to point onto next node
        while(curr->next != NULL)
        {
            curr = curr->next;
        }

        // pointing on a new added node in the end of the List
        curr->next = n;
    }
    else
    {
        // If the List was empty, then set head(beginning)
        // to point into added node
        head = n;
    }
}

void List::DeleteNode(int delData)
{
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;

    // This while loop will go traverse List
    // with a condition:

    // 1. We want to check if curr is not NULL, 
    // because if it is, we reached the end of List

    // 2. If curr->data == to delData, we found a node 
    // to delete.
    while (curr != NULL && curr->data != delData)
    {
        // We need to keep temp one step behind if
        // out node is in the middle.
        temp = curr;
        curr = curr->next;
    }

    if(curr == NULL)
    {
        cout << delData << " was not in the List.\n";
        delete delPtr;
    }
    else
    {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;

        if(delPtr == head)
        {
            head = head->next;
            temp = NULL;
        }

        delete delPtr;
        cout << "The value " << delData << " was deleted.\n";
    }
}

void List::DeleteLast()
{
    nodePtr delPtr = new node;
    temp = head;
    curr = head;

    while(curr->next != NULL)
    {
        temp = curr;
        curr = curr->next;
    }

    temp->next = NULL;
    delete curr;
}

void List::AddFirstNode(int addData)
{
    nodePtr n = new node;
    temp = head;
    head = n;
    n->data = addData;
    n->next = temp;
}

void List::PrintList()
{
    curr = head;
    while(curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
    cout << endl;
}