//stack using linkedlist

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
    int data;
    struct node *next;
};
int countnode=0;
struct node *head=null;

int elecount(){
    struct node *temp=head;
    int count=0;
    while(temp != NULL){
        count ++;
        temp = temp -> next;
    }
    return count;

}

bool isfull(){
    if(elecount() == countnode){
        return true;
    }else{
        return false;
    }

}

struct node *newnode=createnode(){
    struct node *newNode=(struct node *)malloc(sizeo(struct node));
    printf("enter data\n");
    scanf("%d",&newnode->data);

    newnode->next = NULL;
    return newNode;
}

void addnode(){
    struct node *newnode=createnode();
    if(head == NULL){
        head =newnode;
    }else{
        struct node *temp = head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    }

    


int push(){
    if(isfull()){
        return -1;
    }else{
        addnode();
        return 0;
    }
}

void main(){
    printf("enter your choice\n");
    scanf("%d",&countnode);
    int stack[countnode];

    char choice;
    do{
        printf("1.push\n");
         printf("2.pop\n");
          printf("3.peek\n");
           printf("4.isempty\n");

           switch(ch){
             case 1:
                {
                    int ret;
                    ret = push(stack);
                    if(ret == -1)
                    printf("stack overflow")
                }
                break;
            case 2:
                //pop();
                {
                    int ret;
                    ret = pop(stack);
                    if(ret == -1)
                    printf("Stack Underflow");
                    else
                    printf("%d is popped",ret);
                }
                break;
            case 3:{
                int ret;
                    ret = peek(stack);
                    if(flag == 0)
                    printf("stack is empty\n");
                    else
                    printf("%d\n",ret);
                }
                break;
            case 4:
            {
                bool ret = isempty();
                if(ret)
                printf("stack is empty\n");
                else
                printf("stack is not empty\n");
           }
                break;
            case 5:
                {
                bool ret = isefull();
                if(ret)
                printf("stack is full\n");
                else
                printf("stack is not full\n");
           }
                break;

            default:
            printf("invalid input");
           }
        getchar();
        printf("do you want to continue?\n");
        scanf("%c",&choice);

    }while(choice == 'Y' || choice == 'y');
}