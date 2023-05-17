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
