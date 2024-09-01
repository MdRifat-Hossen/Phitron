#include <bits/stdc++.h>

using namespace std;

// Function to convert string to lowercase
string toLowerCase(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline character after the number of test cases

    while (T--)
    {
        string sentence;
        getline(cin, sentence);

        // Map to count occurrences of each word
        map<string, int> wordCount;
        // Map to record the first occurrence of each word
        unordered_map<string, int> firstOccurrence;

        stringstream ss(sentence);
        string word;
        int position = 0;

        // Read each word and update the map
        while (ss >> word)
        {
            string lowerWord = toLowerCase(word);
            if (wordCount.find(lowerWord) == wordCount.end())
            {
                firstOccurrence[lowerWord] = position; // Record the position of the first appearance
            }
            wordCount[lowerWord]++;
            position++;
        }

        // Find the word with the maximum count
        string maxWord;
        int maxCount = 0;
        int minPosition = INT_MAX;

        for (const auto &pair : wordCount)
        {
            if (pair.second > maxCount || (pair.second == maxCount && firstOccurrence[pair.first] < minPosition))
            {
                maxCount = pair.second;
                maxWord = pair.first;
                minPosition = firstOccurrence[pair.first];
            }
        }

        // Print the result for the current test case
        cout << maxWord << " " << maxCount << endl;
    }

    return 0;
}
