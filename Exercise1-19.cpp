#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Please enter two numbers.\n" << endl;

    cin >> a >> b;

    cout << "The numbers you have entered are " << a << " and " << b << ".\n" << endl;

    if (a<b){ 
        cout <<"The numbers between " << a << " and " << b << " are: \n" << endl;
        while (a<=b){
            cout << a <<endl; ++a;
        }
        }
        else { 
            cout << "The numbers between " << b <<" and " << a << " are: \n" <<endl;
        while (a>=b){
            cout << b <<endl; ++b;
        }
        }

    return 0;
}
