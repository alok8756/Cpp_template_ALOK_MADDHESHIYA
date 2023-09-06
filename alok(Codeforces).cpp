

/**          
        * 
        *                          Date:  01 August 2022, Monday 
        *                        <--- Username ID : alok_8756 --->
        *                          Template of  ALOK MADDHESHIYA
        * 
        *         ◦•●◉✿ 'ऊं भूर्भुव: स्व: तत्सवितुर्वरेण्यं भर्गो देवस्य धीमहि। धियो यो न: प्रचोदयात्।। ' ✿◉●•◦
        *           
 **/

/*----------------------------------------------------------------------------------------------------*/


/* All Header Files -------------------------------------------------------------------------------------*/

#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
// using namespace __gnu_pbds;

#define int long long int
typedef unsigned long long ull;
typedef long double lld;
#define endl "\n"
#define BigInt __int128


#define yes cout << "yes" <<"\n";
#define Yes cout << "Yes" <<"\n";
#define YES cout << "YES" <<"\n";
#define no cout << "no" <<"\n";
#define No cout << "No" <<"\n";
#define NO cout << "NO" <<"\n";
#define C(x) cout<<(x)<<"\n";
#define Cprecise(x) cout<<fixed<<setprecision(10)<<(x)<<"\n";

typedef pair<int,int> pii;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

#define lInt LLONG_MAX
#define MOD 1000000007
#define MOD1 998244353
#define ValueOfPI 3.141592653589793238462643383279502884
#define ValueofPIinString "3141592653589793238462643383279502884"

#define ff first
#define ss second
#define rt return
#define pb(x) push_back(x)
#define popb() pop_back()
#define Q queue<int>
#define DecSet set<int, greater<int>>
#define uset unordered_set<int>
#define ump unordered_map<int, int>
#define umset unordered_multiset<int>
#define maxiHeap priority_queue<int>
#define miniHeap priority_queue<int, vector<int>, greater<int>>
#define minipairHeap priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>
#define maxipairofpairHeap  priority_queue<pair<int,pair<int,int>>>
#define minipairofpairHeap   priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>



#define set_bits(x) __builtin_popcountll(x)
#define noOfBit(x) (int)log2(x)+1
#define noOfdigit(x) (int)log10(x)+1
#define sz(x) ((int)(x).size())

#define loop(n) for(int i = 0; i < (n); i++)
#define loopj(n) for(int j = 0; j < (n); j++)
#define loop1(n) for(int i = 1; i <= (n); i++)
#define loop1j(n) for(int j = 1; j <= (n); j++)
#define loopFrom(a,b) for(int i = a; i<=b;i++)

#define printa(v, n)             \
  for (int i = 0; i < n < ; i++) \
  cout << (v)[i] << " "
#define printv(v)   \
  for (auto &e : v) \
  cout << e << " "


#define lowerBound(x,a) lower_bound(x.begin(), x.end(), a) // agar element hoga to element ka index nhi hoga just greater element ka index return
#define upperBound(x,a) upper_bound(x.begin(), x.end(), a) // hmesa just greater value ka index deta h return 

#define sortvDec(x) sort(x.begin(),x.end(), greater<int>())
#define sortaDec(arr,n) sort(arr,arr+(n),greater<int>())
#define nextperutation(x) next_permutation(x.begin(),x.end())

#define maxiv(x) *max_element(x.begin(), x.end())
#define miniv(x) *min_element(x.begin(), x.end())
#define maxia(arr, n) *max_element(arr, arr + (n))
#define minia(arr, n) *min_element(arr, arr + (n))
#define sorta(arr,n)  sort(arr,arr+(n))
#define sortv(x) sort(x.begin(),x.end())
#define suma(arr,n,a) accumulate(arr,arr+(n),a)
#define sumv(x,a) accumulate(x.begin(),x.end(),a)


#define intToBinaryString(x) bitset<64>(x).to_string()
#define cubeRoot(x) cbrt(x)

// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

/*---------------------------DEBUG HELPER--------------------------------------*/
#ifndef ALOK_MADDHESHIYA
#define debug(x) cerr << #x <<" "; _print(x); cerr <<"\n";
#else
#define debug(x)
#endif

void _print(int x) {cerr << x;}
void _print(lld x) {cerr << x;}
void _print(ull x) {cerr << x;}
void _print(char x) { cerr << '\"' << x << '\"'; }
void _print(const string &x) { cerr << '\"' << x << '\"'; }
void _print(bool x) { cerr << (x ? "true" : "false"); }

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// r[i].resize(i + 1) like this resize the any vector according to need
// isdigit() for digit check
// isAlpha() for Alphabet check 
// stoi(str, position, int base)  string to int conversion

// check (a & (1<<i)) checking of ith bit is set or not
// set   (a | (1<<i))
// Unset (a & (~(1<<i))) unset the ith bit
// toggle (a^(1<<i)) the ith bit

// multiply or divide by number 2 ki power k => (n>>k) (n<<k)
// x modulo 2 ki power k => x & ((1<<k)-1)

// S.substr(index,length) for substring from the string 
// strupr(s) strlwr(s) for upercase and lower case convert string
// min({143,5,44,64}) max({2,5,8,5}) direct method to find minimum maximum for any number of element
// 2 ki power n best way 1<<n 
// for divide by 2 n>>=1 for multiply by 2 n<<=1
// for all power of 2 numbers => (n & (n-1)) equal to zero
// char D= (d & '_') lower to upper case
// char b= (b | ' ') upper to lower case
// for swapping of two numbers a=a^b; b=b^a; a=a^b;
// vector<int>nums set<int>(nums.begin(), nums.end()); assign like this for any stl containers
// binary number divisible 3 iff  sum of even place 1's minus the sum of the odd place 1's divisible  by 3. it is also  work as for 11.
// any binary number whose last 3 digits are 0 is divisible by 8.






// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };
 
//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

// comprator of pair 
bool cmpp(pii a,pii b){
    if(a.ff==b.ff) 
        rt a.ss<b.ss;
    rt a.ff>b.ff;
    // jo krna chahte ho return kro vhi
}

bool cmp(int a,int b) {
      rt a>b; // decreasing order krna h n to isiliye decreasing order return kiye h increasing order me a<b krte
}

int power(int a, int b, int mod) {
    int res = 1; 
    while (b) {
        if (b & 1)res = (res * a) % mod;
         a = (a * a) % mod;
          b >>= 1;
       } 
      rt res;
}
 
int mod_inverse(int n){
     return power(n, MOD - 2, MOD);
}

bool isPowerOfTwo(int x){
    rt x && (!(x&(x-1)));
}

int lcm(int a, int b) {
	return ((a * b) /__gcd(a, b));
}
int modWith_add(int a, int b, int M){
    a = a % M; 
    b = b % M; 
    return (((a + b) % M) + M) % M;
}
int modWith_mul(int a, int b, int M){
    a = a % M;
    b = b % M; 
   return (((a * b) % M) + M) % M;
}
int modWith_sub(int a, int b, int M){
    a = a % M; 
    b = b % M; 
    return (((a - b) % M) + M) % M;
}
//only for prime m
int modWith_div(int a, int b, int m){
    a = a % m;
    b = b % m; 
    return (modWith_mul(a, mod_inverse(b), m) + m) % m;
 }  

int const N = 1e7 + 10;
int facto[N], inversefacto[N];

void factoCalculation(){
    facto[0] = 1;
    for (int i = 1; i < N; i++)
        facto[i] = (facto[i - 1] * i) % MOD;
    inversefacto[N - 1] = mod_inverse(facto[N - 1]);
    for (int i = N - 2; i >= 0; i--)
        inversefacto[i] = (inversefacto[i + 1] * (i + 1)) % MOD;
}

int nCr(int n, int r){
    if (r > n)
        return 0;
    int ans = (facto[n] * inversefacto[r]) % MOD;
    ans = (ans * inversefacto[n - r]) % MOD;
    return ans;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int nearestPrime(int n)
{
    if (isPrime(n))
        return n;
    int smaller = n - 1, larger = n + 1;
    while (1)
    {
        if (isPrime(smaller))
            return smaller;
        else if (isPrime(larger))
            return larger;
        smaller--;
        larger++;
    }
}

bool isPalindrome(string &S){
         int l=S.length();
    for (int i = 0; i <(l/2); i++)
    {
        if (S[i] != S[S.length() - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
// complement of integer base 10
int bitwiseComplement(int n){
    int x=1;
    while(x<n)
        x=(x*2) + 1;     
    rt (x-n);
}

int countdigits(int n){
    int i, count = 0;
    i = n;
    while (i){
        count++;
        i /= 10;
    }
    rt count;
}
int countDigit(int n){
    string str=to_string(n);
    rt str.length();
}
int BinaryToDecimal(string& s){
    reverse(s.begin(), s.end());
    int res = 0, i = 1, j = 0;
    int n=s.length();
    while (j < n){
        if (s[j] == '1'){
            res += i;
        }
        i *= 2;
        j++;
    }
    rt res;
}

int firstDigit(int n){  // trick =>  to_string(n)[0]-'0' 
    while (n >= 10)
        n /= 10;
    rt n;
}

int lastDigit(int n){
    rt (n % 10);
}


string decimalToBinary(int n){
    string res="";
    if(n == 0)  rt "0";
    while (n){
        res += to_string(n%2);
        n /= 2;
    }
    reverse(res.begin(),res.end());
    rt res;
}

vi allPrimefactor(int n){
    vi res;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            res.pb(i);
            n /= i;
        }
    }
    if(n>1) res.pb(n);
    rt res;
}


vector<bool> isPrimeUptoN(int n) {
	vector<bool>prime(n + 1, true);
	prime[0] = false; prime[1] = false;
 
	for (int i = 2; i * i <= n ; i++){
        if(prime[i]){
		for (int j = 2 * i; j <= n; j += i)
			prime[j] = false;
        }
	}
	rt prime;
}

int countOfP(int n,int p){
	int ans = 0;
	while(n % p == 0){
		ans++;
		n /= p;
	}
	rt ans;
}


/*
 
1. Think Greedy
2. Brute Force
3. Solution in reverse order
4. Think DP [ check constraints carefully ]
5. Think Graph 

*/
 


void maddheshiya0010_solution(){ 
                       int n;
                       cin>>n;
                       
                 
                   
   
}

bool ispalin(stirng str){
    int s=0,e=str.length()-1;
    while(s<=e){
        if(str[s++]!=str[e--]) return false;
    }
    return true;
}

 int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            if(ispalin(to_string(i))) ans+=i;
        }
        return ans;
    }


int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

//    #ifndef ALOK_MADDHESHIYA
//    freopen("input.txt", "r" , stdin);
//    freopen("output.txt", "w", stdout);
//    #endif


            int nt=1;
           cin >> nt;


        while (nt--){


            maddheshiya0010_solution();


            }
      return 0;
}

 




















 