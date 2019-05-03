#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> bin;

    while(n){
        bin.emplace_back(n%2);
        n/=2;
    }

    int temp = 0;

    for(int i=0;i<bin.size();i++){
        int count = 0;
        while(bin[i] == 1){
            count++;
            i++;
        }
        temp = max(temp,count);
    }

    cout << temp <<endl;

    return 0;
}
