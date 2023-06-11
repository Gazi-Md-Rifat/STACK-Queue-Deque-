#include <iostream>
#include <stack>
using namespace std;

// reverse any number sequence without use ectra stack..

void inset_at_bottom(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element); // jsut push carrid value from reverse function at to bottom..
        return;
    }
    int top = st.top();
    st.pop();
    inset_at_bottom(st, element); // first just hold top one by on....whe base condition will be hitted then i just push the element on bottom.what i carry from reverse function store element...
    st.push(top); // then push all holded data one by on...
}

void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int element = st.top(); // store element...
    st.pop();
    reverse(st);
    inset_at_bottom(st, element); // pass store element and after pop stack..
}

int main()
{
    stack<int> value;
    value.push(1);
    value.push(2);
    value.push(3);
    value.push(4);
    value.push(5);
    value.push(6);
    value.push(7);
    reverse(value);
    while (!value.empty())
    {
        cout << value.top() << " ";
        value.pop();
    }

    return 0;
}