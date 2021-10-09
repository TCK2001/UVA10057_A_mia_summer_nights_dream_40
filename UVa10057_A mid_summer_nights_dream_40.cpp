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
		int in[n]={0},ans1=0,ans2=0,ans3=0; //ù��° ���� �� ���� ���� �� ���� �� ���ϴ°ǵ� �߰����� �� �۰� �Ǿ�����; 
		for(int i=0;i<n;i++) //�ι�°�� �� �������� ���� ���� ��ֳ�; 
		{
			cin>>in[i]; //���� �Է��Ѱ� ���� �Է����� ���� �����߿��� ��ֳ� , ���� ���� ���� 1 2 7 8 10 �̸� ans1�� 7 , ans2�� 1, ans3�� 1; 
		}
		sort(in,in+n); //�߰� �� ã�� ���ؼ� ���� ���ֱ�; 
		
		for(int i=0;i<n;i++)
		{
			if(n%2==1)
			{
				ans3=1; //Ȧ������ �߰����� �ϳ�; 
				ans1=in[(n-1)/2]; //0���� �����ؼ� 1�� ���࿩��; 
				if(in[(n-1)/2]==in[i])
				{
					ans2++; //������ ++; 
				}
			}
			else
			{
				ans1=in[n/2-1]; //���� ���� ¦���� �߰����� �ΰ���'; 
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
