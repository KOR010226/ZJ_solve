#include <iostream>
using namespace std;

int main() 
{
    string dic1[] = {"Medium Wac", "WChicken Nugget", "Geez Burger", "ButtMilk Crispy Chicken", "Plastic Toy"};
    string dic2[] = {"German Fries", "Durian Slices", "WcFurry", "Chocolate Sunday"};
    int a1[] = {4, 8, 7, 6, 3};
    int a2[] = {2, 3, 5, 7};
    int n, m, sum = 0;
    while(cin >> n){
      if(n == 1){
        cin >> m;
        cout << dic1[m - 1] << ' ' << a1[m - 1] << "\n";
        sum += a1[m - 1];
      }
      else if(n == 2){
        cin >> m;
        cout << dic2[m - 1] << ' ' << a2[m - 1] << "\n";
        sum += a2[m - 1];
      }
      else if(n == 0){ break;}
    }
    cout << "Total: " << sum << endl;
}