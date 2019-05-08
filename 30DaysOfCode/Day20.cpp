#include <bits/stdc++.h>

using namespace std;

void sort(vector<int> a){
    int numSwaps = 0;

    for(int i=0;i<a.size();i++){
        for(int j =0;j<a.size()-1;j++){
            if(a[j] > a[j+1]){
                numSwaps++;
                swap(a[j], a[j+1]);
            }
        }

        if(numSwaps == 0){
            break;
        }
    }

    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[a.size() - 1] << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    sort(a);
    // Write Your Code Here
    return 0;
}

