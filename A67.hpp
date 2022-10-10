//

#include <iomanip>
#include <iostream>
using namespace std;

void swap(int &, int &);
void swap(int &, int &, int &);
void swap(int &, int &, int &, int &);

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
void swap(int &num1, int &num2)
{
    int emptyVar = num1;
    num1 = num2;
    num2 = emptyVar;
}

void swap(int &num1, int &num2, int &num3)
{
    int max, remain, min;
    if((num1<num2) && (num1<num3))
    {
        if(num2<num3)
        {
            min = num1;
            remain = num2;
            max = num3; //normal order 123
        }
        else if(num3<num2) //132
        {
            min = num1;
            remain = num3;
            max = num2;
            num2 = num3;
            num3 = max;
        }
    }

    else if((num2<num1) && (num2<num3))
    {
        if(num1<num3) //213
        {
            min = num2;
            remain = num1;
            max = num3;
            num1 = num2;
            num2 = remain;
        }
        else if(num3<num1) //231
        {
            min = num2;
            remain = num3;
            max = num1;
            num1 = num2;
            num2 = num3;
            num3 = max;
        }
    }

    else if((num3<num1) && (num3<num2))
    {
        if(num1<num2) //312
        {
            min = num3;
            remain = num1;
            max = num2;
            num1 = num3;
            num2 = remain;
            num3 = max;
        }
        else if(num2<num1) //321
        {
            min = num3;
            remain = num2;
            max = num1;
            num1 = num3;
            num3 = max;
        }
    }
}

void swap(int &A, int &B, int &C, int &D)
{
    int emptyVar = A;
    A = B;
    B = C;
    C = D;
    D = emptyVar;

}