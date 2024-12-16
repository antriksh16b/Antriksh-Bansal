#include<iostream>
using namespace std; 
int main() 
{ 
  
    int i, j, k, sp, space = 4; 
    char n = '*';
    for (i = 1; i <= 5; i++) 
    { 
        for (sp=space;sp>=1; sp--)  
        { 
            cout << " "; 
        } 
        for (j=1;j<=i;j++)  
        { 
            cout<<n; 
        }
        for (k=1; k <=(i-1); k++)  
        { 
            if(i==1)  
            { 
                continue; 
            }
            cout <<n; 
        } 
        cout << "\n"; 
        space--; 
    } 
    space = 1;
    for (i = 4; i >= 1; i--)  
    { 
        for (sp = space; sp >= 1; sp--)  
        { 
            cout << " "; 
        } 
  
        for (j = 1; j <= i; j++)  
        { 
            cout<<n; 
        } 
        for (k = 1; k <= (i - 1); k++) 
        { 
            cout <<n; 
        } 
        space++; 
        cout << "\n"; 
    } 
  
    space = 3; 
    return 0; 
} 
