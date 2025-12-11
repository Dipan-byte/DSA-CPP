#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;

    int a[n1];
    for(int i = 0; i < n1; i++) cin >> a[i];

    cin >> n2;
    int b[n2];
    for(int i = 0; i < n2; i++) cin >> b[i];

    unordered_set<int> setA, result;

    for(int i = 0; i < n1; i++)
        setA.insert(a[i]);

    for(int i = 0; i < n2; i++){
        if(setA.count(b[i]))
            result.insert(b[i]);
    }

    for(int x : result)
        cout << x << " ";

    return 0;
}
