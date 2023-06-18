#include <bits/stdc++.h>
#include <queue>
using namespace std;


int main ()
{
    queue<int> element;
    element.push(1);
    element.push(2);
    element.push(3);
    element.push(4);
    cout << element.front();
    cout << element.back();

    return 0;
}