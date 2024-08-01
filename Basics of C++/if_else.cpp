#include<bits/stdc++.h>
using namespace std;

int main(){
   
   /*int marks;
   cout << "Please enter your marks to know your grade: ";
   cin >> marks;

   if(marks >=80 && marks <=100){
    cout << "Your grade is A ";
   }
   else if(marks >= 60 && marks <= 79){
    cout << "Your grade is B ";
   }
   else if(marks >= 50 && marks <= 59){
    cout << "Your grade is C ";
   }
   else if(marks >= 45 && marks <= 49){
    cout << "Your grade is D ";
   }
   else if(marks >= 25 && marks <= 44){ 
    cout << "Your grade is E ";
   }
   else{
    cout << "You are Fail! Better luck next time! :)" ;
   }*/

   int age;
   cout<< "Please enter your age to check the eligibility criteria: ";
   cin >> age;

   if(age < 18){
    cout << "You are not eligible for the job"; 
   }
   else if(age >= 18 && age <= 54){
    cout << "You are eligible for the job";
   }
   else if(age >= 55 and age <= 57){
    cout << "You are eligible for the job, but retirement soon!";
   }
   else if(age > 57){
    cout << "Retirement time :)";
   }


    return 0;
}