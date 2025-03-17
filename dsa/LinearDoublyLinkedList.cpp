#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;
//Add at the begining
void addnode(int data){
    struct node *NewNode = (struct node*)malloc(sizeof(struct node));
    NewNode -> prev = NULL;
    NewNode -> next = NULL;
    NewNode -> data = data;
    if(head == NULL){
        head = tail = NewNode;
    }
    else{
    	NewNode -> next = head;
    	head -> prev = NewNode;
    	head = NewNode;
    } 
}
//Add at the end
void addNode(int data){
	struct node *NewNode = (struct node*)malloc(sizeof(struct node));
    NewNode -> prev = NULL;
    NewNode -> next = NULL;
    NewNode -> data = data;
    if(head == NULL){
        head = tail = NewNode;
    }
    else{
    	NewNode -> prev = tail;
    	tail -> next = NewNode;
		tail = NewNode; 
	}
}
void AddNode(int data, int n){
	struct node *NewNode = (struct node*)malloc(sizeof(struct node));
    NewNode -> prev = NULL;
    NewNode -> next = NULL;
    NewNode -> data = data;
    if(head == NULL){
        head = tail = NewNode;
    }
    else{
    	struct node *curr = head;
    	for(int i = 1; i< n-1; i++){
    		curr = curr -> next;
		}
		NewNode -> prev = curr;
		NewNode -> next = curr -> next;
		curr -> next = NewNode; 
		NewNode -> next -> prev = NewNode;
	}
}
//Display
void display(){
    struct node *curr = head;
    cout<<"The items in the linked list is: "<<endl;
    if(head == NULL){
        cout<<"The linked list is empty"<<endl;
	}
	else{
		while(curr != NULL){
			cout<<curr->data;
			curr = curr->next;
			cout<<" ";
		}
	}
	cout<<"\n";
}
int main(){
	cout<<"Initially: "<<endl;
	addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    addNode(5);
    display();
    cout<<"Entered at begining"<<endl;
    addnode(0);
    addnode(-1);
    addnode(-2);
    addnode(-3);
    addnode(-4);
    addnode(-5);
    display();
    cout<<"Entered at last"<<endl;
    addNode(6);
    addNode(7);
    addNode(8);
    addNode(9);
    addNode(10);
    display();
    cout<<"Enter at specific position: "<<endl;
    AddNode(99, 1);
    AddNode(100, 2);
    display();
}
