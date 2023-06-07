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

//ARRAYS AND LOOPS
#include<iostream>
using namespace std;
int main()
{
   string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
for (int i = 0; i < 5; i++) {
  cout << cars[i] << "\n";
}
}
