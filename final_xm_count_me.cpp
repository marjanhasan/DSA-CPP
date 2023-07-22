#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        map<string, int> mp;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word, name;
        int mx = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > mx)
            {

                mx++;
                if (mp[word] == mx)
                    name = word;
            }
        }
        cout << name << " " << mx << endl;
    }
    return 0;
}
/*
Start the main function:
Initialize an integer variable T to store the number of test cases.
Read the number of test cases T from the input.
Process each test case using a loop:
Run a loop T times, where T is the number of test cases.
For each test case, do the following:
Create an empty map mp to store the count of each word encountered in the string.
Declare a string variable s to store the input string for the current test case.
Read the entire input line (including whitespaces) and store it in the variable s.
Implement the word counting logic:
Create a stringstream ss using the input string s.
Initialize two string variables word and name, where word will be used to store individual words from the stringstream, and name will store the most frequent word found so far.
Initialize an integer variable mx to store the count of the most frequent word found so far. Set it to INT_MIN initially to make sure it gets updated correctly.
Loop through the stringstream:
Use a while loop to iterate through the words in the stringstream ss.
For each word encountered, update its count in the mp map.
*Update the value of mx to hold the maximum count among all words seen so far.
*If the count of the current word is equal to the updated maximum count, update the name variable to store the current word. This ensures that name holds the last word that had the maximum count.
Print the result:
After processing all words in the stringstream, you will have the most frequent word and its count stored in the variables name and mx, respectively.
Print the most frequent word and its count for each test case.
End the main function.
*/