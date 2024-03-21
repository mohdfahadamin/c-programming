#include <stdio.h>
#include <stdlib.h> // For exit()

#define MAX_SIZE 50

int stack[MAX_SIZE];
int top = -1;

void push(int data)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack is overflow.\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = data;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is underflow.\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}

int isDigit(char ch)
{
    return (ch >= '0' && ch <= '9');
}

int postfixExpressionEvaluate(char postfix[])
{
    for (int i = 0; postfix[i] != '\0'; i++)
    {
        if (isDigit(postfix[i]))
        {
            push(postfix[i] - '0');
        }
        else
        {
            int value2 = pop();
            int value1 = pop();
            switch (postfix[i])
            {
            case '+':
                push(value1 + value2);
                break;
            case '-':
                push(value1 - value2);
                break;
            case '*':
                push(value1 * value2);
                break;
            case '/':
                push(value1 / value2);
                break;
            default:
                printf("Invalid operator: %c\n", postfix[i]);
                exit(EXIT_FAILURE);
            }
        }
    }
    return pop();
}

int main()
{
    char postfix[MAX_SIZE];
    printf("Enter the postfix expression: ");
    scanf("%s", postfix);

    int result = postfixExpressionEvaluate(postfix);
    printf("Result: %d\n", result);

    return 0;
}

// Enter the postFix expression :231*+9-
//  oulput=-4