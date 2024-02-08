#include<iostream>
#include<conio.h> 
using namespace std; 
  
int countDigit(long long n) 
{ 
    int count=0; 
    while (n!=0) 
	{ 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 
int main(void) 
{ 
    
    long long n = 12314314131; 
    cout << "Number of digits : "
         << countDigit(n); 
    return 0; 
} 
