#include<iostream>
using namespace std;

class MyClass
{
    public:
        int myNum;
        string myString;
};

    int main(){
    MyClass myObj;
    myObj.myNum = 22;
    myObj.myString = "My name";

    cout << myObj.myNum << "\n";
    cout << myObj.myString;

    return 0;
}



