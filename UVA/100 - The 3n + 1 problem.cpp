#include <iostream>
using namespace std;

int main() {

	int i,j,max,min,k,n,total,maximum;
	while(cin>>i>>j){

            if(i>=j){
                max = i;
                min = j;
            } else if(i<=j){
                max = j;
                min = i;
            }
		maximum = 0;
		for(k=min; k<=max; k++){
            total = 1;
            n = k;
            while(n!=1){
                total++;
                if(n%2 == 1)
                    n = 3*n +1;
                else
                    n /=2;
            }
            if(maximum<=total)
                maximum = total;
		}
		cout<<i<<" "<<j<<" "<<maximum<<endl;
	}

	return 0;
}
