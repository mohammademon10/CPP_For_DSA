#include <bits/stdc++.h>

using namespace std;

class Student

{

public:

 int roll;

 int cls;

 double gpa;

 Student(int roll, int cls, double gpa)//it is constructor

 {

 this->roll = roll;

 this->cls = cls;

 this->gpa = gpa;

 }

};

Student *fun() // ফাংশনটি একটি পয়েন্টার রিটার্ন করবে, পয়েন্টার এর টাইপ Student* তাই 
//ফাংশনের রিটার্ন টাইপও Student*

{

 Student* rahim = new Student(342, 5, 4.99); 
 // new কি-ওয়ার্ড ব্যাবহার করে Student টাইপের একটি ডায়নামিক অবজেক্ট ক্রিয়েট করা হয়েছে।
 // ডায়নামিক অবজেক্ট পয়েন্টারে স্টোর রাখার জন্য একটি পয়েন্টার নেওয়া হয়েছে rahim নামের।

 return rahim; // পয়েন্টার রিটার্ন করা হচ্ছে, যা পয়েন্ট করছে একটি ডায়নামিক অবজেক্টকে।
 // তাই ফাংশন থেকে রিটার্ন হওয়ার পরও এই পয়েন্টার দিয়ে ডায়নামিক অবজেক্টকে এক্সেস করা যাবে। 

}

int main()

{

 Student *ans = fun(); // ফাংশন কল করা হয়েছে এবং ফাংশন থেকে রিটার্ন আসা অবজেক্ট এর 
 //পয়েন্টারটি স্টোর রাখার জন্য আরেকটি Student* টাইপের পয়েন্টার নেওয়া হয়েছে।

 cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl; // ডায়নামিক অবজেক্ট প্রিন্ট করা হচ্ছে। 

 delete ans; // প্রিন্ট করার পর ডায়নামিক অবজেক্ট ডিলিট করে দেওয়া যেতে পারে।

 return 0;

}
