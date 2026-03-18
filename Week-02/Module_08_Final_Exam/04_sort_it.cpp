#include<bits/stdc++.h>
using namespace std;
class  student
{
    public:
      string nm;
      int cls;
      char s;
      int id;
      int math_marks;
      int eng_marks;
      int total_marks;

};

bool cmp(student a, student b)
{
    if (a.total_marks > b.total_marks)
     {
         return true;
     }
     else if (a.total_marks < b.total_marks)
     {
        return false;
     }
     else//a.marks == b.marks
     {
          if (a.id < b.id)
          {
              return true;
          }
         else
          {
           return false;
          }

     }

}

int main()
{
   
    int n;
    cin>>n;
    
    student* a= new student[n];

    for(int i=0;i<n;i++)
    {
        getchar();
        cin>>a[i].nm>>a[i].cls;

        getchar();
        cin>>a[i].s>>a[i].id;

        getchar();
        cin>>a[i].math_marks>>a[i].eng_marks;
       
       a[i].total_marks = a[i].math_marks + a[i].eng_marks;

    }


   sort( a, a+n , cmp );

    for(int i=0;i<n;i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
   
    
    return 0;
}