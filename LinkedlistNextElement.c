#include <stdio.h>
#include<malloc.h>
//using namespace std;
struct node{
    int data;
    struct node* next;
};

void print_list(struct node* head){
    struct node* traverser=head;
    while((traverser)!=NULL){
        printf("%d\n",traverser->data);
        traverser=traverser->next;
    }
}

void add(struct node* head,struct node* new_node){
    struct node* traverser;
    traverser=head;
    while((traverser->next)!=NULL){
        traverser=traverser->next;
    
    }
        traverser->next=new_node;
}
struct node* create_list(int n){
    int i;
    struct node* head = NULL;
    struct node* first_node;
    first_node=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&(first_node->data));
	first_node->next=NULL;
	head=first_node;
	for(i=1;i<n;i++){
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&(new_node->data));
	new_node->next=NULL;
	add(head,new_node);
	}
	print_list(head);
	return head;
}

void check(struct node* head,int n){

    struct node* traverser;
    traverser=head;
    int count=0,flag=1;
    while(traverser->next!=NULL){
        
        if((traverser->data)==n){
            //printf("The index is %d\n%d\n",traverser->data,count);
            
            flag=0;
            break;
        }
        traverser=traverser->next;
        count++;
    }
    
    if(flag!=0)
    {
        printf("Element Not Found!!!");
    }
    else if(traverser->next==NULL)
    {
        printf("there is no element present next to this node");
    }
    else 
    {
        traverser=traverser->next;
        printf("\nthe next node is ===== %d",traverser->data);
    }
}

int main() {
	int n,x,val;
	struct node* head;
	head=(struct node*)malloc(sizeof(struct node));
	printf("Enter the number nodes\n");
	scanf("%d",&n);
	printf("Enter the data\n");
	head=create_list(n);
	printf("Enter the value to check");
	scanf("%d",&val);
    check(head,val);
	//	printf("%d",(head->data));
	return 0;
}
