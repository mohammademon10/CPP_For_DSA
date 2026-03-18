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
     

};

bool cmp(student a, student b)
{

   //a.eng_marks != b.eng_marks
   if (a.eng_marks > b.eng_marks)
     {
         return true;
     }
     else if (a.eng_marks < b.eng_marks)
     {
        return false;
     }

   // (a.eng_marks==b.eng_marks
   if (a.math_marks > b.math_marks)
       {
         return true;
       }
       else if (a.math_marks < b.math_marks)
       {
         return false;
       }

     

      else //if(a.math_marks==b.math_marks)
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
    
    
//use swap function
    
 /*
 for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].eng<a[j].eng)// descending order
            {
                swap(a[i],a[j]);
            }
            if(a[i].eng==a[j].eng)
            {
                if(a[i].math<a[j].math) //descending order
                {
                    swap(a[i],a[j]);
                }
                if(a[i].math==a[j].math)
                {
                    if(a[i].id>a[j].id)//ascending order 
                    {
                        swap(a[i],a[j]);
                    }
                }
            }
        }
    }*/
    
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
    }


    sort(a, a+n, cmp);

    for(int i=0;i<n;i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
   
    
    return 0;
}