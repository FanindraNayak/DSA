#include <iostream>
#include <vector>

using namespace std;

/**
 * Creating a vector
 * ! Vector are dynamic in nature
 * ? The vector are dynamic array for which we do not have to define the size it allocates memory accordingly
 */

void print(vector<int> &arr)
{
    cout << endl;
    for (auto pr : arr)
    {
        cout << pr << " ";
    }
    cout << endl;
}

int main()
{

    // Initiating a vector

    vector<int> vec;

    // Inserting a value in the vector

    vec.push_back(1);
    vec.push_back(2);

    // Printing the vector
    print(vec);

    // deleting the last element of the vector
    vec.pop_back();

    print(vec);

    // getting the size of the vector

    int size = vec.size();

    cout << size << endl;

    // Accessing the element of the vector

    cout << vec[0] << endl;

    return 0;
}