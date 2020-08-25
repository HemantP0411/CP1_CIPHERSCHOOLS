#include <bits/stdc++.h> 
using namespace std; 

int countSubsequences(string s) 
{ 
    int aCount = 0; 
    int bCount = 0; 
    int cCount = 0; 
    for (unsigned int i = 0; i < s.size(); i++) { 
        if (s[i] == 'a') 
            aCount = (1 + 2 * aCount); 
		else if (s[i] == 'b') 
            bCount = (aCount + 2 * bCount); 
		else if (s[i] == 'c') 
            cCount = (bCount + 2 * cCount); 
    } 
  
    return cCount; 
} 
int main() 
{ 
    string s; 
    getline(cin>>ws,s);
    cout<<countSubsequences(s)<<endl; 
    return 0; 
}
