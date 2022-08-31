#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct stack
{
    int size;
    int top;
    int *S;
};
void Create(struct stack *st)
{
    // cin>>st->size;
    st->size = 5;
    st->top = -1;
    st->S = (int *)malloc(st->size * sizeof(int));
}
void Display(struct stack *st)
{
    int i;
    for (i = st->top; i >= 0; i--)
    {
        cout << st->S[i] << "\n";
    }
}
void Push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack overflow";
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop(struct stack *st)
{
    cout << endl;
    int x = -1;
    if (st->top == -1)
    {
        cout << ("Stack Underflow");
    }
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}
int Peek(struct stack *st, int index)
{
    int x = -1;
    if (st->top - index + 1 < 0)
    {
        cout << "Invalid index";
        return -1;
    }
    else
    {
        x = st->S[st->top - index + 1];
    }
    return x;
}
int IsEmpty(struct stack *st)
{
    if (st->top == -1)
    {
        return true;
    }
    return false;
}
int IsFull(struct stack *st)
{
    if (st->top == st->size - 1)
    {
        return true;
    }
    return false;
}
int stack_Top(struct stack *st)
{
    if (!IsEmpty(st))
        return st->S[st->top];
}

int main()
{
    struct stack st;
    Create(&st);

    Display(&st);
}