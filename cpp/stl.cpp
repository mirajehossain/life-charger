#include<iostream>
#include<vector>
using namespace std;

int  main(){
    vector<int > amount;
    amount.push_back(500);
    amount.push_back(800);
    amount.push_back(250);
    amount.push_back(780);
    for (int i = 0; i<amount.size(); i++){
        cout << amount[i]<< endl;
    }

return 0;
}
