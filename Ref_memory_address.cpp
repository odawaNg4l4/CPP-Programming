#include<iostream>
using namespace std;
int main()
{
    string food = "ugali";
    string &meal = food;
    cout << food << "\n";
    cout << meal << "\n";
}