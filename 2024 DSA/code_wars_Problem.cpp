// Question 1 :
// Write the solution of find multiples of 3 and 5 upto given number and returns the output of them after adding them.

#include <iostream>
#include <vector> // Include the vector library
using namespace std;

int solution(int number) 
{ 
    int sol = 0;
    std::vector<int> ans; // Declare a single vector to store numbers

    // Collect all numbers divisible by 3 or 5 up to 'number'
    for (int i = 0; i < number; i++) // We don't need to include 'number' itself
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            ans.push_back(i); // Add the number to the vector
        }
    }

    // Sum all the elements in the vector
    for (int i = 0; i < ans.size(); i++)
    {
        sol += ans[i]; // Add each number in the vector to 'sol'
    }

    return sol;
}

int main() // Correct main function declaration
{
    int num = 50;
    int answer = solution(num);
    cout << "The answer is: " << answer << endl; // Proper output statement
    return 0;
}

cout<<"code wars solution file\n";

