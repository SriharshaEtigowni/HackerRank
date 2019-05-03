#include <bits/stdc++.h>
#include<string>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     string m;
     int n = s.size();
     m += s[n-2];
     m += s[n-1];
     s.pop_back();
     s.pop_back();

     if(m == "PM"){
         string b;
         b += s[0];
         b += s[1];
         int h = stoi(b);
         if(h == 12) ;
         else h += 12;
         b = to_string(h);
         s[0] = b[0];
         s[1] = b[1];         
     }else if(m == "AM"){
         string b;
         b += s[0];
         b += s[1];
         int h = stoi(b);
         if(h == 12){
             h = 00;
             s[0] = '0';
             s[1] = '0';
         }
     }

     return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
