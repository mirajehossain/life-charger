#include <bits/stdc++.h>
using namespace std;

int countString(string str) {

    stringstream s(str);
    string word;
    int count = 0;

    while(s>>word)
        count++;
    return count;
}

int main(){

string s;
getline(cin, s);
cout<<countString(s);


return 0;
}
