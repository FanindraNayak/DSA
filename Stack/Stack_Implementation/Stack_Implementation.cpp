#include <iostream>

using namespace std;

#define MAX 100

class Stack
{
    int top;

public:
    int arr[MAX];

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

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

int main()
{
    class Stack s;
    s.push(1);
    int i=0;
    while(i<10){
        s.push(i);
        i++;
    }
    s.peek();
    cout << s.isEmpty();
    return 0;
}