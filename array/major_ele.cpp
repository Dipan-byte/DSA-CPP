#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    map<int, int> freq;
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    bool found = false;
    for(auto e : freq){
        if(e.second > n/2){
            cout << "Majority Element: " << e.first;
            found = true;
            break;
        }
    }

    if(!found) cout << "No majority element";

    return 0;
}
