#include <iostream>

using namespace std;

int main()
{
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
}
}

#include<iostream>
using namespace std;
int main()
{
    int i=0;
    while(i < 10)
    {
        cout << i << "\n";
        i++;
        if (i == 9){
            break;
        }
    }
}
