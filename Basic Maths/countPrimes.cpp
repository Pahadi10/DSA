// Count number of prime numbers between 1 to n

#include <iostream>
#include <vector>
using namespace std;

// Method - 1
// Brute force / Naive Method
// T.c - O(n^2) / O(n * sqrt(n))

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    // for (int i = 2; i < n; i++)  // Here i runs till n
    // with this overall t.c of the countPrimes func is: O(n^2)

    for (int i = 2; i * i <= n; i++) // Optimizing this, we can run i till sqrt(n)
    // with this overall t.c of the countPrimes func is: O(n * sqrt(n))
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrimes(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }

    return count;
}

// Method - 2
// Seive Method
// T.c - O(n * Log(Log(n)))

int countPrimes2(int n)
{
    vector<bool> sieve(n, true);
    int count = 0;
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i < n; i++)
    {
        if (sieve[i])
        {
            count++;
            int j = i * 2;
            while (j < n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Give value of N: ";
    cin >> n;
    cout << "Using Naive method: " << countPrimes(n) << endl;
    cout << "Using Seive method: " << countPrimes2(n) << endl;
}