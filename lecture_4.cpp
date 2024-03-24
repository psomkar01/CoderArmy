// #include<iostream>
// using namespace std;
// int main()
// {
//     int a , b;
//     cout<<"enter the value of a : ";
//     cin>>a;
//     cout<<"enter the value of b : ";
//     cin>>b;
//     cout<<"sum of a and b is : "<<a+b;
// }


//typecasting
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 100;
//     char b = 'a';
//     b = a;
//     cout<<b;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int package ;
//     cout<<"enter the package :";
//     cin>>package;  //12

//     if(package > 10)// 12>10
//     {
//         cout<<"accepted ";
//     }
//     else{
//         cout<<"rejected ";
//     }
// }


#include<iostream>
using namespace std;
// int main()
// {
//     int a , b;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;

//     if(a>b)
//     cout<<"yes";
//     else
//     cout<<"no";
// }


//check the given no is even or odd
// int main()
// {
//     int number;
//     cout<<"Enter the number: ";
//     cin>>number;
//     if(number%2==0)
//     {
//         cout<<"even no";
//     }
//     else{
//         cout<<"odd no";
//     }
// }


//no is zero , +ve , -ve 
// int main()
// {
//     int num;
//     cout<<"Enter the no: "; //-5
//     cin>>num;

//     if(num>0)  // -5 > 0 
//     {
//         cout<<"positive";
//     }
//     else
//     {
//         if(num<0)
//         {
//             cout<<"negative";
//         }
//         else
//         {
//             cout<<"zero";
//         }
//     }
// }

// if elseif else
// int main()
// {
//     int num;
//     cout<<"Enter the no: ";
//     cin>>num;

//     if(num>0)
//     cout<<"positive";
//     else if(num==0)
//     cout<<"zero";
//     else
//     cout<<"negative";
// }


//vowel or consonant
// int main()
// {
//     char ch;
//     cout<<"Enter the character: ";
//     cin>>ch;

//     if(ch=='a'){
//         cout<<"vowel";
//     }
//    else if(ch=='e'){
//         cout<<"vowel";
//     }
//     else if(ch=='i'){
//         cout<<"vowel";
//     }
//    else if(ch=='o'){
//         cout<<"vowel";
//     }
//      else if(ch=='u'){
//         cout<<"vowel";
//     }
//     else{
//         cout<<"consonant";
//     }
// }


// int main()
// {
//     int n;
//     cout<<"enter the no: ";
//     cin>>n;

//     if(n==1)
//     cout<<"monday";
//     else if(n==2)
//     cout<<"tuesday";
//     else if(n==3)
//     cout<<"wednesday";
//     else if(n==4)
//     cout<<"thursday";
//     else if(n==5)
//     cout<<"friday";
//     else if(n==6)
//     cout<<"saturday";
//     else if(n==7)
//     cout<<"sunday";
//     else
//     cout<<"enter valid day";
// }



//******LOOPS*********
// int main()
// {
//     //print 1 to 5 
//     int count ;
//     for(count =1 ; count<=5;count=count+1)
//     {
//         cout<<count<<endl;
//     }
// }


//print n natural no
// int main()
// {
//     int n ;
//     cin>>n;

//     for(int i =1;i<=n;i=i+1)
//     {
//         cout<<i;
//     }
// }




//************HOME WORK*************

// int main()
// {
//     int num1 , num2;
//     cout<<"enter the num1: ";
//     cin>>num1;
//     cout<<"enter the num2: ";
//     cin>>num2;

//     if(num1 > num2)
//     {
//         cout<<num1;
//     }
//     else
//     cout<<num2;  
// }


// if age is greater than 18 adult , else teenager
// int main()
// {
//     int age;
//     cout<<"Enter the age: ";
//     cin>>age;

//     if(age>=18)
//     {
//         cout<<"adult";
//     }
//     else{
//         cout<<"teenager";
//     }
// }



// print months of an year
// int main()
// {
//     int num;
//     cout<<"enter the no: ";
//     cin>>num;
//     if(num==1)
//     cout<<"jan";
//     else if(num==2)
//     cout<<"feb";
//     else if(num==3)
//     cout<<"march";
//     else if(num==4)
//     cout<<"april";
//     else if(num==5)
//     cout<<"may";
//     else if(num==6)
//     cout<<"june";
//     else if(num==7)
//     cout<<"july";
//     else if(num==8)
//     cout<<"aug";
//     else if(num==9)
//     cout<<"sept";
//     else if(num==10)
//     cout<<"oct";
//     else if(num==11)
//     cout<<"nov";
//     else if(num==12)
//     cout<<"dec";
//     else
//     cout<<"enter valid month";

// }


// int main()
// {
//     int age;
//     cout<<"enter the age:";
//     cin>>age;

//     // if(age<12 || age>65)
//     // cout<<"yes";
//     // else
//     // cout<<"no";

//     if(age<12)
//     cout<<"yes";
//     else if(age>65)
//     cout<<"yes";
//     else
//     cout<<"no";
// }



// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<"india will win the world cup"<<endl;
//     }
// }


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;//5
    for(int i=1; i<=n; i=i+2)
    {
        cout<<i<<endl;
    }
}