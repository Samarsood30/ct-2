// Name- Samar sood
// Roll no. - 2010991708
//Set - 3
//question - 2
// Group - 20
#include<bits/stdc++.h>
using namespace std;

int main(){
try{
	int n,x;
	cin>>n>>x; // taking input from user
	vector<int> a(n);
	for(int i=0;i<n;i++){ // using for loop
		cin>>a[i]; // taking input from user
	}
	sort(a.begin(),a.end()); // by sorting
	int i=0,j=n-1;
	bool ok=true;
	while(i<j){ // using while loop
		if(a[i]+a[j]==x){
			cout<<"Pair found( "<<a[i]<<" "<<a[j]<<")"<<endl; // a pair with sum on it will be printed
			ok=false;
		}
		
		if(a[i]+a[j]>x){
			j--;
		}
		else{
			i++;
		}
	}
    	if(ok){
		cout<<"Pair not found\n"; // if a pair will not found
	}
  }
    catch(...){
		cout<<"Error\n";
  }
	return 0;
}
