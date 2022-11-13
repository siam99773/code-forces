
c++ solution


#include<iostream>
using namespace std;

int main(void) {
  long long int n;
  cin >> n;
  if (n%2) cout << 0;
  else cout << (n/2 -1)/2;
  return 0;
}




solutions. in c
#include <stdio.h>

int main()
{
    int i, n, p, k;
    long t;

    scanf("%ld", &t);
    if(t%2 !=0)
    {
        printf("0\n");
    }
    else
    {
        if(t%4==0)
        {
            printf("%ld\n", (t/4)-1);
        }
        else printf("%ld\n", t/4);
    }

    return 0
}
