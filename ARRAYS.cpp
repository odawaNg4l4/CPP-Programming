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

//ARRAY SIZE
#include<iostream>
using namespace std;

int main()
{
    string mydogs[5] = {"bulldog", "retriever","husky","poodle", "chihuahua"};
    cout<< sizeof(mydogs);
}

//SIZE OF ARRAY
#include<iostream>
using namespace std;

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength;
}
