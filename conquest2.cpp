#include <iostream>
#include <string.h>
#include <map>
#include <iterator>
using namespace std;

int main() {
	char conquest[75];
	char country[75];
	string name;
	int n;
	cin>>n;
	map<string,int> conquests;
	for(int i=0;i<n;i++){
		scanf("%s",&conquest[0]);
		getline(cin,name);
		conquests[conquest]++;
	}
	for (auto it=conquests.begin();it!=conquests.end();++it){
		cout<<it->first<<" "<<it->second<<endl;
	}
    return 0;
}
