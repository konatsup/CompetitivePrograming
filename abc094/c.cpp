#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x[200000];
    list<int> lst;
    list<int>::iterator itr, it;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x[i];
        lst.push_back(x[i]); 
    }
    
    for(int i=0; i<n; i++){
        list<int> org(lst);
        itr = org.begin();
        advance(itr,i);
        org.erase(itr);
        org.sort();
        it = org.begin();
        advance(it,(n-1)/2);
        cout << *it<< endl;
    }
    
    return 0;
    
}