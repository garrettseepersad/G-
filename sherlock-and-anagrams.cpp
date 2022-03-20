#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/**
 *
 * Problem Statement-
 * [Sherlock and Anagrams](https://www.hackerrank.com/challenges/sherlock-and-anagrams/)
 *
 */

/*
 * Complete the 'sherlockAndAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int sherlockAndAnagrams(string s) {
    map<string, int> counts;
    for (int i = 0; i < s.size(); i++){
        for (int j = 1; i+j <= s.size(); j++) {
            string s2 = s.substr(i, j);
            sort(s2.begin(), s2.end());
            counts[s2]++;
        }
    }

    int ans = 0;
    for (map<string, int>::iterator it = counts.begin(); it != counts.end(); it++) {
        ans += it->second * (it->second - 1)/2;
    }

    return(ans);
}

int main()
{
    string s = "abba";
    int result = sherlockAndAnagrams(s);
    cout << result << "\n";
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
