#include <iostream>
using namespace std;

#define N 100

class stack
{
public:
    int top = -1;
    int *array = new int[N];

    void push(int n)
    {
        if (top == N - 1)
        {
            cout << "STACK overflow ";
            return;
        }
        top++;
        array[top] = n;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "STACK Have no element ";
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "stack have no element";
            return -1;
        }
        return array[top];
    }
    bool emety()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }

    void print_stack()
    {   
        for (int i = 0; i < N; i++)
        {
            if (emety())
            {
                cout << "stack emtey";
                return;
            }
            // if (top == -1)
            // {
            //     return;
            // }
            cout << array[top] << endl;
            top--;
        }
    }
};

int main()
{
    stack st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.print_stack();
    return 0;
}