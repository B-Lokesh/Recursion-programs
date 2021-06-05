//using recursive method
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n , int i)
{
	if(i==1)
	  return 1;
	if(n%i==0)
	  return 0;
	return isprime(n,i-1);
}
int main()
{
	int n ,prim ;
	cout<<"Enter value check prime or not  :";
	cin>>n;
	prim=isprime(n,sqrt(n));
	if(prim==1)
	cout<<"Prime number";
	else
	cout<<"not a prime Number";
}
