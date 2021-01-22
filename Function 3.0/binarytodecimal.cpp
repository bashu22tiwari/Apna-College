// In this we will be writing a program where we will convert binary to decimal

 #include<iostream>
 using namespace std;

 int pow(int a,int b)
 {
     int ans=1;
     for(int j=0; j<b ; j++)
     {
         ans*=a;
     }
     return ans;
 }

 int main()
 {
    int n,rem,i,ans=0;
    cout << "Enter N\n" ;
    cin >> n ;
    i=0;
    while(n>0)
    {
        rem=n%10;
        ans += (rem*pow(2,i));
        n=n/10;
        i++;
    }
    cout << ans;
 }