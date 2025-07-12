
#include <iostream>
using namespace std;


class Queue
{
private:
    struct Element
    {
        string value;
        int priority;
    };

    Element* arr;
    int size;
public:
    Queue():arr(nullptr), size(0){}
    ~Queue()
    {
        delete[]arr;
    }
    void Enqueue(string value, int priority)
    {
        int index = 0;
        while (index < size && arr[index].priority < priority) { index++; }
        size++;
        Element* temp = new Element[size];
        for (int i = 0; i < index; i++)
        {
            temp[i] = arr[i];
        }
        temp[index] = Element{value, priority};
        for (int i = index; i < size-1; i++)
        {
            temp[i+1] = arr[i];
        }
        if (arr != nullptr)
            delete[]arr;
        arr = temp;
    }
    bool IsEmpty()
    {
        return size == 0;
    }
    Element Dequeue()
    {
        if (!IsEmpty())
        {
            Element first = arr[0];
            for (int i = 0; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            return first;
        }
    }
    void Print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i].value << " : " << arr[i].priority<< " | ";
        }cout << endl;
    }
};
int main()
{
    Queue q;
   /* Queue::Element el = { "A",1 };
    q.Enqueue(el);
    q.Enqueue(Queue::Element{ "K",8 });
    q.Enqueue(Queue::Element{ "C",3 });
    q.Enqueue(Queue::Element{ "B",2 });
    q.Enqueue(Queue::Element{ "N",12 });
    q.Print();
    q.Enqueue(Queue::Element{ "D",4 });
    q.Print();*/
  
    q.Enqueue("A", 1);
    q.Enqueue("K",8 );
    q.Enqueue("C",3 );
    q.Enqueue("B",2 );
    q.Enqueue("N",12);
    q.Print();
    q.Enqueue("D",4 );
    q.Print();

    while (!q.IsEmpty())
    {
        cout << q.Dequeue().value << " ";
    }
}
