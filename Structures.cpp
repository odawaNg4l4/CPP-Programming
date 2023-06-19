#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    struct{
      float myNum;
      string myString;
    }myStructure;

    myStructure.myNum = 3.142;
    myStructure.myString = "Prince Charles";

cout<< myStructure.myNum <<"\n";
cout<< myStructure.myString <<"\n";
}

#include<iostream>
using namespace std;
int main()
{
  struct{
    string brand;
    string model;
    int year;
  }myCar1, myCar2;

  myCar1.brand = "MERCEDES";
  myCar1.model = "GLS";
  myCar1.year = 2024;

  myCar2.brand = "Mitsubishi";
  myCar2.model = "Shogun";
  myCar2.year = 2023;

  cout << myCar1.brand << "" << myCar1.model << ""<< myCar1.year << "\n";
  cout << myCar2.brand << "" << myCar2.model << ""<< myCar2.year << "\n"; 
}