#include<bits/stdc++.h>
using namespace std;

class TrieNode {
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char d) {
        this->data = d;
        for(int i=0; i<26; i++) {
            children[i] = NULL;
        }
        this->isTerminal = false;
    }


};

void insertWord(TrieNode* root, string word) {
    // cout << "Inserting " << word << endl;

    //base case
    if(word.length() == 0) {
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
      
    //present
    if(root->children[index] != NULL) {
        child = root->children[index];
    }
    else {
        //not present
        child = new TrieNode(ch);
        root->children[index] = child;
    }

    //RE
    insertWord(child, word.substr(1));
}

void printSuggestions(TrieNode* curr, vector<string>& temp, string& prefix) {
    if(curr->isTerminal) {
        temp.push_back(prefix);
    }

    //a to z tak choices de do
    for(char ch = 'a'; ch <= 'z'; ch++) {
        int index = ch - 'a';

        TrieNode* next = curr->children[index];

        if(next != NULL) {
            //if child exists
            prefix.push_back(ch);
            printSuggestions(next, temp, prefix);
            prefix.pop_back();
        }
    }
}

vector<vector<string> > getSuggestions(TrieNode* root, string input) {

    TrieNode* prev =  root;
    vector<vector<string> > output;
    string prefix = "";

    for(int i=0; i<input.length(); i++) {
        char lastCh = input[i];

        int index = lastCh - 'a';
        TrieNode* curr = prev->children[index];

        if(curr == NULL) {
            break;
        }
        else {
            //we will store all suggestions in this
            vector<string> temp;
            prefix.push_back(lastCh);
            printSuggestions(curr, temp, prefix);
            
            output.push_back(temp);
            prev = curr;
            temp.clear();
        }
    }

    return output;
}


int main()
{
    vector<string> v;
    v.push_back("love");
    v.push_back("lover");
    v.push_back("loving");
    v.push_back("last");
    v.push_back("lost");
    v.push_back("lane");
    v.push_back("lord");

    string input = "lovi";

    TrieNode* root = new TrieNode('\0');
    for(int i=0; i<v.size(); i++) {
        insertWord(root, v[i]);
    }

    vector<vector<string> > ans = getSuggestions(root, input);
    
    cout << "printing the suggestions" << endl;
    for(auto i: ans) {
        for(auto j: i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}