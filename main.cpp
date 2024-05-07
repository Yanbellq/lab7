#include <iostream>
#include "S_list.h"
#include "D_list.h"

using namespace std;

void line();
void curiousLine();
void singleList();
void doubleList();

int main() {

    singleList();
    doubleList();

    return 0;
}

void line() { cout << "------------------------\n"; }
void curiousLine() { cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n"; }
void singleList()
{
    SingleLinkedList<int> s_list;

    curiousLine();
    cout << "Single Linked List:" << endl;
    line();

    if (s_list.isEmpty())
    {
        line();
        cout << "List is empty!" << endl;
        line();
    }

    system("pause");

    line();
    s_list.insertAtBeginning(1);
    s_list.insertAtBeginning(0);
    s_list.insertAtEnd(5);
    s_list.insertAtEnd(6);
    s_list.insertAtEnd(7);
    s_list.insertAtEnd(8);

    cout << s_list;

    line();

    system("pause");

    line();

    s_list.removeFromEnd();
    s_list.removeFromBeginning();
    cout << s_list;

    line();

    system("pause");

    line();

    s_list.removeAtIndex(0);
    s_list.insertAtIndex(1, 3);
    s_list.insertAtIndex(3, 3);
    cout << s_list;

    line();

    system("pause");

    line();

    if (s_list.search(2))
        cout << "List have element 2!" << endl;
    else
        cout << "List don't have element 2!" << endl;

    line();
    cout << "\n";
    line();

    cout << "Size of list: " << s_list.getSize() << endl;

    line();
    cout << "\n";
    line();

    cout << "The result of math operation between element with index 3, and with element with index 2, is: " << s_list[3] - s_list[2] << endl;

    line();

    curiousLine();

    system("pause");
};

void doubleList()
{
    curiousLine();
    cout << "Double Linked List:" << endl;
    line();

    DoubleLinkedList<int> d_list;

    line();

    if (d_list.isEmpty())
        cout << "List is empty!" << endl;

    line();

    system("pause");

    line();

    d_list.insertAtBeginning(2);
    d_list.insertAtBeginning(1);
    d_list.insertAtBeginning(0);
    d_list.insertAtEnd(3);
    d_list.insertAtEnd(4);

    cout << d_list;

    line();

    system("pause");

    line();

    d_list.removeFromEnd();
    d_list.removeFromBeginning();

    cout << d_list;

    line();

    system("pause");

    line();

    d_list.removeAtIndex(1);
    d_list.insertAtIndex(0,5);

    cout << d_list;

    line();

    system("pause");

    line();

    if (d_list.search(2))
        cout << "List have element 2" << endl;
    else
        cout << "List don't have element 2" << endl;

    line();
    cout << "\n";
    line();

    cout << "Size of list: " << d_list.getSize() << endl;

    line();
    cout << "\n";
    line();

    line();
    cout << "The result of math operation between element with index 0, and with element with index 2, is: " << d_list[0] - d_list[2] << endl;
    line();

    curiousLine();

    system("pause");
};