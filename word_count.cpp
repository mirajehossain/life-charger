#include <iostream>
#include<string>
using namespace std;

int main() { 
	string name;
		getline(cin, name);
		int count=0, i, checkCharExist=0;
		
		
		
		for(i=0; i<name.length(); i++){
			if(name[i] !=' '){
				checkCharExist++;
			} else {
				checkCharExist = 0;
			}
			
			if(checkCharExist == 1){
				count++;
			}
		}
		
		cout<<count;
	return 0;
}
