
#include<iostream>
using namespace std;


int main()
{
	{//2.6.2节
		int i = 5, j = 3;
		double k = i / static_cast<double>(j); //强制将j转化为double 类型
	}

	{//2.6.2节
		double i = 5., j = 3.;
		int k = static_cast<int>(i / j);//强制将i / j的结果转化为int
	}

	{//2.6.2节
		int i = 5, j = 3;
		double k = i / (double)j; //强制将j 转化为double类型
	}

	{//2.6.2节
		int i = 5, j = 3;
		double k = i / double(j);
	}
	return 0;
}

