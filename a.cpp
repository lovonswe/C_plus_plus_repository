#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pi 2*acos(0.0)

typedef vector<ll> vctr;
typedef vector<pair<ll,ll>> vp;
//cout << setprecision(1) << fixed << res << "\n";
//deque<ll> p,aa;
//vctr p;

//ll primes[10000000];
//#define mx 10000001
//bitset <mx> primes;
//vctr p;
//void prime();


//void prime();
//long long power(long long base, long long power);
vctr primes(1e7),p;
void prime()
{
    primes[0]=1;
    primes[1]=1;

    ll i,j,k=1e7;

    for(i=3; i*i<k; i++)
    {
        if(primes[i]==0)
        {
            for(j=i*i; j<k; j+=(i*2))
            {
                primes[j]=1;
            }
        }
    }

    p.push_back(2);
    for(i=3; i<k; i+=2)
    {
        if(primes[i]==0)
            p.push_back(i);
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    prime();

    while(t--)
    {
        ll n;
        cin >> n;

        ll l,r;
        l=n/2;
        l=max(3ll, l+1);
        r=n;
//cout << "l : " << l << "  r : " << r << endl;
        auto y=upper_bound(p.begin(), p.end(), r)-p.begin();
        auto x=upper_bound(p.begin(), p.end(), l)-p.begin();

        ll pos=x, pp=y;
        pos--;
        pp--;
        //cout << "pos : " << pos << "  pp : " << pp << endl;
        if(p[pos]<l)
            pos++;
        //cout << "pos : " << pos << "  pp : " << pp << endl;
        ll ans=1;
        if(pp-pos>=0)
            ans+=(pp-pos+1);

        cout << ans << endl;
    }
}

/*
                for(i=0; i<l; i++)
                        {
                            if(i==0)
                            {
                                s=i;
                            }
                            else if(a[i]!=a[i-1])
                                s=i;
                            if(i==l-1)
                            {
                                e=i;
                                k = e-s+1;

                            }
                            else if(a[i]!=a[i+1])
                            {
                                e=i;
                                k=e-s+1;

                            }
                        }


*/
/*

all combination of the array  a[20] of size <= 20
ll n=20;
    for(int mask = 0; mask < (1 << n); mask++)
    {
    long long sum_of_this_subset = 0;
    for(int i = 0; i < n; i++) {
        if(mask & (1 << i)) {
            sum_of_this_subset += a[i];
        }
    }

    a.push_back(sum_of_this_subset);
}

*/

/*


void prime(){
    primes[0]=1;
    primes[1]=1;

    ll i,j,k=100005;
    for(i=4; i<k; i+=2)
        primes[i]=1;

    for(i=3; i*i<k; i++){
        if(primes[i]==0){
            for(j=i*i; j<k; j+=(i*2)){
                primes[j]=1;
            }
        }
    }


     for(i=0; i<k; i++){
        if(primes[i]==0)
            p.push_back(i);
     }

}

*/

/*
prime factor

ll prime_factor(ll u){
    ll l=p.size(), ans=0;
    for(ll i=0; i<l; i++){
        if(p[i]*p[i]<=u){
            while(u%p[i]==0){
                // p[i] is a prime factor of u;
            }
        }
        else break;
    }
    if(u>1){
        // u is also a prime factor of the initial u;
    }



}

*/

// big mod-1;
/*
long long power(long long base, long long power)
{
    long long temp, i, ans;

    vector<long long> v;
    i=0;
    while(power>=1)
    {

        temp = power/2;
        if((power-temp)%2!=0)
        {
            v.push_back(1);
            power=temp;
        }
        else
        {
            v.push_back(0);
            power=temp;
        }

    }

    reverse(v.begin(), v.end());

    ans = base;
    temp=v.size();
    long long INF=1000003;
    for(i=0; i<temp-1; i++)
    {
        if(v[i]==v[i+1])
        {
            ans = ((ans%INF)*(ans%INF))%INF;
            v[i+1]=0;
        }
        else
        {
            ans = ((ans%INF)*(ans%INF))%INF;
            ans = ((ans%INF)*(base%INF))%INF;
            v[i+1]=1;
        }
    }

   return ans;

}

multiply string a by integer z

string mul(string a, ll z){
    ll len=a.size(), i, j=0,carry=0;
    string ans="";
    for(i=len-1; i>=0; i--){
        carry=((a[i]-'0')*z+carry);
        ans+=carry%10+'0';
        carry/=10;
    }
    while(carry!=0){
        ans += carry % 10  + '0';
    carry /= 10;
    }
    return ans;
}



//one=number one , bit=number of bit;
ll countonein_n(ll n)
{
    bit++;
    if(n%2==1)
    one++;

    if (n > 1)
        countonein_n(n>>1);
    return cnt;
}
*/
