// Name- Samar sood
// Roll no. - 2010991708
//Set - 3
//Question - 1
// Group - 20
#include<bits/stdc++.h>
using namespace std;

int main(){
	try{
		int n;
	cin>>n; // taking input from user
	vector<int> ans(n);
	for(int i=0;i<n;i++){ // using for loop
		cin>>ans[i];
	}
	sort(ans.begin(),ans.end()); // by sorting
	vector<int>v(n);
	int j=0;
	for(int i=0;i<n;i+=2,j++){
		v[i]=ans[j];
	}
	
	for(int i=1;i<n,j<n;i+=2,j++){
		v[i]=ans[j];
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	}
	catch(...){
		cout<<"Error\n";
	}
	return 0;
}