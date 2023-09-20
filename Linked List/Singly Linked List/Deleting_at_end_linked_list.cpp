#include <iostream>

using namespace std;

class linked
{
public:
    int data;
    linked *next;

    linked(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(int value, linked *&head)
{

    linked *ptr = new linked(value);

    if (head == NULL)
    {
        head = ptr;
        return;
    }

    linked *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = ptr;
}

void delete_node(linked *&head)
{
    linked *temp = head, *prev = NULL;

    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {

        delete head;
        head = NULL;
    }

    while (temp->next != NULL)
    {
        prev = temp;

        temp = temp->next;
    }

    prev->next = NULL;

    delete temp;
}

void print(linked *head)
{
    linked *temp = head;
    cout << "beg -> ";
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " end" << endl
         << endl;
}

int main()
{

    linked *head = NULL;

    int i = 1;
    while (i < 51)
    {

        insert(i, head);
        i++;
    }

    print(head);

    delete_node(head);
    delete_node(head);

    print(head);

    return 0;
}