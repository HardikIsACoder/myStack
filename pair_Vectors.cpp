#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool myCompare( pair< int, int > p1, pair< int, int > p2){
    return p1.first<p2.first;
}

int main(){

    int arr[] = {10,16,7,14,5,3,12,9};
    vector < pair<int, int> > v;
    
    for(int i=0; i<8;i++){
        v.push_back(make_pair(arr[i], i));      //it will push the arr elements with its indices
    }

    sort(v.begin(),v.end(),myCompare);          //it will sort the vector.first in ascending order
    //by remaining paired with the indices
    
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;          //arrange the indices of vector in arr such that correspnding
    }                                //elements in the vector.first are in ascending order.

    for(int i=0; i<v.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}