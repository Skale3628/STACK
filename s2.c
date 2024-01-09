#include<stdio.h>

int top=-1;
int size=0;

int push(int stack[]){
    if(top ==size-1){
        printf("stack overflow\n");
        return -1;
    }else{
        int data;
        printf("enter data\n");
        scanf("%d",&data);
        top++;
        stack[top]=data;
        return 0;
    }
}

int pop(int stack[]){
    if (top==-1){
        printf("stack underflow\n");
        return -1;
    }else{
        int data = *(stack+top);
        top--;
        return data;
    }
}

int peek(int stack[]){
    if(top == -1){
        printf("Stack is empty \n");
        return-1;
    }else{
        return stack[top];
    }
}

void main(){
    printf("enter stack size:\n");
    scanf("%d",&size);

    int stack[size];
    char choice;
    do{
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        
        int ch;
        printf("enter your choice\n");
        scanf("%d",&ch);

        switch(ch){
            case 1: 
                push(stack); 
                break;
            case 2: 
            {
                int ret = pop(stack); 
                printf("%d popped\n");
            }
                break;
            case 3: 
                peek(stack); 
                break;
            default:
                printf("invalid choice\n");
                break;            
        }
        getchar();
        printf("do you want to continue ?\n");
        scanf("%c",&choice);
    }while(choice == 'Y' || choice == 'y');
}

