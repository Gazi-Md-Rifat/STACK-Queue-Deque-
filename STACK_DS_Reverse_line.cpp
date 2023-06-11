#include <iostream>
#include <stack>
using namespace std;

void reverse_function(string s)
{
    stack<string> element;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        element.push(word);
    }

    while (!element.empty())
    {
        cout << element.top() << " "; // print the top block from stack...
        element.pop(); // remove top value ...thats mean top pointer will decrease and point next value...
    }
}

int main()
{
    string sentence = "Hello Wolrd! I need my IDENTITY";
    reverse_function(sentence);

    return 0;
}