#include <bits/stdc++.h>
#define endl '\\n'
using namespace std;
 
int days[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int stroke[] = {13, 1, 2, 3, 5, 4, 4, 2, 2, 2};
 
bool check(int x)
{
	int y = x / 10000;
	int m = x % 10000 / 100;
	int d = x % 100;
	if(!m || m > 12 || !d)
	{
		return false;
	}
	if(m != 2)
	{
		if(d > days[m])
		{
			return false;
		}
	}
	else
	{
		int leap = (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
		if(d > 28 + leap)
		{
			return false;
		}
	}
	return true;
}
 
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int ans = 0;
	for(int i = 20000101; i <= 20240413; i++)
	{
		if(check(i))
		{
			int tmp = i, cnt = 0;
			while(tmp)
			{
				cnt += stroke[tmp % 10];
				tmp /= 10;
			}
			if(cnt > 50)
			{
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
