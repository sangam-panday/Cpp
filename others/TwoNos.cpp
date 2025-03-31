#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
	struct node *next;
	int data;
};
struct node2{
	struct node2 *next2;
	int data;
};
struct node *tail, *head = NULL;
void insert(int data){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = data;
	newnode -> next = NULL;
	if(head == NULL){
		head = tail = newnode;
	}
	else{
		tail -> next = newnode;
		tail = newnode;
	}
}
void display(){
	struct node *curr = head;
	while(curr != NULL){
		cout<<curr->data<<endl;
		curr = curr -> next;
	}
}
struct node *tail2, *head2 = NULL;
void insert2(int data){
	struct node2 *newnode = (struct node2*)malloc(sizeof(struct node2));
	newnode -> data = data;
	newnode -> next2 = NULL;
	if(head2 == NULL){
		head2 = tail2 = newnode;
	}
	else{
		tail2 -> next2 = newnode;
		tail2 = newnode;
	}
}
void display2(){
	struct node2 *curr = head2;
	while(curr != NULL){
		cout<<curr->data<<endl;
		curr = curr -> next2;
	}
}
int main(){
	insert(1);
	insert(2);
	insert(3);
	display();
	insert2(2);
	insert2(1);
	insert2(0);
	display2();
}
