#include <iostream>
using std::cout, std::cin;

/* PASCAL EQUATION
    new_val = (current_val * numerator) / denominator

    when: numerator = row - cln
          denominator = cln + 1
          set -> current_val = new_val for after compute pascal equation
          
          
    DEV NOTE
    After pascal length row > 4, Then add 2 spacing
*/

int i; // count for n iteration
int s1; // count for n space string before and after c
int c; // c is main content, the numbers
int length; // count for the length of the triangle input by users

int row = 0;  // check for row pos for every n iteration
int cln;  // check for collumn pos for every n iteration
int current_value, new_value;  // check current value for pascal to work
int numerator, denominator; // part of computing pascal equation

char space = ' ';  // space character

void error_message();

int grouping(int length){
    if (length % 4 == 0){
        cout << space; 
        return 0;
    }
    else{
        return 0;
    }
}

int main() 
{
    cout << "Enter pascal row: ";
    cin >> length;
    
    for (i = 0; i <= length; i++)
    {
        current_value = 1;
        cln = 0;
        
        grouping(i);
        
        for (s1 = length; s1 > i; s1--)
        {
            if (s1 % 4 == 0 && s1 > 0){
                cout << space << space;  
            }
            
            else{
                cout << space;
            }
        }
 
        if (s1 == 0){
            cout << 1;
        }
        else{
            cout << space << 1 << space;   
        }
        
        for (c = 0; c < i; c++)
        {
            numerator = row - cln;
            denominator = cln + 1;
            new_value = (current_value * numerator) / denominator;
            
            cout << new_value << space;
            cln++;
            current_value = new_value;
        }
        
        cout << "\n";
        row++;
    }
    
    if (length > 9){
        error_message();
    }
    
    return 0;
}

void error_message(){
    cout << "\n\n\n" << "ERROR_MESSAGE: \n" << "WHEN LENGTH > 9 THE TRIANGLE BREAKS....";
    cout << "\nthere is not yet found efficient solution to solve this,\nPerhaps in the next timeline?";
}
