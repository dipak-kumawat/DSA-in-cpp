#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        this->top = -1;
    }
    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "stack is overflow" << endl;
        }
        else
        {

            top++;
            arr[top] = data;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            top--;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    int getSize()
    {
        return top + 1;
    }

    void print()
    {
        cout << "Top: " << top << endl;
        cout << "Top element : " << getTop() << endl;
        cout << "Stack : ";
        for (int i = 0; i < getSize(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{

    Stack st(8);

    st.push(10);
    st.print();

    st.push(20);
    st.print();

    st.push(30);
    st.print();

    st.push(40);
    st.print();

    st.push(50);
    st.print();

    // stack<int>st;

    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);

    // cout << "size of stack "<< st.size() << endl;
    // cout << "top of stack "<< st.top() << endl;

    // st.pop();

    // if(st.empty()){
    //     cout << "stack is empty"<< endl;

    // }else{
    //     cout << "stack is not empty"<< endl;
    // }

    return 0;
}