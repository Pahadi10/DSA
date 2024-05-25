// Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.

#include <iostream>
#include <vector>
#include <set>
using namespace std;

// method 1
vector<int> commonElements(int A[], int B[], int C[], int sizeA, int sizeB, int sizeC)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int x = 0;

    vector<int> common;
    // It will break for the case where there are repeating common elements, so we are using sets;
    set<int> st;
    
    while (i < sizeA && j < sizeB && k < sizeC)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            // common.push_back(A[i]);
            // insert in set instead of vector to avoid duplicate elements;
            st.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    // Iterating over set to push all sets element to common vector 
    
    for (auto i : st)
    {
        common.push_back(i);
    }
    return common;
}
int main()
{ 
    int A[] = {1, 5, 10, 20, 40, 80};
    int sizeA = 6;
    int B[] = {6, 7, 20, 80, 100};
    int sizeB = 5;
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int sizeC = 8;
    vector<int> common = commonElements(A, B, C, sizeA, sizeB, sizeC);
    for (int i = 0; i < common.size(); i++)
    {
        cout << common[i] << " ";
    }
    return 0;
}
