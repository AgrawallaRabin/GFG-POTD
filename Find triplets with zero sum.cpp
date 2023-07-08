// Problem --> Find triplets with zero sum
// Difficulty --> Easy
// Date - 08/07/23
// Code -->

bool findTriplets(int arr[], int n)
{
    // Your code here
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int temp = arr[i] + arr[j] + arr[k];
            if (!temp)
                return true;
            else if (temp > 0)
                k--;
            else
                j++;
        }
    }
    return false;
}
