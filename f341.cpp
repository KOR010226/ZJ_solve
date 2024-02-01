#include <bits/stdc++.h>
using namespace std;

int main() 
{
    char str[100] = {}, substr[100] = {};
    cin >> str;
    cin >> substr;
    char *loc = strstr(str, substr);
    int pos = loc - str;
    int substr_len = strlen(substr), whole_len = strlen(str);
    char left[100] = {}, right[100] = {};
    //get left hand side to the axis
    strncpy(left, str, pos);
    strncpy(right, str + pos + substr_len, whole_len - substr_len - pos);
    
    for(int j =  strlen(right) - 1; j >= 0; j --){
      cout << right[j];
    }
    cout << substr;
    
    for(int j = strlen(left) - 1; j >= 0; j --){
      cout << left[j];
    }
    printf("\n");
}