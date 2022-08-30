#pragma once

class List 
{
    private:
        typedef struct node
        {
            int data;
            node *next;
        } *nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;
        
    public:
        List();
        void AddNode(int addData);
        void AddFirstNode(int addData);
        void DeleteNode(int delData);
        void DeleteLast();
        void PrintList();
};
