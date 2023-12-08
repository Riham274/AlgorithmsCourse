#include <iostream>
#include <ctime>

using namespace std;

long long int iterativefact(long long int n)
{long int fact = 1;
 for (long long int i = 1; i <= n; i++)
      fact *= i;
 return fact;
}

/*long long int recursivefact(long long int n)
{if (n == 1)
     return 1;

else
   return n * recursivefact (n - 1);
}
*/


int main()

{clock_t start,end;
 double executionTime;
 start = clock();

 long long int n;
 cout << "Enter a number (n): ";
 cin >> n;

 if (n <= 0)
    {
     cout << "Please enter a positive integer." << endl;
    }


 else
     {long long int result= iterativefact(n);
      //long long int result= recursivefact(n);
      cout<<"The fact of " << n << " is: " << result<<endl;
     }


 end=clock();
 executionTime=(double)(end-start)/CLOCKS_PER_SEC;
 std::cout<<"time is ="<<executionTime<<" second" <<std::endl;

 return 0;
