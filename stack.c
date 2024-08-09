#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int stack[MAX];
int top=-1;

int isFull()
{
    return top == MAX-1;
}
int isempty()
{
    return top == -1;
}

void push(int data)
{
    if(isFull())
    {
        printf("stack overflow %d\n",data);
    }
    stack[++top]=data;
    printf("pushed tos tack %d\n",data);
}

int pop()
{
    if(isempty())
    {
        printf("stack underoverflow ");
    }
   return stack[top--];
}

int peek()
{
    if(isempty())
    {
        printf("stack underoverflow ");
        return -1;
    }
   return stack[top];
}

void display()
{
   if(isempty())
    {
        printf("stack underoverflow ");
    }
    for(int i=0; i<=top; i++)
    {
        printf("%d\n", stack[i]);
    } 
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    printf("top ele is %d\n", peek());
    printf("popped from stack %d\n", pop());
    display();
}
