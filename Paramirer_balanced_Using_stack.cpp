#include <bits/stdc++.h>
using namespace std;

bool check_balance(string s)
{
    stack<char> element;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            element.push(s[i]);
        }
        else 
        {
            switch (s[i])
            {
            case ']':
                if (element.top() == '[')
                {
                    element.pop();
                }
                else 
                {
                    return false;
                }
                break;
            case '}':
                if (element.top() == '{')
                {
                    element.pop();
                }
                else 
                {
                    return false;
                }
                break;
            case ')':
                if (element.top() == '(')
                {
                    element.pop();
                }
                else 
                {
                    return false;
                }
                break;
            }
        }
    }
   return element.empty();
}

int main()
{
    string paramiter = {"({[([{}])]})"};
    bool result = check_balance(paramiter);
    if (result)
    {
        cout << "Paramiter Balanced" << endl;
    }
    else 
    {
        cout << "Un-Balanced" << endl;
    }

    return 0;
}
