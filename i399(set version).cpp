#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b ,c;
    set<int, greater<int>> st;
    cin >> a >> b >> c;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    
    cout << 4 - st.size() << " ";
    
    auto it = st.begin();
    
    while(it != st.end()){
      cout << *it << " ";
      it ++;
    }
}