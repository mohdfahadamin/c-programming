#include <stdio.h>
#define N 5
int queue[N];
int front = -1, rear = -1;

void enqueue();
void dequeue();
void display();

int main()
{
    int choice;

    do
    {
        printf("Enter choice: 1:Enqueue , 2:Dequeue , 3:Display, 0:Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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
    } while (choice != 0);

    return 0;
}
void enqueue()
{
    int x;
    printf("Enter element to enqueue: ");
    scanf("%d", &x);
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if (((rear + 1) % N) == front)
    {
        printf("Queue is full. Cannot enqueue.\n");
    }
    else
    {

        rear = (rear + 1) % N;
        queue[rear] = x;
        printf("Enqueued: %d\n", x);
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty. Cannot dequeue.\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("dequed element: %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

void display()
{
    int i = front;
    if (front == -1)

    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d ", queue[rear]);
        printf("\n");
    }
}