#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[100];
	int list[128] = {0};
	scanf("%[^\n]", str);
	/*
	scanf���N�� "���y��L�W�Q���U������" �A�� "%s" �J��ťաBenter���|������J�����C
	"%[]" �Ψӱ��y [] �����r���A"\n" �N����U enter�A"^" �N��ɶ��X�C
	�G "%[^\n]" �N�� �u���y�Ҧ���L�W���F enter �H�~�Q���U������v�A�N�O���ťշ|�Q�O���A�ӫD������J�����C 
	*/
	for(int i = 0; str[i] != '\0'; i++)
	{
		int theAscii = (int)str[i];//�N��J�r�ꤤ���r���ন Asciic ��s�J theAscii 
		list[theAscii]++;//�b�������ܼƤ� +1�A�N��X�{���� +1 
	}
	
	for(int i = 0; i < 128; i++)//�Ҧ�ascii�s�X��@�M 
	{
		if(list[i] != 0)//�p�G�������X�{���� > 0 
		{
			char theChar = (char)i;//�N i ascii �ҥN���r���s�� theChar 
			printf("\"%c\"�X�{%d��\n",theChar, list[i]);//�L�X theChar �M�X�{�X�� 
		}
		else
		{
			continue;//�p�G�X�{ 0 ���N�������L�F 
		}
	}
}
