#include <bits/stdc++.h>

using namespace std;

class Student //create class

{

public:

 int roll;

 int cls;

 double gpa;

 Student(int roll, int cls, double gpa) // constructor declear 

 {

 this->roll = roll; 

 this->cls = cls;

 this->gpa = gpa;

 }

};

Student fun() 
// ফাংশন ডিক্লেয়ার করা হয়েছে যা Student ক্লাসের অবজেক্ট রিটার্ন করবে।
// তাই এই ফাংশনের রিটার্ন টাইপ Student

{

 Student rahim(342, 5, 4.99); // কন্সট্রাক্টর কল করে অবজেক্ট ডিক্লেয়ার করা হয়েছে। 

 return rahim; // নরমাল int ভেরিয়েবল এর মতো অবজেক্ট রিটার্ন করা হয়েছে। 

}

int main()

{

 Student ans = fun(); // ফাংশন কল করা হয়েছে এবং ফাংশন থেকে রিটার্ন আসা অবজেক্টটি স্টোর
 // রাখার জন্য আরেকটি Student ক্লাসের অবজেক্ট নেওয়া হয়েছে। ফাংশন রিটার্ন হওয়ার পর ফাংশনে থাকা
 // অবজেক্ট ডিলিট হয়ে যাবে যেহেতু এটি ডায়নামিক অবজেক্ট নয়। 

 cout << ans.roll << " " << ans.cls << " " << ans.gpa << endl; // অবজেক্ট এর ভেলু প্রিন্ট করা হয়েছে। 

 return 0;

}
