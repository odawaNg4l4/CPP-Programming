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

//Loop through an array
#include<iostream>
using namespace std;

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++){
        cout << myNumbers[i] << "\n";
    }
}

#include<iostream>
using  namespace std;
int main()
{
    int myNumbers[5] = {10,20,30,40,50};
    for (int i : myNumbers){
        cout<<i<<"\n";
    }
}

//MULTI-DIMENSIONAL ARRAYS
#include<iostream>
using namespace std;
int main()
{
    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
    };
    cout << letters[0][2];
}

#include<iostream>
using namespace std;
int main()
{
    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
letters[0][0] = "Z";

cout << letters[0][0];
}

#include<iostream>
using namespace std;
int main()
{
    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

cout << letters[0][0];
}

