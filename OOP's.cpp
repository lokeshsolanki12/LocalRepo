//#include<iostream>
// using namespace std;
// class Student{   // yaha pr student ek daTa type hai jo mene create kiaa hai or iski help se mai bahut se veriable isme add kar sakta hu
// public:
//     string name;
//     int rno;
//     float gpa;
// };

// void print(Student s){
     
//      cout<<s.name<<endl<<s.rno<<endl<<endl<<s.gpa<<endl;

// }
// int main(){

//     Student s1;  // yaha s1 ek object hai jisme ham koi bhi veriable ko add karte hai or ise amm s1.ki help se use karte hai
//     cout<<"Enter your name"<<endl;
//     getline(cin, s1.name);         // yaha hamne getline ka use isliye kiaa hai kyoki hame apna jo name hai vo pura read karvana hai or cin sirf ek word ko hi read karta hai or output vahi de deta ahi
//     cout<<"Enter your roll no"<<endl;
//     cin>>s1.rno;
//     cout<<"Enter your gpa"<<endl;
//     cin>>s1.gpa;
//     cin.ignore();


//     Student s2;  
//     cout<<"Enter second student name"<<endl;
//     getline(cin, s2.name);
//     cout<<"Enter your roll no"<<endl;
//     cin>>s2.rno;
//     cout<<"Enter your gpa"<<endl;
//     cin>>s2.gpa;
//     cin.ignore();

//     Student s3;  
//     cout<<"Enter third student name"<<endl;
//     getline(cin, s3.name);
//     cout<<"Enter your roll no"<<endl;
//     cin>>s3.rno;
//     cout<<"Enter your gpa"<<endl;
//     cin>>s3.gpa;
//     cin.ignore();
    
//    print(s1);
//    print(s2);
//    print(s3);
// }


#include<iostream>
using namespace std;
class Student{   // yaha pr student ek daTa type hai jo mene create kiaa hai or iski help se mai bahut se veriable isme add kar sakta hu
public:
    string name;
    int rno;
    float gpa;
};

void print(Student s){
     
     cout<< s.name <<endl << s.rno <<endl<< s.gpa <<endl;

}
int main(){

    
    Student s1;
    s1.name = "lokesh solanki";
    s1.rno = 89;
    s1.gpa = 9.4;

    Student s2;
    s2.name = "Harsh Parjapat";
    s2.rno = 90;
    s2.gpa = 9.9;

    Student s3;
    s3.name = "Ankit Mewara";
    s3.rno = 91;
    s3.gpa = 9.6;

   print(s1);
   print(s2);
   print(s3);

}
