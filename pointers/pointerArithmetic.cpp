#include <iostream>
using namespace std;

int main(){
    //pointer arithmetic

    //1} pointer increment || decrement
    int x=20;
    cout<<sizeof(x)<<endl; //4
    int *ptrx= &x;

   //increment in address
    cout<<ptrx<<endl;          //suppose= 0x61ff08
    ptrx++; //or(ptrx += 1;)   //increment by 1 unit(4bytes[int])
    cout<<ptrx<<endl;          //0x61ff0c

   //decrement in address
   ptrx--; //or(ptrx -= 1;)    //decrement by 1 unit(4bytes[int])
   cout<<ptrx<<endl;           //0x61ff08

// ----------------------------------------------------------------------

    int arr[]={1,3,5};
    //saving adress of oth index in pointer
    int *ptr = &arr[0];

    cout<<ptr<<endl;      //suppose= 0x61ff00
    cout<<*ptr<<endl;     //1 
    ptr++;                //increment in address
    cout<<ptr<<endl;      //0x61ff04
    cout<<*ptr<<endl;     //3 (element on incremented index)
    *ptr++;               //first increment then derefrence
    cout<<*ptr<<endl;     //5 (element on incremented index)
    (*ptr)++;             //first derefrence then increment)
    cout<<*ptr<<endl;     //6
    
// -----------------------------------------------------------------------
         //array as pointer

    int arr[]={4,6,8};

    int size=sizeof(arr)/sizeof(arr[0]);

    //saving adress of oth index in pointer
    int *ptr = &arr[0];

    cout<<ptr<<" "<<arr<<endl;
//suppose= 0x61ff00  0x61ff00
//both contain same address i,e of 0th index

    cout<<*ptr<<" "<<*arr<<endl;
          //4         //4

    cout<<*(arr+0)<<endl;    //4  
    cout<<*(arr+1)<<endl;    //6
    cout<<*(arr+2)<<endl;    //8

    for(int i=0; i<size; i++){
        cout<<*(arr + i)<<endl;
    }

    return 0;
}