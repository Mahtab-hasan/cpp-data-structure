#include <iostream>
using namespace std;

// Function to calculate the sum of all values of plant trees at the Yth year
int sumOfPlantTrees(int Y)
{
    if (Y == 1)
    {
        return 1; // Base case: The initial tree has a value of 1
    }

    // Calculate the sum of all values of the plant trees at the (Y-1)th year
    int sumPreviousYear = sumOfPlantTrees(Y - 1);

    // Calculate the sum of all values of the plant trees at the Yth year
    int sumCurrentYear = sumPreviousYear + sumPreviousYear;

    return sumCurrentYear;
}

int main()
{
    int Y;
    cin >> Y; // Read the input year Y

    int result = sumOfPlantTrees(Y); // Find the sum of all values of plant trees at Yth year

    cout << result << endl; // Print the result

    return 0;
}
