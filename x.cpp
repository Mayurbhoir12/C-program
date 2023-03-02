#include <iostream>
#include <vector>
using namespace std;
 
int findAndSum(int arr[], int n)
{

    int sum = 0;

    int mul = 1;
 
    for (int i = 0; i < 30; i++) 
    {
        bool count_on = 0;

        int l = 0;

        for (int j = 0; j < n; j++) 
        {
            if ((arr[j] & (1 << i)) > 0)s
                if (count_on)
                    l++;
                else 
                {
                    count_on = 1;
                    l++;
                }
 
            else if (count_on) 
            {
                sum += ((mul * l * (l + 1)) / 2);
                count_on = 0;
                l = 0;
            }
        }
 
        if (count_on) 
        {
            sum += ((mul * l * (l + 1)) / 2);
            count_on = 0;
            l = 0;
        }

        mul *= 2;
    }

    return sum;
}

int main()
{
    
    int n;
    cin >> n;

    vector<int> v(n);

    for( int i = 0 ; i < n ; i++)
    {
       cin >> v[i];
    }
 
    cout << findAndSum(v, n);
 
    return 0;
}