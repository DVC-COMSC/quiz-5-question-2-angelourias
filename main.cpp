#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   
   cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;

   if (N <= 0 || N >= 10 || M < 1 || M > 10) {
      cout << "Invalid input range. Please enter valid values." << endl;
      return 1;
   }

   int result = 1;
  
}
