#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int num = 0;
    cin >> num;

    map<string,string> lookup;

    for(int i=0;i<num;i++){
        string temp;
        getline(cin >> ws, temp);
        lookup[temp.substr(0, temp.find(' '))] = temp.substr(temp.find(' ')+1,temp.size());
    }

    string t;
    while(getline(cin >> ws, t)){
        if(lookup.find(t) != lookup.end()) cout << t << '=' << lookup[t] << endl;
        else
          cout << "Not found" << endl;
    }

    return 0;
}

