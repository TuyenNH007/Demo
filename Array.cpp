#include <iostream>
#define SIZE 5
using namespace std;


class Queue
{
private:
    int front;
    int rear;
    int arr[SIZE] = {0}; // Number of elements currently in the queue
    unsigned int count;

public:
    Queue()
    {
        front = 0;
        rear = -1;
        count = 0;
    }
    bool isFull(void)
    {
        return (count == SIZE) ? true : false;
    }

    bool isEmpty(void)
    {
        return (count == 0) ? true : false;
    }

    int deQueue() // removed the element from the frontal side of the queue
    {
        if(isEmpty())
        {
            cout << "Queue is empty , cannot dequeue!" << endl;
            return -1;
        }

        int removedValue = arr[front];
        front = (front + 1) % SIZE;
        count--;
        cout << "Dequeued : " << removedValue << endl;
        return removedValue;
    }
    void enQueue(int value) // it insert a element to the end of the queue
    {
        if(isFull())
        {
            // is FULL
            cout << "is FULL" << endl;
            return;
        }
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
        count++;
        cout << "Enqueued" << value << endl;
    }
};

int main (int)
{
    Queue q;

    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(20);
    q.enQueue(20);
    q.enQueue(20);
    q.enQueue(20);

    q.deQueue();
     q.deQueue();
      q.deQueue();
       q.deQueue();
        q.deQueue();

    return 1;
}