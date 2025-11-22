// ...existing code...
#include <stdio.h> 
#include <math.h>
#include <stdlib.h>//Thieu thu vien se bi canh bao ve ham Exit
int main(){
    int luaChon; //kiểu số nguyên
        printf("\nChào mừng bạn đến với ASM của tôi");
        printf("\nNhập 1: Lựa chọn chức năng Số nguyên");
        printf("\nNhập 2: Lựa chọn chức năng tìm UCLN và BCNN");
        printf("\nNhập 3: Lựa chọn chức năng Tính tiền quán Karaoke");
        printf("\nNhập 4: Lựa chọn chức năng Tính tiền điện");
        printf("\nNhập 0: Thoát chương trình");
        printf("\nMời bạn nhập lựa chọn: ");	scanf("%d",&luaChon);
        switch(luaChon){
            case 1:
            {
                printf("Bạn chọn CN1\n");//nhập vào số thực x
                float x;
                printf("Mời bạn nhập xố x: "); scanf("%f",&x);
                if (x==(int)x) 	{
                    printf("%.0f là số nguyên\n",x);
                    for(int i=1; i<=x/2; i++){
                        if (i*i==x) {
                            printf("%.0f là số chính phương\n",x);
                        }
                    }
                    // Kiểm tra x có phải số nguyên tố ?
                    int xLaSoNT= 1; //Giả sử x là số NT
                    for (int i = 2; i <=sqrt(x); i++){
                        if ((int)x%i==0) xLaSoNT=0; //trước khi đem x chia cho i, cần ép x về kiểu số nguyên
                    }
                    if (xLaSoNT==1){
                        printf("%.0f là số nguyên tố\n",x);
                    }else printf("%.0f Không phải số NT\n",x);
                }
                else printf("%.2f là số thực\n",x);
                break;
            }
            case 2:{
                printf("Bạn chọn CN2\n");
                break;
            }
            case 3:{
                printf("Bạn chọn CN3\n");
                break;
            }case 4:{
                printf("Bạn chọn CN4\n");
                break; //Ket thuc chuc nang 4
            }case 6:{//Lai suat co dinh 5%, thoi gian tra no la 12 thang
                printf("Bạn chọn CN6\n");
                break; //Ket thuc chuc nang 6
            }case 8:{
                //add 8.2 vào đây
                printf("Bạn chọn CN8\n");
                break; //Ket thuc chuc nang 8
            }case 0:{ //Ket thuc 
                return 0;
            }
            default: printf("\nYou chose wrong\n"); break;
}
    // Dừng màn hình
    system("pause"); // hoặc getchar();
    return 0;
}
// ...existing code...