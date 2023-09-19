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

// Initilizing a void fnction that takes a vavlue and head node as a parameter

void insert_at_end(int value, linked *&head)
{

    // Creating a pointer ptr that is object to the class linked this creates a node with data = value
    linked *ptr = new linked(value);

    // Cheacking if the head is null if the head is null that means there is no node so we insert the value in the begining
    if (head == NULL)
    {

        head = ptr;
        return;
    }

    // We create a temp that points to head so that we can iterateand add at the end
    linked *temp = head;

    // We iterate the entire linked list till the second last and after the second last of the linked list we add the ptr node initilized earlier
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Adding the ptr to the last node
    temp->next = ptr;
}

void print(linked *head)
{

    // We create a temp that points to head so that we can iterateand the linked list
    linked *temp = head;

    // Iterating though the entire node
    while (temp != NULL)
    {

        // Printing the entire data in each node
        cout << temp->data << " ";

        // Going to the next node
        temp = temp->next;
    }
}

int main()
{
    // Creating the head of the linked list
    linked *head = NULL;

    // Inserting 1 to the linked list

    insert_at_end(1, head);

    // Inserting from 2 till 50 in linked list
    int i = 2;

    while (i <= 50)
    {
        insert_at_end(i, head);
        i++;
    }

    // Printing the entire linked list

    print(head);

    return 0;
}