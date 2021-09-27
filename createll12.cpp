#include <iostream>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};
 

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
 
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;
    Node* fifth = NULL;
    
 
    
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();
 
    head->data = 50; 
    head->next = second; 
 
    second->data = 60;
    second->next = third;
 
    third->data = 70; 
    third->next = fourth;
    
    fourth->data = 80;
    fourth->next = fifth;
    
    fifth->data = 90;
    fifth->next = NULL;
 
    printList(head);
 
    return 0;
}
