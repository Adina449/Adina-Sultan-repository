#include<iostream>
using namespace std;
int main()
{
  //5!=*4*3*2*1=120
  int n,i;
  long factorial=1.0;
  cout<<"Enter a number"<<endl;
  cin>>n;
  if(n<0)
  {
  	cout<<"Please enter a positive number"<<endl;
  }
  else
  {
  	for(i=1; i<=n; i++)
  	{
  		factorial=factorial*i;
	  }
	  cout<<"Factorial:"<<factorial<<endl;
  }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}