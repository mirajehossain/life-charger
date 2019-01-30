#include<iostream>
#include<vector>

using namespace std;

int main() {


    int n,q, k;

    cin>>n>>q;
    vector<vector<int> >arr;
    vector<vector<int> >qq(q);

    for(int i=0; i<n; i++) {
        cin>>k;
        vector<int>ex;
        for(int j=0; j<k; j++) {
            int item;
            cin>>item;
            ex.push_back(item);
        }
        arr.push_back(ex);
    }
    
    for (int i = 0; i < q; i++){
        int item, item1;  
        cin >> item >> item1; 
        cout << arr.at(item).at(item1) << endl;
    }

    return 0;
}
