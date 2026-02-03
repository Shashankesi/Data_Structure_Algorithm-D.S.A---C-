#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        const int MAX = 1e6 + 1;
        vector<bool> isPrime(MAX, true);
        isPrime[0] = isPrime[1] = false;

        // Step 1: Sieve of Eratosthenes to find all primes up to right
        for (int i = 2; i * i < MAX; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < MAX; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Step 2: Collect prime numbers in the range [left, right]
        vector<int> primes;
        for (int i = left; i <= right; i++) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }

        // Step 3: Find the closest prime pair
        if (primes.size() < 2) return {-1, -1};  // Not enough primes

        int minDiff = INT_MAX;
        vector<int> result(2, -1);

        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                result = {primes[i - 1], primes[i]};
            }
        }

        return result;
    }
};

int maxDiag=0;
int maxArea=0;

for(int i=0; i<n;i++){
    int l= d[i][0];
    int w=d[i][1];
    int diag= l*l + w*w;
    int area= l*w;

    if(diag>maxDiag){
        maxDiag=diag;
        maxArea=area;
    }else if(diag=maxDiag){
        maxArea=max(maxArea,area);
    }
    return maxArea;
}
