#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head= NULL;
void addfirst(int num){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> prev = NULL;
	newnode -> next = NULL;
	newnode -> data = num;
	if(head == NULL){
		head = newnode;
		newnode -> next = head;
		newnode -> prev = head;
	}
	else{
		newnode -> next = head;
		newnode -> prev = head -> prev;
		head -> prev = newnode;
		newnode -> prev -> next = newnode;
		head = newnode;
	}
}
void addlast(int num){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> prev = NULL;
	newnode -> next = NULL;
	newnode -> data = num;
	if(head == NULL){
		head = newnode;
		newnode -> next = head;
		newnode -> prev = head;
	}
	else{
		newnode -> prev = head -> prev;
		newnode -> next = head;
		newnode -> prev -> next = newnode;
		head -> prev = newnode;
	}
}
void addspecific(int n, int num){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> prev = NULL;
	newnode -> next = NULL;
	newnode -> data = num;
	if(head == NULL){
		head = newnode;
		newnode -> next = head;
		newnode -> prev = head;
	}
	else{
		struct node *curr = head;
		for(int i =1; i<n-1; i++){
			curr = curr -> next;
		}
		newnode -> prev = curr;
		newnode -> next = curr -> next;
		curr -> next -> prev = newnode;
		curr -> next = newnode;
	}
}
void deletefirst(){
	struct node *temp = head;
	head -> prev -> next = head -> next;
	head -> next -> prev = head -> prev;
	head = head -> next;
	free(temp);
}
void deletelast(){
	struct node *temp = head -> prev;
	temp -> prev -> next = head;
	head -> prev = temp -> prev;
	free(temp);
}
void deletespecific(int n){
	struct node *curr = head;
	for(int i =1; i<n; i++){
		curr = curr -> next;
	}
	curr -> prev -> next = curr -> next;
	curr -> next -> prev = curr -> prev;
	free(curr); 
}
void display(){
	if(head == NULL){
		cout<<"The list is empty"<<endl;
	}
	else{
		cout<<"The items in the linked list: "<<endl;
		struct node *curr = head;
		do{
			cout<<curr->data<<" ";
			curr = curr->next;
		}while(curr!=head);
		cout<<endl;
	}
}
int main(){
	cout<<"Add First: "<<endl;
	addfirst(1);
	addfirst(2);
	display();
	cout<<"Add last: "<<endl;
	addlast(3);
	addlast(4);
	display();
	cout<<"Add Specific: "<<endl;
	addspecific(3, 2);
	display();
	cout<<"Delete first"<<endl;
	deletefirst();
	display();
	cout<<"Delete last"<<endl;
	deletelast();
	display();
	cout<<"Delete specific"<<endl;
	deletespecific(2);
	display();
}
