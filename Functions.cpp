#include<iostream>
using namespace std;

void myFunction();
int main()
{
    myFunction();
    return 0;
}

void myFunction(){
    cout << "I AM A MINI ME";
}

#include<iostream>
using namespace std;
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

#include<iostream>
using namespace std;
void theFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  theFunction("Sweden");
  theFunction("India");
  theFunction();
  theFunction("USA");
  return 0;
}


#include<iostream>
using namespace std;
void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

#include<iostream>
using namespace std;
int myFunction(int x) {
  return 5 + x;
}

int main() {
  cout << myFunction(3);
  return 0;
}

#include<iostream>
using namespace std;

int myFunction(int x, int y)
{
  return x + y;
}

int main()
{
  cout << myFunction(6,2);
  return 0;
}

#include<iostream>
using namespace std;

int theFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = theFunction(5, 3);
  cout << z;
  return 0;
}

//PASS BY REFERENCE
#include<iostream>
using namespace std;

void swapNums(int &x, int &y)

{
  int z = x;
  x = y;
  y = z;
}

int main()
{
  int firstNum = 10;
  int secondNum = 20;
  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";
  swapNums(firstNum, secondNum);
  cout << "After swap:" << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}

//PASS ARRAYS
#include<iostream>
using namespace std;
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}


#include<iostream>
using namespace std;
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}

//RECURSION
#include<iostream>
using namespace std;
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}
