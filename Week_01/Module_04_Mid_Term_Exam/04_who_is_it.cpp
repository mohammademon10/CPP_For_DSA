#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    char s[100];
    char c;
    int marks;
};
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        student s1[n];

        int a,p;

        for(int j=0;j<3;j++)
        {
        
            cin>>s1[j].id>>s1[j].s>>s1[j].c>>s1[j].marks;

            if(j==0)
            {
               a=s1[j].marks;
            }   
            if(s1[j].marks > a)
            {
                a=s1[j].marks;
                p=j;
            }
        }

        cout<<s1[p].id<<" "<<s1[p].s<<" "<<s1[p].c<<" "<<s1[p].marks<<endl;
        a=0;p=0;
    }
    return 0;
}