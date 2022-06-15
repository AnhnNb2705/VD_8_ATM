#include<stdio.h>
#include<math.h>

main()
{
    int a,b,c,d,i;
   	int luaChon;
   	char check;
    do
    {
    printf("Moi ban nhap vao ma the hop le: ");
    scanf("%d",&a);
    printf("Nhap vao mat khau cua ban:");
    scanf("%d",&b);
    if(a==123 && b==456)
    {
        printf("\nTai khoan hop le.\n");
        int luaChon;
    printf("\n  Menu \n1.Rut tien.\n2.Chuyen khoan.\n3.Xem so du. \n4.Ket thuc\n");
    scanf("%d",&luaChon);
    do
    {
    	
    switch(luaChon)
        {
        case 1:
        	{
            printf("Nhap vao so tien ban can rut:");scanf("%d",&c);
            printf("\nBan da rut tien thanh cong\n");
            break;
        	}
        case 2:
        	{
            printf("Nhap vao so tien ban muon chuyen:");scanf("%d",&d);
            printf("Ban da chuyen tien thanh cong.");
            break;
        	}
        case 3:
        	{
            printf("So du cua ban la:");
            break;
        	}
        case 4:
			{
			printf ("\nKet thuc");
			break;
			} 
    	}
        printf ("\nBan co muon tiep tuc khong Y/N: ");
        fflush (stdin);
		scanf ("%c", &check);
  	}
    while (check ==  'Y' || check == 'y'); 
	}
    else
       {
       	printf("Tai khoan khong hop le!\n");
        printf("\nMoi ban nhap lai.\n");
       }
    }
    while(a!=123 || b!=456);
    
}

