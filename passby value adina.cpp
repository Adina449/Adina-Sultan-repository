#include<iostream>
using namespace std;
void sum();           
int sub();            
int mul(int a, int b); 


int main()
 {
    int a, b;
    cout << "Enter two numbers: "<<endl;
    cin >> a;
	cin>> b;

  
    sum();  
    cout << "Subtraction result= "<< sub()<< endl;  
    cout << "Multiplication result= "<< mul(a, b)<< endl; 
   
}
void sum()
 {
    int c, d;
    cout << "Enter two numbers for sum= "<<endl;
    cin >> c >> d;
    int sum1 = c + d;
    cout << "Sum is= "<<" "<<sum1<<endl;
}

int sub() 
{
    int m, n;
    
    cout << "Enter two numbers for subtraction="<<endl;
    cin >> m >> n;
    int sub1 = m - n;  
    cout<<"subtraction is="<<" "<<sub1<<endl;
   
}

int mul(int a, int b) {
    return a * b;  
}

