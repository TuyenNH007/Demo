#include <iostream>
using namespace std;
#define SIZE 5
class Stack
{
    private:
        int arr[SIZE] = {0};
        int top;

    public:
    Stack(){
        top = -1;
    }

        bool isFull(void)
    {
        return (top == SIZE - 1) ? true : false;
    }

    bool isEmpty(void)
    {
        return (top == 0) ? true : false;
    }
    void push(int value)
    {
        if(isFull()){
            cout << "Is overflow" << endl;
            return;
        }
        arr[++top] = value;
        cout << "Pushed" << value << endl;
        
    }

    int pop()
    {
        if(isEmpty())
        {
            cout << "is Already Empty" << endl;
        }
        cout << "Poped" << arr[top] << endl;
        return arr[top--];
    }
};

int main (int)
{
    Stack s;

    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);

    s.pop();
    s.pop();
    s.pop();
    s.pop();

    char ch;

    ch = 'A';

    cout << "The ASCII value of" << ch << "is " << static_cast<int>(ch) << endl;
    return 0;
}