#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	vector<int>a;
	a.push_back(0);
	for(i=2;i*i<=n;i++){
		while(n%i==0){
			   if(a.back()!=i)//last index er soman na hole print korbe
			                //mane distinct prime factor input nibe
			 a.push_back(i);
			n/=i;
		}
	}
	if(n>1)
		a.push_back(n);
		
  for(i=0;i<a.size();i++)
   cout<<a[i]<<" ";
}
