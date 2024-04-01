// Q) Print the table of 19.


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=19;i<=190;i++){   // loop will run 190-19 = 171 times 
//         if(i%19==0){            // but as we use loop for avoid too much repetition  
//                cout<<i<<endl;   // so we will just increment the value as i = i+19 and our work wil be done as below code.
//         }
     
//       }
// }

// output:- 
// 19
// 38
// 57
// 76
// 95
// 114
// 133
// 152
// 171
// 190

 #include<iostream>
using namespace std;
int main(){
    for(int i=19;i<=190;i=i+19){  // i=i+19 or i+=19 both are same
               cout<<i<<endl;
     
      }
    }

    // output:- 
// 19
// 38
// 57
// 76
// 95
// 114
// 133
// 152
// 171
// 190