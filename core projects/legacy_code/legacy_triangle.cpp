#include <iostream>
using namespace std;

int main() 
{
    int i;  // for every n iteration
    int s1, s2;  // creates how many spaces after and before dots 
    int c;  // the main content
    int length;  // store val for length of triangle
    
    string dots = "*"; // dots character to fill the triangle
    string space = " "; // space character for spacing between dots
    
    cout << "Enter triangle length: ";
    cin >> length;
    
    for (i = 0; i <= length; i++)
    {
        for (s1 = length; s1 > i; s1--)
        {
            cout << space;
        }
        
        cout << space;
        
        for (c = 0; c < i; c++)
        {
            cout << dots;
            cout << space;
        }
        
        cout << space;
        
        for (s2 = length; s2 > i; s2--)
        {
            cout << space;
        }
        
        cout << endl;
    }

    return 0;
}
