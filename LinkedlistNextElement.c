#include <stdio.h>
#include<malloc.h>
//using namespace std;
struct node{
    int data;
    struct node* next;
};

void print_list(struct node* head){
    struct node* traverser=head;			//Function to print the list
    while((traverser)!=NULL){
        printf("%d\n",traverser->data);
        traverser=traverser->next;
    }
}

void add(struct node* head,struct node* new_node){
    struct node* traverser;
    traverser=head;					//Function to add an element to the list
    while((traverser->next)!=NULL){
        traverser=traverser->next;
    
    }
        traverser->next=new_node;
}
struct node* create_list(int n){
    int i;
    struct node* head = NULL;
    struct node* first_node;				//Function to initiate the list creation
    first_node=(struct node*)malloc(sizeof(struct node));	
	scanf("%d",&(first_node->data));		//First node is created here
	first_node->next=NULL;
	head=first_node;
	for(i=1;i<n;i++){				//successive nodes are created using loop
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&(new_node->data));			//For successive nodes, add function is called to append the nodes
	new_node->next=NULL;
	add(head,new_node);
	}
	print_list(head);				//The list is printed once
	return head;
}

void check(struct node* head,int n){

    struct node* traverser;
    traverser=head;				//Traverser is used to traverse the list from head node
    int count=0,flag=1;
    while(traverser->next!=NULL){
        
        if((traverser->data)==n){		//Loop executes till last node m
                       
            flag=0;
            break;				//Loop breaks if the desired value is found
        }
        traverser=traverser->next;
        count++;
    }
    
    if(traverser->next==NULL)
    {
        printf("\nThere is no element present next to this node");
    }
    else 
    {
        traverser=traverser->next;
        printf("\nthe next node is ===== %d",traverser->data);  //The next node's data is printed
    }
}

int main() {
	int n,x,val;
	struct node* head;
	head=(struct node*)malloc(sizeof(struct node));
	printf("Enter the number nodes\n");
	scanf("%d",&n);						//Getting the number of nodes as input
	printf("Enter the data\n");
	head=create_list(n);					//func to get input
	printf("Enter the value to check");
	scanf("%d",&val);					//Value to check in the list
    check(head,val);
	//	printf("%d",(head->data));
	return 0;
}
