#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
	string a[102];
	cin>>h>>w;
	for(int i=0;i<h;i++){
	    cin>>a[i];
	}
	for(int i=0;i<w+2;i++){
	    cout<<"#";
	}
	cout<<endl;
	for(int i=0;i<h;i++){
	    cout<<"#"<<a[i][0]<<"#"<<endl;
	}
	for(int i=0;i<w+2;i++){
	    cout<<"#";
	}
	cout<<endl;
    return 0;
}