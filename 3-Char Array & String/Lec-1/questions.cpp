#include<bits/stdc++.h>
using namespace std;

int getLength(char ch[]) {
    int i=0;

    while(ch[i] != '\0') {
        i++;
    }
    return i;
}

void reverse(char ch[], int n) {
    int s = 0;
    int e = n-1;

    while(s <= e) {
        swap(ch[s], ch[e]);
        s++, e--;
    }
}

void replaceSpaces(char ch[]) {
    
    for(int i=0; ch[i] != '\0'; i++) {
        if(ch[i] == ' ') {
            ch[i] = '@';
        }
    }
}

bool checkPalindrome(char ch[]) {

    int s = 0;
    int e = strlen(ch) - 1;

    while(s <= e) {
        if(ch[s] != ch[e]) 
            return false;
        else 
            s++, e--;
    } 
    return true;
}

void convertUppercase(char ch[]) {

    for(int i=0; ch[i] != '\0'; i++) {

        if(ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] = ch[i] -'a' + 'A';
        }
    }
}

void convertLowercase(char ch[]) {

    int n = strlen(ch);
    for(int i=0; i<n; i++) {

        if(ch[i] >= 'A' && ch[i] <= 'Z') {
            ch[i] = ch[i] -'A' + 'a';
        }
    }
}

int main()
{
    char ch[100];
    cout << "Enter anything: ";
    // cin >> ch;
    cin.getline(ch, 50);
    
    // Length of String 
    // cout << "Length = " << getLength(ch) << endl;
    // pre defined function
    // cout << "length = " << strlen(ch) << endl;

    // Reverse a String
    // reverse(ch, strlen(ch));
    // cout << ch << endl;


    // Replace spaces with '@'
    // replaceSpaces(ch);
    // cout << ch << endl;

    // check palindrome
    // if(checkPalindrome(ch)) {
    //     cout << "Palindrome string!" << endl;
    // } else {
    //     cout << "Not a Palindrome String!" << endl;
    // }

    // Convert into Uppercase
    // convertUppercase(ch);
    // cout << ch << endl;

    // Convert into Lowercase
    // convertLowercase(ch);
    // cout << ch << endl;

    return 0;
}