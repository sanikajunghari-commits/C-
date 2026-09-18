#include <iostream>

using namespace std;

int main()
{
   int roll_number;
   float percentage, p,c,cs, tot = 0;
   string name;
   cout<<" Roll number "<<endl;
   cin>> roll_number;
   cout<<"Name of student " <<endl;
   cin>> name;
   cout<<"Marks in physics "<<endl;
   cin>> p;
   cout<<"Marks in chemistry "<<endl;
   cin>> c;
   cout<<"Marks in Computer "<<endl;
   cin>> cs;
   tot = p + c + cs;
   percentage = (tot/3);
   cout<<"Total Marks = "<<tot<<endl;
   cout<< "Percentage = "<<percentage<<"%"<<endl;
   if(percentage>= 80)
        cout<<" Division = First"<<endl;
   else
    if(percentage >= 60)
        cout<<" Division = Second"<<endl;
       else
          cout<<" Division = Third"<<endl;


    return 0;
}
