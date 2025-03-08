#include <iostream>
using namespace std;
int binarySearch();
int main()
{
/*********************************************************
 searching algorithms.
  1 start
  2 set lists of number and the tageeted value.
  
  3 initializes a variable found=0,bottom=0,top length-1.
  4 loop throught  lists.
  4.1 calculate the midle
  4.2 compares the current value with thw taget based on the midle value.
  4.3 if the current value matches te taget at the midle set found= 1.
  4.4 if the current value not matches the target value at the midle set check if the target is greater than the midle value set the top=midle-1
   else set bottom =midle + 1 
   5 reapate the step untill the taget value found.
   6. if the target value found set the position at midle vale else return -1
   6 end.
   *************************************************************************/
//   ------------------------------------------------------------------------------
// implementation.
int index=binarySearch();
if (index!=-1)
{
cout<<"the value is found at:"<<index<<" index value"<<endl;
}
else
{
    cout<<"since the index is "<<index<<"the tageted value is not found."<<endl;
}
  return 0;
}
int binarySearch()
{
int lists[]={10,20,30,40,50,60,70,80,90,100};
int targetValue=60;
int len=sizeof(lists)/sizeof(lists[0]);
int found=0;
int bottom=0;
int top=len-1;
int midle=0;
do
{
    midle=(top+bottom)/2;
    if(targetValue==lists[midle])
    {
        found=1;
    }
    else
    {
        if(targetValue<lists[midle])
        {
            top=midle-1;
            
        }
        else{
            bottom=midle+1;
        }
    }
    
}
    while(found==0 && top>=bottom);
    
    // seting the position
    if(found==1)
    {
        return midle;
    }
    else
    {
        return -1;
    }
}
