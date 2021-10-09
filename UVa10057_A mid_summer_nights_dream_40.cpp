/*
Sample Input
2
10
10
4
1
2
2
4
Sample Output
10 2 1
2 2 1
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int in[n]={0},ans1=0,ans2=0,ans3=0; //첫번째 답은 각 차의 합이 잴 작은 걸 구하는건데 중간값이 잴 작게 되어있음; 
		for(int i=0;i<n;i++) //두번째는 잴 작은값과 같은 값이 몇개있나; 
		{
			cin>>in[i]; //내가 입력한값 말고 입력하지 않은 값들중에는 몇개있나 , 예시 만약 값이 1 2 7 8 10 이면 ans1은 7 , ans2은 1, ans3은 1; 
		}
		sort(in,in+n); //중간 값 찾기 위해서 정렬 해주기; 
		
		for(int i=0;i<n;i++)
		{
			if(n%2==1)
			{
				ans3=1; //홀수면은 중간값이 하나; 
				ans1=in[(n-1)/2]; //0부터 시작해서 1을 빼줘여함; 
				if(in[(n-1)/2]==in[i])
				{
					ans2++; //같으면 ++; 
				}
			}
			else
			{
				ans1=in[n/2-1]; //같은 원리 짝수는 중간수가 두개임'; 
				ans3=in[n/2]-in[n/2-1]+1;
				if(in[n/2]==in[i])
				{
					ans2++;
				}
				else if(in[n/2-1]==in[i])
				{
					ans2++;
				}
			}
		}
		cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
	}
}
