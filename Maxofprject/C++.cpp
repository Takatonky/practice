
//==========================================================
//	�O�p�`��\������
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// �֐��v���g�^�C�v
void PrintTriangle(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("���i�̎O�p�`�ł���? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintTriangle(n);
	}
	return 0;
}

void PrintTriangle(int n)
{
     // �������R�[�f�B���O���܂��傤�B
     // ���ȏ���List1-11 ���Q�l�ɂ��Ă��������B
     // for�����Q�d�Ɏg���܂��B
}