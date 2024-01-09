//stack using array

#include<stdio.h>
#include<stdbool.h>

int top = -1;
int size = 0;
int ch;


bool isfull(){
    if(top == size-1)
    return true;
    else
    return false;
}
int push(int stack[]){
    if (isempty()){
        return -1;
    }else{
        top++;
        printf("Enter the element to be pushed: \n");
        scanf("%d",&stack[top]);
        return 0;
    }
}

int peek(int stack[]){
    if(isempty()){
        return -1;
        }else {
            int val = stack[top];
            flag=1;
            return val;
    }
}

int pop(int stack[]){
    if(isempty()){
        return -1;
        }else {
            int val = stack[top];
            top--;
            flag=1;
            return val;
    }
}


void main(){
    printf("enter your choice\n");
    scanf("%d",&size);
    int stack[size];

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