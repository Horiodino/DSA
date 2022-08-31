#include <iostream>
#include <string.h>
using namespace std;
class Node
{
public:
    char data;
    struct Node *next;
}
    *top = NULL; // declared globally

class stack
{
public:
    /* stack() { top = NULL; } if you declared top outside class globally so dont use it
       its no use after all */
    void push(char x);
    int pop();
    void Display();
    int isBalanced(const char *exp);
    int precedence(char x);
    int is_operand(char x);
    char *intTO_post(const char *infix);
};
void stack::push(char x)
{
    Node *t;
    t = new Node;
    if (t == NULL)
    { /*se here t==NULL means im checking if t==NULL it means heap is full
because as we know linked list can be increase and we always use it in heap
its not top see its t which is in heap */
        cout << "stack is full";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int stack::pop()
{
    int x = -1;
    Node *t;
    t = new Node;
    if (top == NULL)
    {
        cout << "stack is empty";
    }
    else
    {
        t = top;
        x = t->data;
        top = top->next;
        delete[] t;
    }
}
void stack::Display()
{
    Node *p;
    p = top;
    while (p != NULL)
    {
        cout << p->data << "\n";
        p = p->next;
    }
}
int stack::isBalanced(const char *exp)
{
    int i = 0;
    for (i = 0; i != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            pop();
        }
    }
    if (top == NULL)
    {

        return true;
    }
    else
    {
        return false;
    }
}
int stack::precedence(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' | x == '/')
    {
        return 2;
    }
    return 0;
}
int stack::is_operand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 0;
    }
    return 1;
}

char *stack::intTO_post(const char *infix)
{
    int len = strlen(infix);
    char *postfix = new char[len];

    int i = 0;
    int j = 0;
    while (infix[i] !='\0')
    {
        if (is_operand(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }

        else
        {
            if (precedence(infix[i]) > precedence(top->data))
            {
                push(infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop();
            }
        }
    }
    while (top != NULL)
    {
        postfix[j] = pop();
        j++;
    }
    j++;
    postfix[j] = '\0';
    return postfix;
    delete[]postfix;
}

int main()
{
    stack N;
    // const char *exp;
    // exp="((a+b)*(b*c))";
    N.push('#');
    const char *infix;
    infix = "a+b*c";
    cout<<N.intTO_post(infix);

    // N.Display();
}
