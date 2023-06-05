#include <stdio.h>
#define SIZE 5

int items[SIZE], front = -1, rear = -1;

void enqueue(int item) {
    if (rear == SIZE - 1) {
        printf("Queue is Full!!\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        items[rear] = item;
        printf("Inserted -> %d\n", item);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is Empty!!\n");
    } else {
        printf("Removed -> %d\n", items[front]);
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

int main() {
    //dequeue is not possible on empty queue
    dequeue();

    //enqueuing elements into the queue
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);

    //dequeue removes element entered first i.e. 1
    dequeue();

    //Now we have just 2,3,4 in the queue
    enqueue(5);

    //Now we have 2,3,4,5 in the queue
    dequeue();

    //Now we have 3,4,5 in the queue
    return 0;
}
