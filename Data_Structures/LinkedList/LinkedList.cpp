#include <iostream>
using namespace std;

/**
*
*  Linked list implementation using Classes in C++
*
*/

class Node {
	public:
	    int data;
	    Node* next;
};

class LinkedList {
	private:
    	Node* head;
	public:
    	    void addNode(int val){
		    Node* newnode = new Node();
		    newnode->data = val;
		    newnode->next = NULL;
		    if (head == NULL) {
		        head = newnode;
		    }
		    else {
		        Node* temp = head; 
		        while (temp->next != NULL) { 
		            temp = temp->next;
		        }
		        temp->next = newnode;
		    }
		};
    	    void reverseList(){
		    Node* temp = head;
		    Node* nextnode = NULL;
		    Node* revnode = NULL;
		    while (temp != NULL) {
		        head = temp;
		        nextnode = temp->next;
		        temp->next = revnode;
		        revnode = temp;
		        temp = nextnode;
		    }
		};
    	    void display(){
		    if (head == NULL) {
		        cout << "List is empty!" << endl;
		    }
		    else {
		        Node* temp = head;
		        while (temp != NULL) {
		            cout << temp->data << " ";
		            temp = temp->next;
		        }
		        cout << endl;
		    }
		};
};
int main() {
    LinkedList* list = new LinkedList();
    list->addNode(100);
    list->addNode(200);
    list->addNode(300);
    list->addNode(400); 
    list->addNode(500);
    cout << "Linked List data: " << endl;
    list->display();
    list->reverseList();
    cout << "Reversed Linked List data: " << endl;
    list->display();
    delete list;
    return 0;
}
