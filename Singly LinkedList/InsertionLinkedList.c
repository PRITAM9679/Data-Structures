#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head =NULL;
void create(){
	struct node *temp,*newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	if(head==NULL){
		head = temp = newnode;
	}
	else{
		temp = head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next = newnode;
	}
}
void display(){
	struct node *temp;
	temp = head;
	if (head==NULL){
		printf("\nThe Linked list is Empty");
	}
	else{
	
	while (temp!=NULL){
		printf("\n%d",temp->data);
		temp = temp->next;
	}
}
}
void ins_beg(){
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data yo be inserted at beg : = ");
	scanf("%d",&newnode->data);
	newnode->next = head;
	head = newnode;
}
void ins_end(){
	struct node *temp, *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data to be inserted at the end := ");
	scanf("%d", &newnode->data);
	newnode->next = NULL;
	temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = newnode;
}
int len(){
	int n =0;
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		temp = temp->next;
		n++;
	}
	return n;
}
void ins_pos(){
	struct node *temp,*newnode;
	int i,pos;
	i = 0;
	printf("\nEnter the position where you want to insert the node = ");
	scanf("%d",&pos);
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data = ");
	scanf("%d",&newnode->data);
	temp = head;
	int n = len();
	if ((pos<0) || (pos>n)){
		printf("\nInvalid position");
	}
	else{
	
	while(i<pos-2){
		temp = temp->next;
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}
}
int main(){
	int ch;
	while(1){
	
	printf("\n1. Create a node\n2. Display \n3. Insert at begining \n4. Insert at the end" 
			 "\n5. Insert at any position "
			 "\n6. Exit\n Enter ur choice := ");
	scanf("%d",&ch);
	switch(ch){
	
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			ins_beg();
			break;
		case 4:
			ins_end();
			break;
		case 5:
			ins_pos();
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("\n Invalid Choice");

}}
return 0;
}
