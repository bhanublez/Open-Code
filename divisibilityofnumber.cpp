





#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin >> n >> k;

    int count=0;
    for (int i=0;i<=n-1;i++)
    {
        int a;
        cin >> a;
        if (a%k==0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}







































/*//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.
#include <bits/stdc++.h>

using namespace std;

// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// See the below code for details.

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// Read the input n, k
	int n, k;
	cin >> n >> k;

	// ans denotes number of integers n divisible by k
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;

		if (t % k == 0) {
			ans++;
		}
	}

	// Print the ans.
	cout << ans << "\n";

	return 0;*/

