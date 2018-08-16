//defining your own function
#include<iostream>
using namespace std;

void simon(int);                    //function prototype for simon()

int main()
{
    simon(3);                       //call the simon() function
    cout << "pick an integer: " ;
    int count;
    cin >> count;
    simon(count);                   //call the function again
    cout << "Done!" << endl;
    
    system("pause");
    return 0;
}

void simon(int n)                   //define the simon() function
{
    cout << "I win " << n << "times" << endl;
}