#include<bits/stdc++.h>
using namespace std;
vector<int> nextgreaterleftelement(vector<int>&arr,int n){
    vector<int>v(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            v[i]=st.top();
        }
        st.push(arr[i]);
    }
    return v;
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
    vector<int> result;
    result=nextgreaterleftelement(arr,n);
    cout<<"next greater left elements are:";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}