#include <bits/stdc++.h>
#include<string.h>
using namespace std;

string funnyString(string s) {
    int i=0, len = s.length();
    string s3 = s;
   
     reverse(s3.begin(), s3.end()); 
    int l = s.length()-1;

    int arr[l+1];
    int arr2[l+1];

    for(int i=0; i<l-1; i++){
        arr[i] = abs(int(s[i]) - int(s[i+1]));
        arr2[i] = abs(int(s3[i]) - int(s3[i+1]));
    }
    int flag = 0;
    for(int i=0; i<l-1; i++){
        if(arr[i] == arr2[i]){
            flag = 0;
        } else {
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        return "Funny";
    } else {
        return "Not Funny";
    }
}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        cout<< result << "\n";
    }
    return 0;
}

