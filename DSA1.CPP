#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number:"<<n<<endl;
    cin>>n;
    
    
    if(n>=0){
        cout<<"Positive Number";
    }
    else 
    cout<<"Negative Number";



    return 0;
}


#include<iostream>
using namespace std;

int man(){
    int age=15;
    if(age>=18){
        
    }
    else{
        cout<<"Yoy are not Elagibale for Vote:"<<endl;
    }
     return 0;
}


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number:"<<endl;
    cin>>n;
    if(n%2 == 0){
        cout<<"Even Number";
    } else{
        cout<<"odd Number"<<endl;
    }
    

    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int marks ;
     cout<<"Enter the Student Marks:"<<endl;
     cin>>marks;
     if(marks>=90){
        cout<<"Grade A"<<endl;
     }
     else if(marks>=70){
        cout<<"Grade B"<<endl;
     }
     else if(marks>=50){
        cout<<"Grade C"<<endl;
     }
     else{
        cout<<"Fail"<<endl;
     }

    return 0;
}


#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the Letter:"<<endl;
    cin>>ch;
    if(ch>= 'a' && ch<='z'){
        cout<<"Lower Case Latter:"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Upper Case Latter:"<<endl;

    }
  else{
    cout<<"Not a any Alphabet Letter :"<<endl;
  }


    return 0;
}


#include <iostream>
using namespace std;

//ASCII Value Usaes
int main(){
    char ch;
    cout<<"Enter the Latter:"<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"Upper Case Latter:"<<endl;
    
    }
    else{
        cout<<"Lower Case Latter"<<endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

// Ternary Statements

int main(){

    int n=-45;
    cout<<(n>=0?"Positive Number":"Negative Number")<<endl;

    return 0;
}


#include <iostream>
using namespace std;

int main(){

    int i=0;
    while(i<=10){
        cout<<"i="<<i<<endl;
        i++;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<=20;i++){
        cout<<i<<" ";
    }

    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        sum +=i;
        if(i==5){
            break;
        }
    }
    cout<<sum;

    return 0;
}


#include <iostream>
using namespace std;

int main(){

    int n;
    int sum = 0;


    while(n>=0){
        cout<<"Enter The Value of n:"<<endl;
        cin>>n;
        sum+=1;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main(){

    int n;
    int oddsum=0;
   
            for(int i=1;i<=n;i++){
                if(i%2!=0){
                    oddsum+=i;
                }

        }
    
    
    cout<<"Sum of odd numbers: "<<oddsum<<endl;
    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int n=10;
    int i=1;
    do{
        cout<<"Hello Hariom"<<endl;
        i++;
    }
    while(i>=n);

    






    return 0;
}


#include <iostream>
using namespace std;
// prime no. checking
int main(){
    int n=7;
    bool isprime =true;

for(int i=2; i<n-1; i++){
    if(n%i==0){
        isprime = false;
        break;
    }
}
if (isprime == true){
    cout<<"The number is prime"<<endl;
}
else{
    cout<<"The number is not prime"<<endl;
}
    return 0;
}


#include<iostream>
using namespace std;
int i;

int main(){
    for(i=0; i<=5; i++){
        cout<<"*****"<<endl;
    }

    return 0;
}


#include<iostream>
using namespace std;
//nested Loops
int main(){
    int i=10;
    for(i=1; i<=10; i++)
    { int m=10;
    for(int j=1; j<=m; j++){
        cout<<"*";
    }
    cout<<endl;
    }


    return 0;
}
