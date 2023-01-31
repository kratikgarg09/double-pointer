#include <iostream>
using namespace std;

void update(int ***ptr3)
{

    // ptr3++;
    //  main function main isse kuch change nhi hoga

    // (*ptr3)++;
    // in Main funtion, the value of ptr is increment by size of its data type

    // (**ptr3)++;
    // it changes the adress of x and increment the value of ptr because both are same;
    // it through the garbage value of x

    // (***ptr3)++;
    // no changes held in main function
    // increments in the value of x by 1; 
}

int main()
{
    int x = 5;
    int *ptr = &x;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;

    // cout<< "Adress of x is : "<< &x<<endl;
    // cout<< "Adress of x is : "<< ptr<<endl;
    // cout<< "Adress of x is : "<< *ptr2<<endl;
    // cout<< "Adress of x is : "<< **ptr3<<endl;

    // cout<< "Value of x is : "<< x<<endl;
    // cout<< "Value of x is : "<< *ptr<<endl;
    // cout<< "Value of x is : "<< **ptr2<<endl;
    // cout<< "Value of x is : "<< ***ptr3<<endl;

    // cout << endl;
    // cout << "Befor Update The Adress of x is : " << ptr << endl;
    // cout << "Befor Update The Adress of ptr is : " << ptr2 << endl;
    // cout << "Befor Update The Adress of ptr2 is : " << ptr3 << endl;
    // cout << "Befor Update The Adress of ptr3 is : " << &ptr3 << endl;
    // cout << endl;
    // update(ptr3);
    // cout << "After Update The Adress of x is : " << ptr << endl;
    // cout << "After Update The Adress of ptr is : " << ptr2 << endl;
    // cout << "After Update The Adress of ptr2 is : " << ptr3 << endl;
    // cout << "After Update The Adress of ptr3 is : " << &ptr3 << endl;
    // cout << endl;

    cout << endl;
    cout << "Befor Update The Value of x is : " << *ptr << endl;
    cout << "Befor Update The Value of ptr is : " << **ptr2 << endl;
    cout << "Befor Update The Value of ptr2 is : " << ***ptr3 << endl;
    cout << "Befor Update The Value of ptr3 is : " << ptr3 << endl;
    cout << endl;
    update(ptr3);
    cout << "After Update The Value of x is : " << *ptr << endl;
    cout << "After Update The Value of ptr is : " << **ptr2 << endl;
    cout << "After Update The Value of ptr2 is : " << ***ptr3 << endl;
    cout << "After Update The Value of ptr3 is : " << ptr3 << endl;
    cout << endl;
    return 0;
}