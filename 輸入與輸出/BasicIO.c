#include <stdio.h>

int main()
{
	int a = 3; // ����ܼ� a ����Ӱ򥻤��� (��ƫ��A �M �ƭ�) 
    printf("int a = %d;\n", a); // �w�]�u�|��X�ƭ� 
    printf("&a = %d\n", &a); // "&" �@�ά����o����ܼƪ���} (������ƫ��A)
    
    // �o�̪� "*" �ëD���СA�ӬO "�����B��l"�A�@�ά����o���аѷ� (��Ӧ�}�ܼ�) ���ȡA�è̾ڸ�ƫ��A
	// �M�w�۾F�줸���^������ 
	printf("*&a = %d\n\n", *&a); 
	
	
	int *a_addr = NULL; 
	printf("int *a_addr = NULL;\n");
	printf("a_addr = %d\n", a_addr);
	printf("*a_addr = ?	(X)\n\n");
	
	printf("�Y�n���s�]�w����\n");
	a_addr = &a;
	printf("*a_addr = &a;	(X)\n");
	printf(" a_addr = &a;	(O)\n\n");
	
	printf("a_addr = %d\n", a_addr);
	printf("*a_addr = %d\n", *a_addr);
	printf("&a_addr = %d\n\n", &a_addr);
	
	//printf("*(int*)(a) = %d\n", *(int*)(a));
	printf("*(int*)(%d) = %d\n", &a, *(int*)(&a)); // �o�̪� " int* " �~�O���СA���Ф@�w�n���a��ƫ��A
	printf("(int*)(%d) = %d\n", &a, (int*)(&a));
	printf("=> ��ڤW��b�ܼ� a_addr �̭������e = (int*)(%d)\n\n", &a);
	printf("(int**)(%d) = %d\n", &a, (int**)(&a));
	printf("(int***)(%d) = %d\n", &a, (int***)(&a));
	printf("*(int**)(%d) = %d\n\n", &a, *(int**)(&a));
	
	
	int a_addr_addr = 0;
	
	printf("��J a_addr ����}: ");
	scanf("%d", &a_addr_addr);
	unsigned char a_addr_addr_1 = *(unsigned char*)a_addr_addr; // �Y�I�� "*(unsigned char*)"�A�ȷ|�O�d��} 
	unsigned char a_addr_addr_2 = *(unsigned char*)(a_addr_addr + 1);
	unsigned char a_addr_addr_3 = *(unsigned char*)(a_addr_addr + 2); 
	unsigned char a_addr_addr_4 = *(unsigned char*)(a_addr_addr + 3);
	 
	printf("(�̥k) a_addr_addr_1 �r����\"%c\" ,�ƭȬ� %d\n", a_addr_addr_1, a_addr_addr_1);
	printf("       a_addr_addr_2 �r����\"%c\" ,�ƭȬ� %d\n", a_addr_addr_2, a_addr_addr_2);
	printf("       a_addr_addr_3 �r����\"%c\" ,�ƭȬ� %d\n", a_addr_addr_3, a_addr_addr_3);
	printf("(�̥�) a_addr_addr_4 �r����\"%c\" ,�ƭȬ� %d\n",a_addr_addr_4, a_addr_addr_4);
	
	printf("�˵��W�z�|�Ӧr�� (�� %d byte) ���줸�`�M������ %d (%d byte)\n\n",
	 sizeof(a_addr_addr_1), &a, sizeof(a_addr_addr));
	
	
	
	short v = 14773; // -32768 ~ 32767
	printf("short v = %d\n", v);
	//printf("*v = %d\n", *v);
	printf("&v = %d\n", &v);
	
	int v_addr;
	
	printf("��J v ����}: ");
	scanf("%d", &v_addr);
	unsigned char v_addr_1 = *(unsigned char*)(v_addr);	
	unsigned char v_addr_2 = *(unsigned char*)(v_addr + 1);
	
	printf("(�k�b��) v_addr_1 �r����\"%c\" ,�ƭȬ� %d\n", v_addr_1, v_addr_1);
	printf("(���b��) v_addr_2 �r����\"%c\" ,�ƭȬ� %d\n", v_addr_2, v_addr_2);
	
	printf("�˵��W�z��Ӧr�� (�� %d byte) ���줸���`�M������ %d (%d byte)\n\n",
	 sizeof(v_addr_1), v, sizeof(v));
	
	
	int d = 104853; // -2147483648 ~ 2147483647 
	printf("int d = %d\n", d);
	printf("&d = %d\n", &d);
	
	int d_addr = 0;
	
	printf("��J a ����}: ");
	scanf("%d", &d_addr);
	unsigned char d_addr_1 = *(unsigned char*)d_addr; // �Y�I�� "*(unsigned char*)"�A�ȷ|�O�d��} 
	unsigned char d_addr_2 = *(unsigned char*)(d_addr + 1);
	unsigned char d_addr_3 = *(unsigned char*)(d_addr + 2); 
	unsigned char d_addr_4 = *(unsigned char*)(d_addr + 3);
	 
	printf("(�̥k) d_addr_1 �r����\"%c\" ,�ƭȬ� %d\n", d_addr_1, d_addr_1);
	printf(" d_addr_2 �r����\"%c\" ,�ƭȬ� %d\n", d_addr_2, d_addr_2);
	printf(" d_addr_3 �r����\"%c\" ,�ƭȬ� %d\n", d_addr_3, d_addr_3);
	printf("(�̥�) d_addr_4 �r����\"%c\" ,�ƭȬ� %d\n",d_addr_4, d_addr_4);
	
	printf("�˵��W�z�|�Ӧr�� (�� %d byte) ���줸�`�M������ %d (%d byte)\n\n",
	 sizeof(d_addr_1), d, sizeof(d));
	
	

    int b, c;
    printf("\n��J��Ʀr (��ܤ֤@�Ů�Τ@����ҥi):\n");
    printf("�H scanf(\"%%d%%d\", &b, &c) Ū�J\n");
    scanf("%d%d", &b, &c); // ��J�ɡA�L�״���ΪŮ��J�ҥi�A��J�`�ƺ��~�|���� 
    printf("b �Ȭ� %d, c �Ȭ� %d, b*c �Ȭ� %d\n", c, b, b*c);
    
	printf("\n�A�@��\n");
	printf("��J��Ʀr (��ܤ֤@�Ů�Τ@����ҥi):\n");
    printf("�H scanf(\"%%d%%d\", b, c) Ū�J\n");
    scanf("%d%d", b, c);
    printf("b �Ȭ� %d, c �Ȭ� %d, b*c �Ȭ� %d\n", c, b, b*c); // ���楼��ܥ��`�A�B�^�ǭȥ��w�D 0 
    
    printf("�d�N���椺�e�O�_�|���");
    
    
    return 0;
} 
