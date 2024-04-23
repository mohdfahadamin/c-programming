#include <stdio.h>

int queue[5];
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
    int item;

    if (rear == 4)
    {
        printf("Queue is full. Cannot enqueue.\n");
    }
    else
    {
        printf("Enter element to enqueue: ");
        scanf("%d", &item);
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = item;
        printf("Enqueued: %d\n", item);
    }
}

void dequeue()
{
    int y;
    if (front == -1)
    {
        printf("Queue is empty. Cannot dequeue.\n");
    }
    else
    {
        printf("Dequeued: %d\n", queue[front]);
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            y = queue[front];
            front = front + 1;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}