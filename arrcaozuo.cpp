#include<stdio.h>


 main(){
int a[10];
int geshu,weizhi,shuju;

printf("�����������\n");
scanf("%d",&geshu);

printf("������%d������",geshu);
for(int i=0;i<geshu;i++){
	scanf("%d",&a[i]);

}
printf("�����������Ϊ");
for(i=0;i<geshu;i++){
	printf("%d",a[i]);

}
printf("\n");
//����
printf("��������Ҫ�����λ�ã�\n");
scanf("%d",&weizhi);
printf("��������Ҫ��������֣�\n");
scanf("%d",&shuju);

if(weizhi<geshu){
	for(int k=geshu;k>=weizhi;k--){
		a[k]=a[k-1];
		a[k-1]=shuju;
	}


}
else{
printf("��������");
}


printf("�����������Ϊ");
for( i=0;i<geshu+1;i++){
	printf("%d",a[i]);
}
//ɾ������
printf("\n");
printf("��������Ҫɾ����λ�ã�");


scanf("%d", &weizhi);
if(weizhi<=geshu){
	for(int k=weizhi;k<=geshu;k++){
		a[k-1]=a[k];
	
	}

}


printf("�����������Ϊ");
for( i=0;i<geshu;i++){
	printf("%d",a[i]);
}
printf("\n");



// ɾ��ָ������Ԫ��
int b;
printf("��������Ҫɾ���ľ���Ԫ�أ�\n");
scanf("%d",&b);
for( i=0;i<geshu;i++){
	if(b==a[i]){
		for(int k=i+1;k<geshu;k++){
			a[k-1]=a[k];
		}
	}
}

printf("�����������Ϊ");
for( i=0;i<geshu-1;i++){
	printf("%d",a[i]);
}
printf("\n");



// ��λ

printf("������һ��Ԫ���Ա㶨λ\n");
int c;
int d=0;
scanf("%d",&c);
for(i=0;i<geshu-1;i++){
	if(c==a[i]){
		printf("��λΪ��%d��",i+1);
		d=d+1;
	}

}
if(d<1){
printf("Ԫ�ز���������");
}

return 0;
}