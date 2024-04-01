//Q) Print all even numbers from 1 to 100.
 #include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){    // here loop will repeated 100 times
        if(i%2==0){ 
               cout<<i<<endl;
        }
     
      }
}


// To avoid repetaton we use loops so we will also reduce loops repetation alternatively too as below with the help of this code.
 #include<iostream>
using namespace std;
int main(){
    for(int i=2;i<=100;i+=2){
               cout<<i<<endl;  // now loop will iterate 50 times only.
     
      }
}

// Output:-
// 2
// 4
// 6
// 8
// 10
// 12
// 14
// 16
// 18
// 20
// 22
// 24
// 26
// 28
// 30
// 32
// 34
// 36
// 38
// 40
// 42
// 44
// 46
// 48
// 50
// 52
// 54
// 56
// 58
// 60
// 62
// 64
// 66
// 68
// 70
// 72
// 74
// 76
// 78
// 80
// 82
// 84
// 86
// 88
// 90
// 92
// 94
// 96
// 98
// 100