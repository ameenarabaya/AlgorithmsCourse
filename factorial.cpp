#include <iostream>
 #include <chrono>
using namespace std;
using namespace chrono;
long long  ItrerativeFactorial(int n){
long long f = 1;
for(int i=n;i>0;i--)
    {
        f*=i;
        }
 return f;
}
long long recursiveFactorial(int n){
if(n==1)
 return 1;
 else
    return n*recursiveFactorial(n-1);
    }
int main()
 {
     int n;
    cin>>n;
      long long res;
 cout<< "the value is : "<< ItrerativeFactorial(n)<<endl;
 const int iterations = 10000;  // Adjust the number of iterations as needed
 // Measure time for iterative factorial
auto startIterative = high_resolution_clock::now();
  for (int i = 0; i < iterations; ++i)
    {
         ItrerativeFactorial(n);
          }
  auto endIterative = high_resolution_clock::now();
  auto durationIterative =duration_cast<microseconds>(endIterative - startIterative);
 cout << "Time taken by iterative factorial: " << durationIterative.count() << " microseconds" << endl;
 // Measure time for recursive factorial
  auto startRecursive = high_resolution_clock::now();
   for (int i = 0; i < iterations; ++i) {
recursiveFactorial(n);
  }
 auto endRecursive = high_resolution_clock::now();
auto durationRecursive = duration_cast<microseconds>(endRecursive - startRecursive);
 cout << "Time taken by recursive factorial: " << durationRecursive.count() << " microseconds" << endl;
    return 0;
}
