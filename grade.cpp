#include<iostream>
using namespace std;
main()
{
int marks;
  cout<<"ENTER UR MARKS\n";
  cin>>marks;

  if(marks>=90 && marks<=100)
   cout<<"your grade is A \n";
    if(marks>=80 && marks<90)
   cout<<"your grade is B \n";
    if(marks>=70 && marks<80)
   cout<<"your grade is C \n";
    if(marks>=60 && marks<70)
   cout<<"your grade is D \n";
    if(marks>=50 && marks<60)
   cout<<"your grade is E \n";
    if(marks>=45 && marks<50)
   cout<<"your grade is F \n";
    if(marks>=40 && marks<45)
   cout<<"your grade is G \n";
    if(marks<40)
    cout<<"FAIL";
    if(marks>100)
    cout<<"KU APSARA PENCIL SE KIA THA ";

}
