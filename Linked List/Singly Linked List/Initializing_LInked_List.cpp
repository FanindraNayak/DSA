#include <iostream>

using namespace std;

class linked_list{
    public:
        int data;
        linked_list *next;

        linked_list(int val){
            data = val;
            next=NULL;
        }
};

void print(linked_list *head){
    linked_list *temp = head;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    linked_list *head = NULL;

    head = new linked_list(1);

    head -> next = new linked_list(2);

    print(head);
    
    return 0;
}