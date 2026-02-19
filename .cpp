#include <bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     float x,y;
    cin >> x>> y;
 if (x== 0 && y ==0)
 {
    cout << "Origem";
 }else if (x== 0 && y !=0)
 {
    cout << "Eixo Y";
 }else if (y==0 && x !=0)
 {
    cout << "Eixo X";
 }
 
 
 
    return 0;}