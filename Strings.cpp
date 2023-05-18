#include <iostream>

using namespace std;

int main()
{
    string text1 = "Hanging";
    string text2 = "By a thread";
    cout << text1 + " " + text2 << endl;
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    string text1 = "Cup of";
    string text2 = "Tea";
    string text3 = text1.append(text2);
    cout << text3;
}

//NUMBERS AND strings
#include<iostream>
using namespace std;
int main()
{
    int x = 7;
    int z = 12;
    cout <<x+z;
    return 0;
}

//STRING LENGTH
#include<iostream>

using namespace std;
int main()
{
    string txt = "I LOVE TO SING";
    cout <<"Length of string is: " <<txt.size();
    return 0;
}

//ACCESS STRINGS
#include<iostream>
using namespace std;
int main()
{
    string myString = "Hello";
    cout<<  myString[3];
    return 0;
}

//CHANGE STRING CHARACTERS
#include<iostream>
using namespace std;
int main()
{
   string myString = "Hello";
    myString[0] = 'J';
    cout << myString;
}
