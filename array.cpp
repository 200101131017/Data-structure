#include<iostream>
using namespace std; 
main( ) 
{  
    int arr[4][4] = {
        { 1, 6, 4, 2 },
        { 2, 1, 5, 9 },
        { 7, 3, 0, 4 },
        { 4, 1, 5, 7 }
        } ;
         
    int i,j;
     
    cout<<"Printing a 2D Array:\n";
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}