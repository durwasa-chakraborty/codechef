#include <stdio.h>
#include <string.h>

static char infix[401];
static char stack[400];
static char postfix[401];
static int top;

#define operator -10
#define operand -20
#define left_parenthesis -30
#define right_parenthesis -40

void infix_postfix();
void push(char );
void clear(int );
char pop();
int priority(char);
int get_type(char);
int main(int argc, char const *argv[])
{
    int test_cases;
    scanf("%d",&test_cases);
    while(test_cases--)
    {
        top=-1;
        scanf("%s",infix);
        infix_postfix();
        printf("%s\n",postfix);
        clear(strlen(infix));
    }
    return 0;
}
void infix_postfix()
{
    int length=0,i=0,type=0,var_priority=0,p=0;
    char next;
    length = strlen(infix);
    i=p=0;
    while(i<length)
    {
        type = get_type(infix[i]);
        switch(type)
        {
            case left_parenthesis:
                push(infix[i]);
                break;
            case right_parenthesis:
                while((next=pop())!='(')
                    postfix[p++] = next;
                break;
            case operand : 
                postfix[p++]=infix[i];
                break;
            case operator:
                var_priority = priority(infix[i]);
                while(top > -1 && var_priority <= priority(stack[top]))
                    postfix[p++] = pop();
                push(infix[i]);
                break;
        }
        i++;
    }
    while(top > -1)
    {
        postfix[p++]=pop();
        postfix[p]='\0';
    }
}
int priority(char symbol)
{
    switch(symbol)
    {
        case '^':
            return 3;
        case '%':
        case '/':
        case '*':
            return 2;
        case '+':
        case '-':
            return 1;
        case '(':
            return 0;
        default :
            return 999;
    }
}

void push(char symbol)
{
    stack[++top] = symbol;
}
char pop()
{
    return stack[top--];
}
int get_type(char symbol)
{
    switch(symbol)
    {
        case '(':
            return left_parenthesis;
        case ')':
            return right_parenthesis;
        case '^':
        case '%':
        case '/':
        case '*':
        case '+':
        case '-':
            return operator;
        default :
            return operand;
    }
}

void clear(int length)
{
    while(length--)
        stack[length]=postfix[length]=infix[length]='\0';
}