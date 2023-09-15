#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    //creation
    unordered_map<string, int> mp;


    //insertion
    pair<string, int> p = make_pair("Scorpio", 9);
    mp.insert(p);

    pair<string, int> p2("alto", 2);
    mp.insert(p2);

    mp["Fortuner"] = 10;


    //access
    cout << mp.at("alto") << endl;
    cout << mp.at("Scorpio") << endl;

    cout << mp["Fortuner"] << endl;


    //search --> if present, return 1, otherwise 0
    cout << mp.count("Fortuner") << endl;
    cout << mp.count("Innova") << endl;

    //find
    if(mp.find("Fortuner") != mp.end()) {
        cout << "Fortuner found" << endl;
    }
    else {
        cout << "Fortuner not found" << endl;
    }


    //size
    cout << mp.size() << endl;

    // hummer is not present in the hasmap
    //so it will first create a entry for hummer & then returns 0
    cout << mp["hummer"] << endl;
    cout << mp.size() << endl;


    //printing all entries
    for(auto it: mp) {
        cout << it.first << " " << it.second << endl;
    }
    
    return 0;
}