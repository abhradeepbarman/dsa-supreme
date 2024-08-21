#include <bits/stdc++.h>
using namespace std;


// More Readable solution 
class Solution
{
    bool solve(string &s, string &p, int i, int j) {
        // base case
        if (i >= s.length() && j >= p.length()) {
            return true;
        }

        if (i >= s.length() && j < p.length()) {
            // s = "" , p = "*****"
            // if the chars of s are all consumed & p is not yet consumed, check if there are only * -> return true, otherwise false

            while (j < p.length()) {
                if (p[j] != '*') {
                    return false;
                }
                j++;
            }
            return true;
        }

        if (p[j] == '?') {
            // we'll just consume 1 character of s -> move i, j forward
            return solve(s, p, i + 1, j + 1);
        }
        else if (p[j] == '*') {
            // there are 3 cases
            // i. we'll consume 0 character -> move to j forward
            // ii. we'll consume just 1 character -> move i, j forward
            // iii. we'll consume more than 1 character -> move i forward

            return solve(s, p, i, j + 1) || solve(s, p, i + 1, j + 1) || solve(s, p, i + 1, j);
        }
        else {
            if (s[i] == p[j]) {
                // check for the next characters
                return solve(s, p, i + 1, j + 1);
            }
            else {
                // no need to check for the next chars -> return false
                return false;
            }
        }

        return false;
    }

public:
    bool isMatch(string s, string p) { 
        return solve(s, p, 0, 0); 
    }
};

// class Solution
// {
// public:
//     bool isMatch_util(string &s, string &p, int si, int pi)
//     {
//         // base case
//         if (si == s.size() && pi == p.size())
//         {
//             return true;
//         }
//         if (si == s.size() && pi < p.size())
//         {
//             while (pi < p.size())
//             {
//                 if (p[pi] != '*')
//                 {
//                     return false;
//                 }
//                 pi++;
//             }
//             return true;
//         }

//         // single character matching
//         if (s[si] == p[pi] || p[pi] == '?')
//         {
//             return isMatch_util(s, p, si + 1, pi + 1);
//         }

//         if (p[pi] == '*')
//         {
//             // treat '*' as empty or null
//             bool caseA = isMatch_util(s, p, si, pi + 1);

//             // let '*' consume one char.
//             bool caseB = isMatch_util(s, p, si + 1, pi);

//             return caseA || caseB;
//         }
//         // char doesn't match
//         return false;
//     }

//     bool isMatch(string s, string p)
//     {
//         int si = 0; // pointer index for s string
//         int pi = 0; // pointer index for p string

//         return isMatch_util(s, p, si, pi);
//     }
// };

int main()
{

    return 0;
}