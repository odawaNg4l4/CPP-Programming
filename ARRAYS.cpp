#include <iostream>

using namespace std;

int main()
{
    string dogs[5] = {"bulldog", "retriever","husky","poodle", "chihuahua"};
    cout << dogs[0];
    return 0;
}

//CHANGING ARRAY ELEMENTS
#include<iostream>
using namespace std;
int main()
{
    string dogs[5] = {"bulldog", "retriever","husky","poodle", "chihuahua"};
    dogs[0] = "Boerboel";
    cout << dogs[0];
}

#include<iostream>
using namespace std;
int main()
{
    string dogs[5] = {"bulldog", "retriever","husky","poodle", "chihuahua"};
    for(int i = 0; i < 5; i++)
    {
        cout << dogs[i] <<"\n";
    }
}

#include<iostream>
using namespace std;
int main()
{
    string dogs[5] = {"bulldog", "retriever","husky","poodle", "chihuahua"};
    for(int i = 0; i < 5; i++)
    {
        cout<<i<<"="<<dogs[i]<<"\n";
    }
}
