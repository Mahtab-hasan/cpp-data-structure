#include <iostream>
using namespace std;

// Function to check if a character is a lowercase alphabet
bool isLowerCase(char c)
{
    return (c >= 'a' && c <= 'z');
}

// Function to apply the rules on the input string and build the final string
string applyRules(string &input)
{
    string result = "";
    int i = 0;

    while (i < input.length())
    {
        if (isdigit(input[i]))
        {
            // Apply rule for number N
            int n = input[i] - '0';
            i++; // Move to the next character

            string group = "";
            while (isLowerCase(input[i]))
            {
                // Append the group of alphabets (C) N times
                for (int j = 0; j < n; j++)
                {
                    group += input[i];
                }
                i++; // Move to the next character in the group
            }

            result += group;
        }
        else
        {
            // Append the operator to the final string
            result += input[i];
            i++; // Move to the next character
        }
    }

    return result;
}

int main()
{
    string input;
    cin >> input; // Read the input string

    string finalString = applyRules(input); // Apply the rules and get the final string

    cout << finalString << endl; // Print the final string

    return 0;
}
