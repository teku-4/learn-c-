#include <iostream>
#include <limits>
using namespace std;

// ------------------------------------------------------------------------------------------
//stracture in c++
// stractur of stracture
struct address
{
    int kebele;
    char city[10];
    char woreda[10];
};

struct student
{
    char name[100];
    float mark;
    int studId;
    address studaddress;
} student1, student2;
// -----------------------array of stracture
struct Employee
{
    char name[20];
    int empId;
    float salary;
    char role[10];
}Emp[4];

int main()
{
   cout<<"enter name: "<<endl;
    cin>>student1.name;
    cout<<"enter your mark: "<<endl;
    cin>>student1.mark;
    cout<<"enter your id: "<<endl;
    cin>>student1.studId;
 // ------------------------------------------------------------------------------------------
 cout<<"enter name: "<<endl;
    cin>>student2.name;
    cout<<"enter your mark: "<<endl;
    cin>>student2.mark;
    cout<<"enter your id: "<<endl;
    cin>>student2.studId;
//output--------------------------------------------------------------------------------------
cout<<"--------------student information---------------------------------------\n";
cout<<"Students:\tname\t\tmark\tstudent ID:"<<endl;
cout<<"student1\t"<<student1.name<<"\t\t"<<student1.mark<<"\t"<<student1.studId<<endl;
cout<<"student2\t"<<student2.name<<"\t\t"<<student2.mark<<"\t"<<student2.studId<<endl;

// -------------------------implementing the stud aress stractuer that is stractuer of stracture
cout<<"Enter kebele: ";
cin>>student1.studaddress.kebele;
cout<<endl;
cout<<"Enter city: ";
cin>>student1.studaddress.city;
cout<<endl;
cout<<"Enter woreda: ";
cin>>student1.studaddress.woreda;
cout<<endl;
cout<<"Enter kebele: ";
cin>>student2.studaddress.kebele;
cout<<endl;
cout<<"Enter city: ";
cin>>student2.studaddress.city;
cout<<endl;
cout<<"Enter woreda: ";
cin>>student2.studaddress.woreda;
cout<<endl;
// ----------------------------------out put of stracture of stracture
cout<<"kebele:\tcity\tworeda"<<endl;
cout<<student1.studaddress.kebele<<"\t"<<student1.studaddress.city<<"\t"<<student1.studaddress.woreda<<endl;

cout<<student2.studaddress.kebele<<"\t"<<student2.studaddress.city<<"\t"<<student2.studaddress.woreda<<endl;

// ------------------------------------------------------------------------------------------

cout<<"Enter the Employee Information: "<<endl;
for(int i=0;i<=3;i++)
{
    // to clear for name accepting again
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cout<<"Enter name: ";
   cin.getline(Emp[i].name,20);
   cout<<"Enter employee ID: ";
   cin>>Emp[i].empId;
   cout<<"Enter salary: ";
   cin>>Emp[i].salary;
   cout<<"Enter role: ";
   cin.getline(Emp[i].role,10);
   cout<<endl;
}
// -----------------------------displaying the employee full Information
cout<<"============Employee Information============\n\n";
cout<<"Name:\tEmp ID:\tSalary\tRole"<<endl;
for(int j=0; j<=3;j++)
{
    cout<<Emp[j].name<<"\t"<<Emp[j].empId<<"\t"<<Emp[j].salary<<"\t"<<Emp[j].role<<endl;
}

return 0;    
}
