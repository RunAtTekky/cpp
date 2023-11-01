#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";


vector<int> primeFactors(int n)  
{  
    vector<int> factors(1);
    // Print the number of 2s that divide n
     
    while (n % 2 == 0)  
    {  
        factors.push_back(2);  
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            factors.push_back(i); 
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        factors.push_back(n); 

    return factors; 
}  

void func() {
    int n,k;
    cin >> n >> k;
    vector<int> factors = primeFactors(k);

    vector<int> nums(n);
    printnl("HEY1");
    
    for (int i=0; i<n; i++) {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    cout << "HEY" << endl;
    cout << "HEY" << endl;
    int diff = 0;
    cout << diff << endl;
    for (int i=0; i<factors.size(); i++) {
        // vector<int> temp(n);
        // for (int i=0; i<n; i++) {
        //     temp[i] = nums[i];
        // }

        int curr = 10000;
        for (int j=0; j<n; j++) {
            if (nums[j]%factors[i] == 0) {
                curr = 0;
                break;
            }
            curr = min(curr, factors[i] - (nums[j]%factors[i]));
            // printnl(curr);
        }
        // if (curr == 10000) curr = 0;
        diff += curr;

    }
    cout << diff << endl;
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}