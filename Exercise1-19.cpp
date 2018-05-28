#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Please enter two numbers." << endl;

    cin >> a >> b;

    cout << "The numbers you have entered are " << a << " and " << b << ".\n" << endl;

    if (a<b){ 
        cout <<"Number " <<a << " is smaller than number " <<b << endl;
        while (a<=b){
            cout << a <<endl; ++a;
        }
        }
        else { cout << "Number " <<a<<" is bigger than number " <<b<<endl;
        while (a>=b){
            cout << b <<endl; ++b;
        }
        }

    return 0;
}
