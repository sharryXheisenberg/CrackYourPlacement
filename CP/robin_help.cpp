#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n, k;
        cin >> n >> k;  
        vector<int> v(n);
        
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int cnt = 0;    
        int gold = 0;   

        
        for (int i = 0; i < n; i++) {
            if (v[i] >= k) {
                gold += v[i];  
            } else if (v[i] == 0 && gold > 0) {
                gold--;  
                cnt++;   
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}
