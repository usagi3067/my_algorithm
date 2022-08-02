#include <algorithm>



/**
 * @brief 冒泡排序
 * 算法不变性： 执行k趟扫描交换后， 最大的k个元素就位
 * 算法单调性： 执行k趟扫描交换后， 问题规模减一
 * 算法正确性： 基于不变性以及单调性， 算法必然正确终止。  
 * @param A  不妨假设对象为整数序列
 * @param n  序列规模
 */
void bubble_sort(int A[], int n)
{
	for (bool sorted = false; !sorted; n--)  //逐躺扫描交换， 直至完全有序
	{
		sorted = true;
		for (int i = 1; i < n; i++)    // 执行扫描交换 
		{
			if (A[i - 1] > A[i])  //若发现逆序
			{
				std::swap(A[i - 1], A[i]);
				sorted = false;   // 若发现有相邻元素逆序， 则不能保证整体有序， 必须清除有序标志  
			}
		}
	}
}
