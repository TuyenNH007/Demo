
#include <iostream>
#define SIZE 5
using namespace std;

int main(void)
{
    int arr[5] = {1, 2, 3, 3, 4};
    int arrFre[5];
    int count;
    for (int i = 0; i < 5; ++i)
    {
        arrFre[i] = -1;
    }

    // loop an element through array
    for (int i = 0; i < 5; ++i)
    {
        if(arrFre[i] != 0)
        {
            count = 1;
            for (int j = i + 1; j < 5; ++j)
            {
                // check element in i is same with j 
                if(arr[i] == arr[j])
                {
                    count++;
                    arrFre[j] = 0; // danh dau da di qua 
                }
            }
        }
        else
        {
            // element already calculated
            continue;
        }
        // Sum of frequency
        arrFre[i] = count;
    }

    // In tần số xuất hiện của các phần tử
    for(int i = 0; i < 5; i++) {
        if(arrFre[i] != 0) {
            cout << arr[i] << " " << arrFre[i] << endl;
        }
    }
}