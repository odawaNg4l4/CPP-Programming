#include<iostream>
using namespace std;
int main()
{
    string food = "ugali";
    string *ptr = &food;
    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";
}