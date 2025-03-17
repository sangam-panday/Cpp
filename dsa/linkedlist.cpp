#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;
//insertion at the end
void AddNode(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail -> next = newNode;
        tail = newNode;
    }
}
//insertion at begining
void addnode(int data){
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = NULL;
	if(head == NULL){
		head = newNode;
		tail = newNode;
	}
	else{
		struct node *curr = newNode;
		curr -> next = head;
		head = curr;
	}
}
//insertion  at desired location
void Addnode(int data, int n){
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	struct node *curr = head;
	for(int i = 1; i< n-1; i++){
		curr = curr -> next;
	}
	newNode -> data = data;
	newNode ->next = curr->next;
	curr->next = newNode;
}
//deletion at begining
void deletenode(){
	struct node *curr = head;
	head = head -> next;
	free(curr);
}
void DeleteNode(){
	struct node *curr = head;
	while(curr->next != tail){
		curr = curr->next;
	}
	free(tail);
	tail = curr;
	tail -> next = NULL;
}
//deletion at specific postion
void Deletenode(int n){
	struct node *curr = head;
	for(int i =1; i< n-1; i++){
		curr = curr->next;
	}
	curr->next = curr->next->next;
	free(curr->next);
}
void display(){
    struct node *curr = head;
    if(head == NULL){
        cout<<"The node is empty";
    }
    else{
        cout<<"Nodes of singly linked list: "<<endl;
        while(curr!=NULL){
            cout<<curr->data;
            curr = curr->next;
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
	cout<<"Add Node at the end: "<<endl;
    AddNode(1);
    AddNode(3);
    AddNode(4);
    AddNode(5);
    display();
    cout<<"Add Node at the begining: "<<endl;
    addnode(0);
    addnode(-1);
    display();
    cout<<"Add Node at the desired location: "<<endl;
    Addnode(2, 4);
    display();
    cout<<"Delete node at the begining: "<<endl;
    deletenode();
    display();
    cout<<"Delete node at the end: "<<endl;
    DeleteNode();
    display();
    cout<<"Delete node at specific Position: "<<endl;
    Deletenode(2);
    display();
}
