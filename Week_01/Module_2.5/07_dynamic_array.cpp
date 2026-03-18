#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;//Enter the size of array A

    int* A = new int[N]; // dynamically allocate array A
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int M;
    cin >> M;//Enter the size of array B

    int* B = new int[M]; // dynamically allocate array B

    // copy elements from array A to array B
    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
    }

    delete[] A; // delete array A

    // take input for the rest of the elements of array B
    for (int i = N; i < M; i++)
    {
        cin >> B[i];
    }

    // print array B
    cout << "Array B: ";
    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }
    
    delete[] B; // delete array B


   
    return 0;
}