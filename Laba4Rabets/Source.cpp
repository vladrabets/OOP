#include <iostream>

using namespace std;

template <typename type>
class Stack
{
private:
    type* stack;
    int size;
    int capasity;

public:
    Stack(int capasity);
    ~Stack();

    void Add(type element);
    type Delete();
    bool Emptiness();
    type TopElem();
    void Print();
    void Clear();
};

template <typename type>
Stack<type> ::Stack(int capasity) :capasity(capasity)
{
    stack = new type[capasity];
    size = 0;
}

template <typename type>
Stack<type> :: ~Stack()
{
    delete[] stack;
}

template<typename type>
bool Stack<type> ::Emptiness()
{
    return size == 0;
}

template<typename type>
void Stack<type> ::Add(type element)
{
    if (size == capasity)
    {
        capasity *= 2;
        type* newStack = new type[capasity];
        for (int i = 0; i < size; i++)
        {
            newStack[i] = stack[i];
        }
        delete[] stack;
        stack = newStack;
    }

    stack[size++] = element;
}

template<typename type>
type Stack<type> ::Delete()
{
    if (Emptiness())
    {
        throw out_of_range("Stack is empty.");
    }

    type delElem = stack[--size];
    return delElem;
}

template<typename type>
void Stack<type> ::Print()
{

    if (Emptiness())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    for (int i = size - 1; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
}

template <typename type>
type Stack<type> ::TopElem()
{
    if (Emptiness())
    {
        throw out_of_range("Stack is empty.");
    }
    return stack[size - 1];
}

template <typename type>
void Stack<type> ::Clear()
{
    delete[] stack;
    size = 0;
    capasity = 5;
    stack = new type[capasity];
}

int main()
{
    const int N = 5;
    Stack<int> Stack(N);

    int l;
    while (true)
    {
        cout << "\nChoose operation:\n";
        cout << "1. Add\n" << "2. Delete top element\n" << "3. Print\n"
             << "4. Check for emptiness\n" << "5. Clear stack\n"
             << "6. Print top element\n" << "7. Exit\n\n";

        cin >> l;

        switch (l){

        case 1:

            int a;
            cout << "Enter element to add: ";
            cin >> a;
            cout << endl;

            try
            {
                Stack.Add(a);
                cout << "Element " << a << " was added\n";
            }

            catch (const exception& e)
            {
                cout << e.what() << '\n';
            }

            break;

        case 2:

            try
            {
                int delElem = Stack.Delete();
                cout << "Deleted element: " << delElem << endl;
            }

            catch (const exception& e)
            {
                cout << e.what() << '\n';
            }

            break;

        case 3:

            try
            {
                cout << "Your stack:\n";
                Stack.Print();
            }
            catch (const exception& e)
            {
                cout << e.what() << '\n';
            }

            break;

        case 4:

            if (Stack.Emptiness())
                cout << "Stack is empty.\n";
            else 
                cout << "Stack is not empty.\n";

            break;

        case 5:

            try
            {
                Stack.Clear();
                cout << "Cleared\n";
            }
            catch (const exception& e)
            {
                cout << e.what() << '\n';
            }

            break;

        case 6:

            try {
                cout << "Stack top element: " << Stack.TopElem() << endl;
            }
            catch (const exception& e)
            {
                cout << e.what() << '\n';
            }

            break;

        case 7:

            exit(0);
            break;

        default:

            cout << "Input error!\n" << endl;
            break;
        }
    }

    return 0;
}