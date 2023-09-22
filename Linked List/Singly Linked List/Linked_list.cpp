#include <iostream>

using namespace std;

class link_list
{
public:
    int data;
    link_list *next;

    link_list(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insert_at_beg(int data, link_list *&head)
{
    link_list *ptr = new link_list(data);

    ptr->next = head;
    head = ptr;
}

void insert_at_end(int data, link_list *&head)
{
    link_list *ptr = new link_list(data);

    if (head == NULL)
    {
        ptr->next = head;
        head = ptr;
        return;
    }

    link_list *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = ptr;
}

void delete_at_beg(link_list *&head)
{
    if (head == NULL)
        return;

    link_list *ptr = head;

    head = head->next;
    delete ptr;
    return;
}

void delete_at_end(link_list *&head)
{
    link_list *temp = head, *prev = NULL;

    if (head == NULL)
        return;

    if (head->next == NULL)
    {
        head->next = NULL;
        delete head;
        return;
    }

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;
}

void display(link_list *head)
{
    link_list *temp = head;

    cout << "beg -> ";
    while (temp)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "end" << endl;
}

int main()
{
    link_list *head = NULL;

    insert_at_beg(1, head);

    int i = 2;

    while (i <= 10)
    {
        insert_at_end(i, head);
        i++;
    }

    display(head);

    delete_at_end(head);
    delete_at_end(head);

    delete_at_beg(head);

    display(head);

    return 0;
}