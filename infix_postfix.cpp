#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack
{
    int top;
    char *arr;
    int size;
} s1;

int isEmpty(s1 *s)
{
    return s->top == -1;
}

int isFull(s1 *s)
{
    return s->top == s->size - 1;
}

void push(s1 *s, char data)
{
    if (isFull(s))
    {
        printf("STACK OVERFLOW\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
    }
}

char pop(s1 *s)
{
    if (isEmpty(s))
    {
        printf("STACK UNDERFLOW\n");
        return '\0';
    }
    else
    {
        char val;
        val = s->arr[s->top];
        s->top--;
        return val;
    }
}
int isoperator(char infix)
{
    if (infix == '+' || infix == '-' || infix == '*' || infix == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char stacktop(s1 *s){
    if (!isEmpty(s))
    {
        return s->arr[s->top];
    }
}

int precidence(char infix){
    if (infix=='*'||infix=='/')
    {
        return 2;
    }
    else if(infix=='+'||infix=='-'){
        return 1;
    }
    return -1;
}

char *infixtopostfix(s1 *s, char *infix)
{
    char *postfix = (char *)malloc((strlen(infix)+1) * sizeof(char));
    int j = 0;
    int i=0;
    for (int i = 0; i < strlen(infix); i++) {
    
        if (isoperator(infix[i])==0)
        {
            postfix[j]=infix[i];
            j++;
        }
        else {
            if (!isEmpty(s) && precidence(infix[i]<=precidence(stacktop(s))))
            {
                postfix[j++]=pop(s);
            }
            push(s,infix[i]);
        }
    }
    while (!isEmpty(s))
        {
            postfix[j]=pop(s);
            j++;
        }
        postfix[j]='\0';  

    return postfix;
}

int main()
{
    s1 *s = (s1 *)malloc(sizeof(s1));
    s->top = -1;
    s->size = 80;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char *infix="x+y*z-k";
    char *postfix = infixtopostfix(s, infix);
    printf("%s",postfix);
    free(s->arr);
    free(s);
    free(postfix);
    return 0;
}