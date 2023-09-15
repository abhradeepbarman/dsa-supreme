#include<bits/stdc++.h>
using namespace std;

class TrieNode {
    public:

    char data;
    TrieNode* children[26];
    int childCount;
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for(int i=0; i<26; i++) {
            children[i] = NULL;
        }
        childCount = 0;
        isTerminal = false;
    }
};

class Trie {
    public:
    TrieNode* root;

    Trie(char ch) {
        root = new TrieNode(ch);
    }

    void insert_util(TrieNode* root, string word) {
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
            root->childCount++;
            root->children[index] = child;
        }

        //RE
        insert_util(child, word.substr(1));
    }

    void insertWord(string word) {
        insert_util(root, word);
    }

    void lcp(string str, string& ans) {

        //edge case
        if(root->isTerminal) {
            return;
        }

        for(int i=0; i<str.length(); i++) {
            char ch = str[i];

            if(root->childCount == 1) {
                ans.push_back(ch);
                //aage badh jaao
                int index = ch - 'a';
                root = root->children[index];
            }  
            else {
                break;
            }

            if(root->isTerminal) {
                break;
            }
        }
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        Trie* t = new Trie('\0');

        //insert all strings into trie
        for(int i=0; i<strs.size(); i++) {
            
            if(strs[i] == "") {
                return "";
                break;
            }
            
            t->insertWord(strs[i]);
        }

        string first = strs[0];
        string ans = "";

        t->lcp(first, ans);
        return ans;
    }
};

int main()
{
    
    return 0;
}