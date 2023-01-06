/* GIVEN INPUT
34 1 23 5 4 3 94
OUTPUT
5 0 4  3 2 1  6

We have to give the index in sorted order of each element 

APPORACH
1.INPUT ARRAY ELEMENTS
2.MAKE VECTOR OF PAIRS GIVING ARRAY ELEMENT CORRESPONDING TO ITS INDEX
3.SORT THE VECTOR PAIRS
4.STORE IN ARRAY (MODIFYING)
5.DISPLAY THE NEW ARRAY 
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(pair<int,int>v1,pair<int,int>v2){
  return v1.first<v2.first;
  }
int main(){
  int arr[]={34,1,23,5,4,3,94};
  vector<pair<int,int>>v;
  for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
  v.push_back(make_pair(arr[i],i));
  }
  //sorting part 
  sort(v.begin(),v.end(),comp);//comp is a comparator that is responsible for the algorithm of sorting in particular order(increasing/decreasing)
   for(int i=0;i<v.size();i++){
   arr[v[i].second]=i;
   }
   for(int i=0;i<v.size();i++){
   cout<<arr[i]<<" ";
   }
   
return 0;
}



