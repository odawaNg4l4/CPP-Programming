#include<iostream>
using namespace std;
int main()
{
    string food = "ugali";
    string* ptr = &food;
    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";
}

#include<iostream>
using namespace std;
int main()
{
    string food = "Ugali";
    string* ptr = &food;
    cout << ptr << "\n";
    cout << *ptr << "\n";
}

#include<iostream>
using namespace std;
int main()
{
    string food ="Ugali";
    string *ptr = &food;
    cout << food << "\n";
    cout << &food << "\n";
    cout << *ptr << "\n";
    *ptr = "Hamburger";
    cout << *ptr << "\n";
    cout << food << "\n";
}