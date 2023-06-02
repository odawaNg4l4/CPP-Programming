#include<iostream>
using namespace std;

int main()
{
    int i =3;
    while(i < 6)
    {
        cout<< i << endl;
        i++;
    }
}

#include<iostream>
using namespace std;

int main(){
int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);
}

#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 8; i++) {
    cout << i << "\n";
    }
}

#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i = i + 2) {
    cout << i << "\n";
    }
}

#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i<= 2; ++i){
        cout << "Odawa" << i << "\n";
    }

    for (int j = 1; j<= 3; ++j){
        cout << "Ngala" << j << "\n";
    }
}

#include<iostream>
using namespace std;

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
    cout << i << "\n";
    }
}


