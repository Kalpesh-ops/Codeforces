#include <iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    int x = 0;
    char s[4];
    
    while (n--) {
        cin >> s;
        
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
 
    cout << x << "
";
    return 0;
}