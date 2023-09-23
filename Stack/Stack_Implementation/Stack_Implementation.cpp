#include <iostream>

using namespace std;

// creating a global variable in the cpp
#define MAX 100

// Creating the class stack that initiate top as -1
class Stack
{
    int top;

public:
    int arr[MAX];

    Stack() { top = -1; }

    // Defining all the functions for the stack operations
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

// Creating all the functions of stack
bool Stack::push(int x)
{
    if (top >= MAX)
    {
        cout << " Stack is full" << endl;
        return false;
    }
    else
    {
        arr[++top] = x;
        cout << "Pushed " << x << " in the stack" << endl;
        return true;
    }
}

int Stack::peek()
{
    if (top < 0)
    {
        cout << "Stack is Empty" << endl;
        return 0;
    }
    else
    {
        int x = arr[top];
        return x;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack is Empty" << endl;
        return 0;
    }
    else
    {
        int x = arr[top--];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

// Initiating the main Class

int main()
{

    // Creating the object of the class Stack
    class Stack s;

    // Pushing elements in the Stack
    s.push(1);
    int i = 0;
    while (i < 10)
    {
        s.push(i);
        i++;
    }

    // To view the top element of the stack
    int x = s.peek();
    cout << "\n"
         << x << endl;

    // Check if the stack is empty or not
    cout << s.isEmpty();

    return 0;
}