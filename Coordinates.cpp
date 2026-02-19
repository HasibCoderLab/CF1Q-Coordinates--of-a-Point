/*============================================================
    Codeforces - CF1-Q.
    Problem : Data Types & Conditions
    Contest :1 Data Types & Conditions
    Topic   : Coordinates of a Point
    File    : Coordinates.cpp
    SolvedBy  : Hasib Hasan
============================================================*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float x,y;
    cin >> x>> y;
    if (x>0 && y>0)
    {
       cout<<"Q1";
       

    }else if (x<0 && y>0)
    {
       cout<<"Q2";
    }else if (x<0 && y<0)
    {
        cout<<"Q3";
    }else{
         cout<<"Q4";
    }
    
    return 0;
    
}