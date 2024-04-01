//Q) Print Hello world 'n' times. Take 'n' as input from user in seperate times.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<"Hello World"<<endl;
//     }
// }

//Output:- 
// Enter a number : 3
// Hello World
// Hello World
// Hello World

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         cout<<"Hello World"<<endl;
//         cout<<i;
//     }
// }

//Output:- koi bhi output nhi aaega kyuki yha jo 'i' h wo iss particular
// for loop ka variable hai. 
// In simple words yha 'i' ki apni for loop ke bahar abhi koi auqat nhi hai
// that's why yha cout<<i; kuch bhi print nhi kar paega  

// helloworld.cpp: In function 'int main()':
//helloworld.cpp:25:9: error: 'i' was not declared in this scope
   //  for(i=1;i<=n;i++){
  //       ^


//   #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int i;
//     for(i=1;i<=n;i++){
//         cout<<"Hello World"<<endl;
//         cout<<i<<endl;
//     }
// }

//Output:- Enter a number : 4
// Hello World
// 1
// Hello World
// 2
// Hello World
// 3
// Hello World
// 4


//   #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int i;
//     for(i=1;i<=5;i++){
//         cout<<"Hello World"<<endl;
//     }
// }
//Output :- Enter a number : 5
// Hello World
// Hello World
// Hello World
// Hello World
// Hello World

  #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i;
    for(i=1;i<=5;i++){
        cout<<"Hello World"<<endl;
    }
    cout<<i;
}

// Output:- Enter a number : 6
// Hello World
// Hello World
// Hello World
// Hello World
// Hello World
// 6