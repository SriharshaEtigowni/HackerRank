#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

      Difference(vector<int> el){
          elements = el;
          maximumDifference = 0;
      }

      void computeDifference(){
          int minval = 101, maxval = 1;

          for(int i=0;i<elements.size();i++){
              minval = min(minval,elements[i]);
              maxval = max(maxval,elements[i]);
          }

          maximumDifference = abs(maxval - minval);
      }

      // Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}