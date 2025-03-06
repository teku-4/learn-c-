// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
// function proto type
const float Pis=3.14;
void display();
int adds(int num1, int num2);
int mul(int num1,int num2);
// function to check pass by value and refence
// ----------------------------------------------------
float circleArea(float raduis);
// pass by refece indicated by ampersand
float calculateRectangleArea(float &width,float &height);
int main() {
    float width=10,length=20,raduis=23.4;
    cout<<"before passing:"<<width<<" "<<length<<" "<<raduis<<endl;
   float carea= circleArea(raduis);
   float rarea= calculateRectangleArea(width,length);
   cout<<"circle area: "<<"rectangle area:"<<" "<<rarea<<endl;
   cout<<"after passing:"<<width<<" "<<length<<" "<<raduis<<endl;

while(1){
    int choice;
    display();
    cout<<"enter your choise"<<endl;
    cin>>choice;
    if(choice==-1){
        break;
    }
 switch(choice){
    case 1:
        int num1,num2;
        cout<<"enter the twoo numbers to add"<<endl;
        cin>>num1>>num2;
        cout<<num1<<" + "<<num2<<" = "<<adds(num1,num2)<<endl;
        break;
    case 2:
        int num3,num4;
        cout<<"enter the twoo numbers to to multply"<<endl;
        cin>>num3>>num4;
        cout<<num3<<" * "<<num4<<" = "<<adds(num3,num4)<<endl;
        break;
        default:
        cout<<"wrong input"<<endl;
        
        
    }
}

return 0;
}
void display(){
    cout<<"press 1 to add"<<endl;
    cout<<"press 2 to multyply"<<endl;
    cout<<"press -1 to exit "<<endl;
}
int adds(int num1,int num2){
    return num1+num2;
}
int mul(int num1, int num2){
    return num1+num2;
}
float circleArea(float raduis){
    float area=(raduis*raduis)*Pis;
    return area;
}
// pass by refece indicated by ampersand
float calculateRectangleArea(float &width,float &height)
{
    float area=width*height;
    width=123.45;
    height+=100;
    return area;
}