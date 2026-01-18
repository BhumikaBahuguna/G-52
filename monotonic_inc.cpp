#include<bits/stdc++.h>
using namespace std;
stack<int> buildincstack(vector<int>&arr,int n){
    stack<int>st;
    for(int i=0;i<n;i++){
    while(!st.empty() && st.top()>arr[i]){
        st.pop();
    }
    st.push(arr[i]);
}
return st;
}
int main(){
    int n;
    cout<<"enter no of elements:";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int> result;
    result=buildincstack(arr,n);
    cout<<"monotonic incerasing stack is:";
    while(!result.empty()){
        cout<<result.top()<<" ";
        result.pop();
    }
    return 0;
}

