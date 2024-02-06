#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int,int> uom;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        vi ar;
        ar.push_back(n);
        for(int i=0;i<k;i++){
        	int x = (n-i)/k-1;
        	ar.push_back(ar.back()-x);
        }
        ans.push_back(0);
        for(int i=1;i<k;i+=2){
        	ar[i] = ar[i+1]+1;
        }
        
        ar.pop_back();
        int ind=0;
        int fl = 0;
        while(ar.size()<n){
        	if(fl){
        		ar.push_back(ar[ind]+1);
        	}
        	else{
        		ar.push_back(ar[ind]-1);
        	}
        	fl=!fl;
        	ind++;
        }
        
        for(int i=0;i<ar.size();i++){
        	cout<<ar<<" ";
        }
        cout<<endl;
    }
    return 0;
}
