#include <stdio.h>
#define N 5
void push();
void pop();
void display();

int stack[N];
int top = -1;

int main()
{
    int ch;

    do
    {
        printf("Enter choice: 1:push , 2:pop , 3:display, 0:exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (ch != 0);

    return 0;
}

void push()
{
    int x;
    printf("enter data: ");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("\noverflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        printf("\nunderflow\n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("%d\n", item);
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}