#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prefix(string s)
{
    stack<int> element;
    int x;
    for (int i = s.length() - 1; i >= 0; i--)
    {

        if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-' || s[i] == '^')
        {
            int oparend_1, oparend_2;
            oparend_1 = element.top();
            element.pop();
            oparend_2 = element.top();
            element.pop();
            switch (s[i])
            {
            case '*':
                x = oparend_1 * oparend_2;
                element.push(x);
                break;
            case '/':
                x = oparend_1 / oparend_2;
                element.push(x);
                break;
            case '+':
                x = oparend_1 + oparend_2;
                element.push(x);
                break;
            case '-':
                x = (oparend_1 - oparend_2);
                element.push(x);
                break;
            case '^':
                x = pow(oparend_1, oparend_2);
                element.push(x);
                break;
            }
        }
        else
        {
            element.push(s[i] - '0');
        }
    }
    return element.top();
}

int postfix(string s)
{
    stack<int> element;
    int x;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-' || s[i] == '^')
        {
            int oparend_1 = element.top();
            element.pop();
            int oparend_2 = element.top();
            element.pop();
            switch (s[i])
            {
            case '*':
                element.push(oparend_1 * oparend_2);
                break;
            case '/':
                element.push(oparend_1 / oparend_2);
                break;
            case '+':
                element.push(oparend_1 + oparend_2);
                break;
            case '-':
                element.push(oparend_1 - oparend_2);
                break;
            case '^':
                element.push(pow(oparend_1, oparend_2));
                break;
            }
        }
        else 
        {
            element.push(s[i] - '0');
        }
    }
    return element.top();
}

int main()
{
    // 4*2+3.... infix form...
    cout << "infix result is : " <<  4*2+3 << endl;
    string expression = {"+*423"}; // prefix form .....
    cout << "prefix result is : " << prefix(expression) << endl;
    string expression_2 = {"42*3+"}; // postfix form....
    cout << "postfix result is : " << postfix(expression_2) << endl;

    return 0;
}