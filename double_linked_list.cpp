#include <iostream>
using namespace std;
class Node {
	public:
	int data;
	Node* prev;
	Node* next;
};
Node* head = NULL;
Node* tail = NULL;
void insert(int value) {
	tail = new Node();
	tail -> data = value;
	tail -> next = NULL;
	if(head == NULL) {
		head = tail;
		head -> prev = NULL;
		return;
	}
	Node* temp = head;
	while(temp->next != NULL) {
		temp = temp -> next;
	}temp -> next = tail;
	tail -> prev = temp;
	return;
}

void print() {
	if(head == NULL) {
		cout << "List Empty" << endl;
		return;
	}
	Node* temp = head;
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

void printR() {
	if(tail == NULL) {
		cout << "List Empty" << endl;
		return;
	}
	Node* temp = tail;
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp -> prev;
	}
	cout << endl;
}

void del() {
	while(head != NULL) {  
		Node* nextptr = head -> next;
		delete head;
		head = nextptr;
	}
	head = NULL;
	tail = NULL;
	return;
}

int main(int argc, char** argv) {
	
	while(1) {
		int key;
		cout << "Enter 1 to insert 2 to print and 3 to reverse print 4 to delete and 5 to quite" << endl;
		cin >> key;
		switch(key) {
			case 1: int num; cout << "Enter : "; cin >> num; insert(num); break;
			case 2: print(); break;
			case 3: printR(); break;
			case 4: del(); break;
			case 5: exit(0);
			default : cout << "404, ERR" << endl;
		}
	}
	return 0;
}
