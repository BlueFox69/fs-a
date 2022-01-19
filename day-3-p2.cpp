/* You are given a list of N integers List[], list contains both +ve and -ve integers.
Your task is to findout, the Highest Product possible,
Where the product is the product of all the elements of contiguous sublist sList[],
and sub list should conatin atleast 1 integer.

Input Format:
-------------
Line-1: An integer N.
Line-2: N space separated integers, List[].

Output Format:
--------------
Print an integer output, the highest product.

Sample Input-1:
---------------
4
2 3 -2 4

Sample Output-1:
----------------
6

Explanation:
------------
Product of contiguous sub list [2,3].


Sample Input-2:
---------------
3
-2 0 -3

Sample Output-2:
----------------
0

Explanation:
------------
Product of sub list [0], where [-2,-3] is not a contiguous sublist

 */
#include <bits/stdc++.h>
using namespace std;
void HighestProduct(vector<int>& v){
    int tempProd,maxProd,n;
    /* n=v.size();
    cout<<n; */
   /*  maxProd=v[0]; */
    for(auto x:v){
        tempProd=x*(x+1);
        /* if(tempProd>maxProd){
            maxProd=tempProd;
        }else{
            tempProd=0;
        }
        cout<<tempProd; */
        cout<<tempProd;
    }
    /* cout<<maxProd; */
}
int main(){
    vector<int> v;int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    HighestProduct(v);
}