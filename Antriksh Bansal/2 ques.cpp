// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool order(int a,int b)
{
    return a>b;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    int max=-1,min=-1;
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for (auto it : mp) {
        if (isPrime(it.first)) {
            min = it.first;
            break;
        }
    }

    for (auto it = mp.rbegin(); it != mp.rend(); it++) {
        if (isPrime(it->first)) {
            max = it->first;
            break;
        }
    }
    
   for(int i=0;i<n;i++)
   {
    if(arr[i]==max)
    {
        swap(arr[0],arr[i]);
    }
    if(arr[i]==min)
    {
        swap(arr[arr.size()-1],arr[i]);
    }
    }
    
    sort(arr.begin()+1,arr.end()-1,order);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
}
