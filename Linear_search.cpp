// Linear search in cpp

#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    int arr[size], i, num, index;
    cout << "Enter  Numbers: ";
    for (i = 0; i < size; i++)
        cin >> arr[i];
    cout << "\nEnter a Number to Search: ";
    cin >> num;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            index = i;
            break;
        }
    }
    cout << "\nFound at Index No." << index;
    cout << endl;
    return 0;
}
