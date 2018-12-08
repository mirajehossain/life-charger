#include <iostream>
using namespace std;

int main() {
	
	string s1,s2,s3;
	
	cin>>s1>>s2>>s3;
	if(s1 == "vertebrado" ){
		if(s2 == "ave"){
			if(s3 == "carnivoro"){
				cout<<"aguia"<<endl;
			} else if(s3 == "onivoro"){
				cout<<"pomba"<<endl;
			}
		} else if(s2 == "mamifero") {
			if(s3 == "onivoro"){
				cout<<"homem"<<endl;
			} else if(s3 == "herbivoro"){
				cout<<"vaca"<<endl;
			}
		}
	} else if(s1 == "invertebrado" ){
		if(s2 == "inseto"){
			if(s3 == "hematofago"){
				cout<<"pulga"<<endl;
			} else if(s3 == "herbivoro"){
				cout<<"lagarta"<<endl;
			}
		} else if(s2 == "anelideo") {
			if(s3 == "hematofago"){
				cout<<"sanguessuga"<<endl;
			} else if(s3 == "onivoro"){
				cout<<"minhoca"<<endl;
			}
		}
	}
	
	
	
	return 0;
}
