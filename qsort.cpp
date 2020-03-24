#include <iostream>
#include <cstdlib>
using namespace std;

	int compare(const void *a, const void *b){
		return (*(int*)a - *(int*)b);
	}
	

int main() {
	
	string s;
	cout<<"podaj napis z klawiatury: ";
	cin>>s;
	int t[s.length()];
	for(int i = 0; i<s.length();i++){
		t[i] = 0;
	}
	for(int i = 0;i<=s.length()-1; i++){
		t[i] = int(s[i]);
	}
	cout<<"posortowany napis: ";
	qsort(t,s.length(),sizeof(int),compare);
	for(int i = 0; i<=s.length()-1;i++){
		cout<<char(t[i]);
	}
	
	
	return 0;
}
