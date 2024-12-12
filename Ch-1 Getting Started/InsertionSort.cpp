#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    //The sequence will be sorted till i after each of this iteration
    for (int i = 1; i < n; i++) {
        int j = i;
        int elem = A[i];
        A.erase(A.begin() + i);
        while (j >= 0) {
            if (j == 0 || elem > A[j - 1]) {// This sorts in non-decreasing order.
                // Replacing the > sign here with < will sort in a non-increasing order.
                A.insert(A.begin() + j, elem);
                break;
            }
            j--;
        }
    }
    cout << "Sorted Sequence\n";
    for (int elem : A) cout << elem << ' ';
}