//Q) Print Hello world 'n' times. Take 'n' as input from user in seperate times.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Hello World"<<endl;
    }
}

//Output:- 
// Enter a number : 3
// Hello World
// Hello World
// Hello World
