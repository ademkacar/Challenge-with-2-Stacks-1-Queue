﻿
#include <iostream>
#include <stack>
using namespace std;

void print(stack <int> a) {
    
    while (!a.empty()) {
        cout << a.top() << " ";
        a.pop();
    }
    cout << endl;
}


int main()
{
    stack <int> s1;
    stack <int> s2;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    print(s1);

    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }


    print(s2);


    return 0;
}