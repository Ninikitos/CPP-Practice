#include "linked-list.h"

//using namespace std;

int main()
{
    List list;

    list.AddNode(1);
    list.AddNode(2);
    list.AddNode(3);
    list.AddNode(4);

    list.PrintList();

    list.DeleteNode(3);

    list.PrintList();

    list.DeleteNode(5);

    list.DeleteNode(1);

    list.PrintList();
}