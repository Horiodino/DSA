#include <iostream>
using namespace std;

template <class T>
class Rectangle
{
    private:
    T length;
    T breath;

    public:
    Rectangle(T length,T breath)
    {
        this->length=length;
        this->breath=breath;
    }
    T area();
    T perimeter();
};

template <class T>
T Rectangle<T>:: area()
{
    return length*breath;
}

template <class T>
T Rectangle<T>:: perimeter()
{
    return2(length+breath);
}

int main()
{
    Rectangle <float> R(5.22,5.22);
    R.area();
    R.breath();
}