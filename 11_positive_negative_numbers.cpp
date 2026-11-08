#include <iostream>
using namespace std;
int main() 
{
    int numbers[10];
    cout<< "enter 10 number:"<< '\n';
    for (int i= 0; i< 10; i++) 
    {
        cout<< "number "<< i+ 1<< ": ";
        cin>> numbers[i];
    }

    cout<< "\nposetive numbers are: ";
    for (int i= 0; i< 10; i++) 
    {
        if (numbers[i]>= 0)
            cout<< numbers[i]<< ", ";
    }

    cout<< "\nnegative numbers are: ";
    for (int i= 0; i< 10; i++) 
    {
        if (numbers[i]< 0)
            cout<< numbers[i]<< ", ";
    }
    cout<< '\n';
    
    return 0;
}
