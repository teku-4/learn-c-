#include <iostream>
using namespace std;
void copy(char *str1, char *str2)
{
    while(*str2)
    {
        *str1++=*str2++;
        *str1='\0';

    }
}
int main()
{
    // // -----------------------------------------------------------------------------------------------------------
    // // pointer
    // int value1=20,value2=40;
    // int *ptr1,*ptr2;
    // ptr1=&value1;
    // ptr2=&value2;
    // cout<<"value of value1:"<<*ptr1<<endl;
    
    // cout<<"adress of value1:"<<ptr1<<endl;
    
    // cout<<"value of value2:"<<*ptr2<<endl;
    
    // cout<<"adress of value2:"<<ptr2<<endl;
    
    // // ater poiting by address how can affect the value by affecting only their adress swap these
    // int temp;
    // temp=*ptr1;
    // *ptr1=*ptr2;
    // *ptr2=temp;
    // cout<<"after swaping value1:"<<value1<<"\nvalue2= "<<value2<<endl;
    
    
    // // constant pointer and constant value.
    // // constant value it is not allowed to change value f  *ptr3
    // int val1=50,val2=80;
    // const int *ptr3;  
    // ptr3=&val1;
    // // *ptr3=60 //this raise an error.
    // ptr3=&val2; //this is allowed.
    // cout<<"value of val1= "<<*ptr3<<endl;
    // cout<<"adress of val1= "<<ptr3<<endl;
    // cout<<" after changing the adress of val1 to val2 = "<<ptr3<<endl;
    
    // // constant adress of pointer it is not allowedto change the adrress.
    // int a=70, b=90;
    // int const *ptr4;
    // ptr4=&a;
    // // ptr4=&b //this is raise an error.
    // // *ptr4=80; //this is not raise error.
    // cout<<"value of a= "<<*ptr4<<endl;
    // cout<<"adress of a= "<<ptr4<<endl;
    // cout<<" after changing the value of a to b = "<<a<<endl;
    
    // -----------------------------------------------------------------------------------------------------------
    // void pointer to aoid  typ error
    // int value1=20;
    // float value2=89.7;
    // void*ptr;
    // ptr=&value2;
    // ptr=&value1;
    // cout<<"value:"<<value1<<" and adress: "<<ptr<<endl;
    
    // ----------------------------------------------------------------------------------------------------------------
    // pointer and array.
    
// int lists[4];
// // array is by it self constant pointerso it is forbidden to assign other address to array.
// int *ptr;
//  ptr=lists;
//  *ptr=10;
//  ptr+=1;
//  *ptr=20;
//  ptr+=1;
//  *ptr=30;
//  ptr++;
//  *ptr=20;
//  ptr++;
//  *ptr=40;
 
//  for(int i:lists)
//  {
//      cout<<i<<"  ";
//  }

//---------------------------------------------------------------------------------------------------- 
    // // pointer and string
    // char str1[10];
    // char str2[10]="Ethiopia";
    // copy(str1,str2);
    // cout<<str1<<endl;
    
//----------------------------------------------------------------------------------------------------------------
    return 0;
    
    
}
