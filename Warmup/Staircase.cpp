#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    string strTemp (n,' ');
    for(int i=1;i<=n;++i){
        strTemp[n-i] = '#';
        cout << strTemp << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
