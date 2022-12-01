#include <bits/stdc++.h>
using namespace std;

/*int f(int* k)
{
    int j = *k;
    return j+6;
}

int main()
{
   int a = 10;
   int * ptr;
   ptr = &a;
  //float b =9.5;

cout<<&ptr<<" "<<ptr<<" "<<*ptr<<endl;
    return 0;
}*/
struct Node
{
    int data;
    Node *next;
};
int main()
{
    int x{ 5 };

    int* ptr;        // an uninitialized pointer (holds a garbage address)
    int* ptr2 = NULL;     // a null pointer (we'll discuss these in the next lesson)
    int* ptr3{ &x }; // a pointer initialized with the address of variable x

    cout<<ptr<<" "<<next<<" "<<ptr2<<" "<<ptr3<<endl;
    return 0;
}