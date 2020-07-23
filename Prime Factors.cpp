#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,i;
	cin>>n;
	vector<long long>a;
	for(i=2;i*i<=n;i++){
		while(n%i==0){
			a.push_back(i);
			n/=i;
		}
	}
	if(n>1)
		a.push_back(n);
		
  for(i=0;i<a.size();i++)
   cout<<a[i]<<" ";
}
