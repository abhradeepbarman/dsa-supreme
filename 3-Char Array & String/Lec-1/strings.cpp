#include<bits/stdc++.h>
#include<strings.h>
using namespace std;

bool compareFunc(string str1, string str2) {

    if(str1.length() != str2.length()) {
        return false;   
    }

    int i=0, j=0;

    while(i<str1.length()) {
        if(str1[i] == str2[i]) {
            i++;
        }
        else {
            return false;
        }
    }
    return true;
}

int main()
{
    // // string create
    // string str;

    // // input
    // cin >> str;      // stop taking input when space, tab, enter
    // // getline(cin, str);

    // // output
    // cout << str << endl;

    // // length
    // cout << "length: " << str.length() << endl;

    // // empty or not
    // cout << "empty ot not: " << str.empty() << endl;

    // // push back
    // str.push_back('@');
    // cout << str << endl;

    // // pop back
    // str.pop_back();
    // cout << str << endl;

    // // sub string -- substr(starting position, length)
    // cout << str.substr(0,5) << endl;

    // compare() func
    // if equal, return 0

    // string str1 = "Love";
    // string str2 = "Lover";

    // pre defined func
    // if(str1.compare(str2) == 0) {
    //     cout << "both are excatly same string" << endl;
    // } else {
    //     cout << "they are not same string" << endl;
    // }

    // implementing compare func
    // if(compareFunc(str1, str2)) {
    //     cout << "Both are equal" << endl;
    // } else {
    //     cout << "Not equal" << endl;
    // }

    // Find() func
    // string sentence = "hello guys this is abhra over here";
    // string target = "everyone";

    // if(sentence.find(target) == string::npos) {
    //     cout << "Not found" << endl;
    // } else {
    //     cout << "target Found" << endl;
    // }


    string sentence = "This is first message";
    string str = "second";

    // Replace() func
    // cout << sentence.replace(8, 5, str) << endl;    

    // Erase() func 
    // cout << sentence.erase(7, 6) << endl;


    return 0;
}