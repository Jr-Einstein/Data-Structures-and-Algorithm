#include<iostream>
using namespace std;

int main(){
//     //basic I/O

//     cout<<"Hello , I am Aman DAY-55"<<"\n";
//     cout<<"Hello , I am Aman DAY-55"<<"\n";
//     cout<<"Hello , I am Aman DAY-55"<<"\n";
// }

//basic taking input and printing output.

// int x;
// cout<<"Enter The Value of X: ";
// cin>>x;
// cout<<"The Value of X is : "<< x;
//  int x,y;

// cin>>x,y;
// cout<<"The Value of X and Y are : "<< x << y;
// return 0;


//If Else Statement ---------------------

// int age;
// cout<<"Enter Your Age : "<<endl;
// cin>>age;
// if(age>18){
//     cout<<"You are eligible to Vote";
// }else{
//     cout<<"You are not eligible to Vote.";
// }


// int marks;
// cout<<"Enter Your Marks : ";
// if(marks<25){
//     cout<<"F";
// }else if(marks >=26 && marks<=50){
//     cout<<"Average";

// }else(marks >=51 && marks<=100){
//     cout<<"Code Worked!";
// }
// return 0;

int position;
cout<<"Enter Your Position";
cin>>position;
switch(position){
    case 1:
    cout<<"Gold";
    break;
    case 2:
    cout<<"Silver";
    break;
    case 3:
    cout<<"Bronze";
    break;

    default:
    cout<<"No Position Assigned";
}
return 0;

}