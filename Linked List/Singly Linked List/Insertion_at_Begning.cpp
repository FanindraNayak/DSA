#include <iostream>

using namespace std;

class linked
{
public:
    int data;
    linked *next;

    linked(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insert_at_beg(int data, linked *&head)
{
    linked *ptr = new linked(data);
    ptr->next = head;
    head = ptr;
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

    cout << "end" << endl;
}

int main()
{
    linked *head = NULL;

    int i = 1;
    while (i <= 50)
    {
        insert_at_beg(i, head);
        i++;
    }

    print(head);

    return 0;
}