#include <stdio.h>


int main(int argc, char const *argv[])
{
    int geshu,weizhi,shuzi;
    int a[10];
    printf("���������:");
    scanf("%d",&geshu);
    printf("������%d������:",geshu);

    for (int i = 0; i < geshu; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("�����������Ϊ");
    for (int i = 0; i < geshu; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    printf("��ѡ�����λ��");
    scanf("%d",&weizhi);
    printf("��ѡ��������");
    scanf("%d", &shuzi);
    if(weizhi<geshu){
    for (int k = geshu; k>=weizhi ; k--)
    {
        a[k]=a[k-1];
        a[k-1] = shuzi;
    }}
    
    printf("�����������Ϊ");
    for (int i = 0; i < geshu+1; i++)
    {
        printf("%d", a[i]);
    }


    printf("ɾ����λ��");
    scanf("%d",&weizhi);

    if (weizhi<=geshu+1)
    {
        for (int k = weizhi; k <geshu+1 ; k++)
        {
            a[k-1]=a[k];
        }
        
    }
    printf("�����������Ϊ");
    for (int i = 0; i < geshu ; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
