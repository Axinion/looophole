#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std;

int main() {
	// creation
	unordered_map<string, int> m;
	
	// insertion
	pair<string, int> p = make_pair("Mike", 2);
	m.insert(p);
	
	pair<string, int> p2("Sam", 4);
	m.insert(p2);
	
	m["Clark"] = 1;
	
	// count
	cout<<m.size()<<endl;
	
	cout<<m["Sam"]<<endl;
	cout<<m.at("Mike")<<endl;
	
	//cout<<m.at("z")<<endl; // will say does not exist and abort the program
	cout<<m["z"]<<endl; // this will create a new element
	cout<<m.at("z")<<endl;

    // to check presence
    cout<<m.count("Clark")<<endl;   // 1 if present
    cout<<m.count("Will")<<endl;    // 0 if not present
    
    // delete
    cout<<m.size()<<endl;
    m.erase("z");
    cout<<m.size()<<endl;
    
    // iterating
    
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    unordered_map<string, int> :: iterator it = m.begin();
    
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    
}
