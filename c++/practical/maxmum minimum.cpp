#include <iostream>

using namespace std;

#define SIZE 50 

int main()

{
    int array[10];
    int i, max, min, add;
    
    cout<<"\n Enter "<<"10" <<" elements in the array: ";
    for(i=0; i<10; i++)
        cin>>array[i];
        
        add = array[0];
        for(i=0; i<9; i++)
        {
        	add += array[i];
		}
    
	
	    
    max = array[0];
    min = array[0];
    
    for(i=1; i<10; i++)
    {
            if(array[i] > max)
            max = array[i];
             if(array[i] < min)
            min = array[i];           
    }
    
    cout<<"\nMaximum no =" << max << "\n";
    cout<<"Minimum no =" << min<<endl;
    cout<<"add of all no. is "<<add;
    return 0;

}

