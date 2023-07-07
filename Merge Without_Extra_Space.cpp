// Problem --> Merge Without Extra Space
// Difficulty --> Hard
// Date - 07/07/23
// Code ->

void merge(long long arr1[], long long arr2[], int n, int m)
{
    // code here
    int i = n - 1;
    int j = 0;
    while (i >= 0 && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            break;
        }
        else
        {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        }
    }
    sort(arr1, arr1 + n);
