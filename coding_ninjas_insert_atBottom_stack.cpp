// https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166
#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    // Write your code here.
    stack<int> newStack;
    while (!myStack.empty())
    {
        newStack.push(myStack.top());
        myStack.pop();
    }
    newStack.push(x);
    while (!newStack.empty())
    {
        myStack.push(newStack.top());
        newStack.pop();
    }
    return myStack;
}
