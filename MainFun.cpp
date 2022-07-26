#include<bits/stdc++.h>
using namespace std;

int main(){
    MyHashSet s;
    s.add(1);
    s.add(2);

    cout<<s.contains(1);
    cout<<s.contains(3);
   
    cout<<s.contains(3);
    s.remove(3);
    s.remove(3);
    cout<<s.contains(3);
    return 0;
}