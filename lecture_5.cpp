// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     for(i=100;i<=200;i=i+1)
//     {
//         cout<<i<<endl;
//     }
// }

#include<iostream>
using namespace std;
// int main()
// {
//     // print a to z character
//     char i;
//     for(i='a';i<='z';i=i+1)
//     {
//         cout<<i<<endl;
//     }
// }



// int main()
// {
//     // print 10 to 1
//     int i;
//     for(i=10;i>=1;i=i-1)
//     {
//         cout<<i<<" ";
//     }
// }


//print 1 to 100 
// int main()
// {
//     for(int i=1;i<=100;i=i+3)
//     {
//         cout<<i;
//     }
// }


//table
// int main() 
// {
//     int n,i;
//     cout<<"enter the table no :";
//     cin>>n;

//     for(i=1;i<=10;i=i+1)
//     {
//         cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     }
// }


//calculate the power of a no
// int main()
// {
//     int n ,num , pow , i;
//     cout<<"Enter the number :";
//     cin>>n;
//     cout<<"Enter the power :";
//     cin>>pow;
//      num = n;
//     for(i=1;i<pow;i=i+1)
//     {
//         num=num*n;
//     }
//     cout<<num;
// }


//sum of n natural no
// int main()
// {
//     int i , n , sum=0;
//     cout<<"Enter the number :";
//     cin>>n;

//     for(i=1;i<=n;i=i+1)
//     {
//         sum=sum+i;
//     }
//     cout<<sum;
// }


//factorial of a no
// int main()
// {
//    int n , i , fact ;
//     cout<<"Enter the number :";
//     cin>>n;
//     fact=n;
//     for(i=1;i<=n-1;i=i+1)
//     {
//         fact=fact*i;
//     }
//     cout<<fact;
// }


//prime no or not
// int main()
// {
//     int n;
//     cout<<"enter the no :";
//     cin>>n;

//     if(n<2)
//     {
//         cout<<"NOT A PRIME NO";
//         return 0;
//     }
//     else{

//     for(int i=2;i<n;i=i+1)
//     {
//         if(n%i==0)
//         {
//             cout<<"not a prime no";
//             return 0;
//         }
//     }
//     cout<<"prime no";
// }

// }


//fibonacci series

// int main() {
//     int curr, last = 0, prev = 1, n;
    
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     cout << "Fibonacci Series: ";
//     if (n >= 1)
//         cout << last << " ";
//     if (n >= 2)
//         cout << prev << " ";

//     for (int i = 3; i <= n; i++) {
//         curr = prev + last;
//         cout << curr << " ";
//         last = prev;
//         prev = curr;
//     }
//     return 0;
// }