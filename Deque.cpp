#include <bits/stdc++.h>
using namespace std;


int main ()
{
    deque<int> data; // deque are the combinatiion of stack and queue....stack push or pop from back side and queue push or pop from front side .....overall deque push or pop form back side and front side...deque can access front and back both side.....
    
    data.push_back(1); // push data form back side on ......
    data.push_back(2);
    data.push_back(3);
    data.push_back(4);
    data.push_back(5);
    data.push_front(5); // push data form front side on .....
    data.push_front(4);
    data.push_front(3);
    data.push_front(2);
    data.push_front(1);
    int i = 0;
    while (!data.empty())
    {
        if (i < 5)
        {
            cout << data.back() << " " ; // print data from back side .....
            data.pop_back(); // remove data from back side...
            i++;
        }
        else 
        {
            cout << data.front() << " "; // print data from front side ......
            data.pop_front(); // remove data from front side...
        }
    }


    return 0;
}