#include <iostream>
#include <vector>
using namespace std;

#define ll long long

// Kadane's Algorithm - Maximum Subarray Sum
ll maxSubArraySum(vector<ll> a) {
  ll size = a.size();
	ll max_so_far = LLONG_MIN, max_ending_here = 0;

	for (ll i = 0; i < size; i++) {
		max_ending_here = max_ending_here + a[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}

// Driver Code
int main()
{
	vector<ll> a;
    a = { -2, -3, 4, -1, -2, 1, 5, -3 };

	ll max_sum = maxSubArraySum(a);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}
