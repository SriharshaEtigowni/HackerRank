#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;

    for(int i=0;i<T;i++){
        string dummy;
        getline(cin >> ws,dummy);
        string even, odd;
        for(int j=0;j<dummy.size();j++){
            if(j%2){
              odd.push_back(dummy[j]);
            }else{
              even.push_back(dummy[j]);
            }
        }
        cout << even << " " << odd << endl;
    }
    
    return 0;
}
