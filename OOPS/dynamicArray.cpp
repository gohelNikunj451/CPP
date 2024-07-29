#include <iostream>
using namespace std;

class Vector
{
public:
    int capacity;
    int size;
    int *arr;

    Vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int ele)
    {
        if (size == capacity)
        {
            capacity *= 2;                 // double capacity
            int *arr2 = new int[capacity]; // create pointer array2 the size of capacity
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i]; // copy arr to arr2;
            }
            arr = arr2; // arr point to arr2
        }
        arr[size++] = ele; // for add value in array
    }
    void remove()
    {
        size--;
    }
    void getIdx(int idx)
    {
        if (idx == 0)
        {
            cout << endl
                 << "Array is Empty";
        }
        else if (idx >= size or idx < 0)
        {
            cout << endl
                 << "Invalid Index";
        }
    }

    void print()
    {
        // for print Value as we add

        cout << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Vector v;

    v.add(3);
    v.print();
    v.add(5);
    v.print();
    v.add(10);
    v.print();
    v.remove();
    v.print();
    v.getIdx(5);
}