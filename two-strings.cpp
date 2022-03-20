#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/**
 * 
 * Problem Statement-
 * [Two Strings](https://www.hackerrank.com/challenges/two-strings/problem)
 * 
 */

/*
 * Complete the 'twoStrings' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

 string twoStrings(string s1, string s2)
{
    map<char,int> s1Map;
    auto s1Length = (int)s1.size();
    for (int ix = 0; ix < s1Length; ix++){
        auto findKey =  s1Map.find( s1[ix] );
        if  (findKey == std::end( s1Map )) {
            s1Map[s1[ix]] = 1;
        }
    }

    map<char,int> s2Map;
    auto s2Length = (int)s2.size();
    for (int ix = 0; ix < s2Length; ix++){
        auto findKey =  s1Map.find( s2[ix] );
        if  (findKey == std::end( s2Map )) {
            s2Map[s2[ix]] = 1;
        }
    }

    for (int ix = 0; ix < (int)s2Length; ix++){
        auto findKey =  s1Map.find( s2[ix] );
        if  (findKey != std::end( s1Map )) {
                return ("YES");
        }
    }

    return("NO");
}
int main()
{

        string s1 ="aaaa";

        string s2="bbbb";

        string result = twoStrings(s1, s2);


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
