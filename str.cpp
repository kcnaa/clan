#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[100];
	int list[128] = {0};
	scanf("%[^\n]", str);
	/*
	scanf本意為 "掃描鍵盤上被按下的按鍵" ，而 "%s" 遇到空白、enter等會視為輸入結束。
	"%[]" 用來掃描 [] 內的字元，"\n" 代表按下 enter，"^" 代表補集合。
	故 "%[^\n]" 代表 「掃描所有鍵盤上除了 enter 以外被按下的按鍵」，就是說空白會被記錄，而非視為輸入結束。 
	*/
	for(int i = 0; str[i] != '\0'; i++)
	{
		int theAscii = (int)str[i];//將輸入字串中的字元轉成 Asciic 後存入 theAscii 
		list[theAscii]++;//在對應的變數中 +1，代表出現次數 +1 
	}
	
	for(int i = 0; i < 128; i++)//所有ascii編碼刷一遍 
	{
		if(list[i] != 0)//如果對應的出現次數 > 0 
		{
			char theChar = (char)i;//將 i ascii 所代表的字元存到 theChar 
			printf("\"%c\"出現%d次\n",theChar, list[i]);//印出 theChar 和出現幾次 
		}
		else
		{
			continue;//如果出現 0 次就直接不印了 
		}
	}
}
