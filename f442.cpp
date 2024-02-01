#include <iostream>
using namespace std;

int main() 
{
    int team[2001], chi[2001];
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
      cin >> team[i];
    }
    int ea;
    cin >> ea;
    int e;
    cin >> e;
    for(int i = 0;i < e; i ++){
      cin >> chi[i];
      for(int j = 0;j < n; j ++){
        if(team[j] == chi[i]){
          team[j] = ea;
          ea = chi[i];
        }
      }
    }
    
    for(int i = 0; i < n; i ++){
      cout << team[i] << " ";
    }
    cout << endl;
}