// problem statement -
// You are givev two string s and t both contains 'a'and 'b' you need to check whether it si possible to equate s and t 
// after replacing 'a' with 'ab' 

#include <bits/stdc++.h>

    using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string s, t;
        cin >> n >> m >> s >> t;

        int prefix_B1 = 0, prefix_B2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b')
                prefix_B1++;
            else
                break;
        }
        for (int i = 0; i < m; i++)
        {
            if (t[i] == 'b')
                prefix_B2++;
            else
                break;
        }

        int cntA_1 = 0, cntA_2 = 0;

        for (int i = 0; i < n; i++)
            cntA_1 += (s[i] == 'a');
        for (int i = 0; i < m; i++)
            cntA_2 += (t[i] == 'a');

        if ((prefix_B1 == prefix_B2) && (cntA_1 == cntA_2))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}

// time complexity - O(n+m)
// space complexity - O(n+m)