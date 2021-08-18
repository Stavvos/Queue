#include <iostream>
#define MAX 5

using namespace std;


class queue {

public: int rear, front, array[MAX];

queue()
{
    rear = -1;
    front = -1;
}

int isFull();
int isEmpty();
void enQueue(int element);
void deQueue();
void display();
void peekFront();
void peekRear();
void display2();



};

//check if queue is full
int queue::isFull()
{
    if (front == 0 && rear == MAX - 1)
        return 1;
    else
        return 0;
}

//check if queue is empty
int queue::isEmpty()
{
    if(front == -1)
        return 1;
    else
        return 0;
}

//insert new item into queue
void queue::enQueue(int element)
{
    if(isFull())
    {
        cout << endl << "queue is full" << endl;
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        array[rear] = element;
        cout << endl << "item inserted: " << array[rear] << endl;
    }
}

//delete item in front position of queue
void queue::deQueue()
{
    int element;

    if(isEmpty())
    {
        cout << endl << "queue is empty" << endl;
    }
    else
    {
        element = array[front];
        if(front >= rear)
        {
            front = - 1;
            rear = -1;
        }
        else
        {
            front++;
        }
        cout << endl << "item removed: " << element << endl;
    }
}

void queue::peekFront()
{
    if(isEmpty())
    {
        cout << endl << "queue is empty" << endl;
    }
    else
    {
        cout << endl << "front item is: " << array[front] << endl;
    }

}

void queue::peekRear()
{
    if (isEmpty())
    {
        cout << endl << "queue is empty" << endl;
    }
    else
    {
        cout << endl << "rear item is: " <<  array[rear] << endl;
    }
}

void queue::display()
{
    if (isEmpty())
    {
        cout << endl << "queue is empty" << endl;
    }
    else
    {
        cout << endl << "front index is: " << front << endl;
        for (int i = front; i <=rear; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl << "rear index is: " << rear << endl;
    }
}



int main()
{
    queue q;

    q.deQueue(); //meant to fail queue is empty
    q.peekFront(); // meant to fail queue is empty
    q.peekRear(); // meant to fail queue is empty

    //insert values into array
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    q.peekFront(); //view item in front of queue
    q.peekRear(); //view item at the rear of queue

    q.display(); //display queue items, plus front and rear index of array


    //remove item at front of queue
    q.deQueue();
    q.deQueue();
    q.deQueue();

    q.display(); //display queue items, plus front and rear index of array

    //remove item at front of queue
    q.deQueue();
    q.deQueue();






    return 0;
}
