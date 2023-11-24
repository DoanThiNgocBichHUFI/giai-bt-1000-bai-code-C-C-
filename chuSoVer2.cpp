#include<stdio.h>
#include<string.h>
#include<stdlib.h>


// // dem so luong chu so cua so nguyen duong
// int tinh43(int n);

// // int main(){
// //     int n= 594907;
// //     printf("\n Ket qua: %d",tinh43(n));
// //     return 0;
// // }

// int tinh43(int n){
//     int count43;
//     count43=0;
//     while(n!= 0){
//         n /= 10;
//         count43++;
//     }
//     return count43;
// }

// // tinh tong cac chu so nguyen duong
// int tinh44(int n);

// // int main(){
// //     int n= 5917;
// //     printf("\n Ket qua: %d",tinh44(n));
// //     return 0;
// // }

// int tinh44(int n){
//     int sum44, T;
//     sum44=0;
//     while(n!=0){
//         T= n%10;
//         n /=10;
//         sum44 += T; 
//     }
//     return sum44;
// }

// // tich cac chu so cua so nguyen duong n
// // 4684
// int tinh45(int n);

// // int main(){
// //     int n= 4597;
// //     printf("\n Ket qua: %d",tinh45(n));
// //     return 0;
// // }

// int tinh45(int n){
//     int tich45, T;
//     tich45= 1;
//     while(n!=0){
//         T = n%10;
//         n /=10;
//         tich45 *= T;
//     }
//     return tich45;
// }

// // dem so luong chu so le cua  so nguyen duong
// int tinh46(int n);

// // int main(){
// //     int n= 4509;
// //     printf("\n Ket qua: %d",tinh46(n));
// //     return 0;
// // }

// int tinh46(int n){
//     int count46, T;
//     count46= 0;
//     while (n!=0)
//     {
//         T=n% 10;
//         if(T%2!= 0)
//             count46++;
//         n /=10;
//     }
//     return count46;
// }

// // tong cac chu so chan cua so nguyen duong
// int tinh47(int n);

// // int main(){
// //     int n= 972744;
// //     printf("\n Ket qua: %d",tinh47(n));
// //     return 0;
// // }

// int tinh47(int n){
//     int sum47, T;
//     sum47= 0;
//     while(n!=0){
//         T= n%10;
//         if(T%2==0)
//             sum47 += T;
//         n /=10;
//     }
//     return sum47;
// }

// // tich cac chu so le cua so nguyen duong 
// int tinh48(int  n);

// // int main(){
// //     int n= 4838147;
// //     printf("\n Ket qua: %d", tinh48(n));
// //     return 0;
// // }

// int tinh48(int  n){
//     int tich48, T;
//     tich48 =1;
//     while(n!=0){
//         T = n%10;
//         if(T%2 !=0)
//             tich48 *= T;
//             n /=10;
//     }
//     return tich48;
// }

// // tim chu so dau tien cua n
// // 5693

// int tinh49(int n);

// // int main(){
// //     int n= 5693;
// //     printf("\n Ket qua: %d",tinh49(n));
// //     return 0;
// // }

// int tinh49(int n){
//     int T;
//     // M=0;
//     while(n!=0){
//         T= n%10;
//         n /=10;
//     }
//     return T;
// }

// // su dung while, do while

// // int main(){
// //     int i=0;
// //     while(i<= 10){
// //         if(i %2 !=0)
// //             printf(" %3d",i);
// //         i++;
// //     }
// //     return 0;
// // }

// int main(){
//     int n;
//     do{
//         printf("\n Nhap so duong: ");
//         scanf("%d",&n);
//     }while(n<1);
//     printf("\n Kq: %d",n);
//     return 0;
// }

int bai1(int n);

// int main(){
//     int n= 5;
//     printf("\n Kq= %d", bai1(n) );
//     return 0;
// }

int bai1(int n){
    int i, tinh1; 
    i= 1, tinh1 =0;
    while(i <= n){
        tinh1 += i;
    }
    return tinh1;
}

int bai2(int n);

// int main(){
//     int n= 5;
//     printf("\n Kq= %d", bai2(n) );
//     return 0;
// }

int bai2(int n){
    int i, tinh2;
    i = 1, tinh2 = 0;
    while (i <= n)
    {
        tinh2 += i*i;
        i++;
    }
    return tinh2;
}

float bai3(int n);

// int main(){
//     int n= 5;
//     printf("\n Kq= %.2f", bai3(n) );
//     return 0;
// }

float bai3(int n){
    int i;
    float tinh3;
    i= 1, tinh3= 0;
    while( i<= n){
        tinh3 += 1.00/i;
        i++;
    }
    return tinh3;
}

float bai4(int n);

// int main(){
//     int n= 5;
//     printf("\n Kq= %.2f", bai4(n) );
//     return 0;
// }

float bai4(int n){
    int i;
    float tinh4;
    i= 1, tinh4= 0;
    while(i<= n){
        tinh4 += 1.0/(i*2) ;
        i++;
    }
    return tinh4;
}

// tinh 1x 2x 3x ... x n

int bai9(int n);

// int main(){
//     int n= 5;
//     printf("\n Kq= %d", bai9(n) );
//     return 0;
// }

int bai9(int n){
    int i, tinh9;
    i= 1, tinh9= 1;
    while(i<= n){
        tinh9 *= i;
        i++;
    }
    return tinh9;
}

// tinh x^n
// float bai10(float a, int n);

// int main(){
//     float a;
//     int n;
//     n= 5, a= 0.5;
//     printf("\n Kq= %d", bai10(a,n) );
//     return 0;
// }

// float bai10(float a, int n){
//     int i;
//     float tinh10;
//     i= 1, tinh10= 1;
//     while(i<= n){
//         tinh10 *= a;
//         i++;
//     } 

//     return tinh10;
// }

float bai10(float a,int n);

// int main(){
//     int n;
//     float a;
//     n= 5, a= 0.5;
//     printf("\n Kq= %.2f ", bai10(a,n) );
//     return 0;
// }

float bai10(float a,int n){
    int i;
    float tinh10;
    i= 1, tinh10 = 1;
    while(i<= n){
        tinh10 *= a;
        i++;
    }
    return tinh10;
}

int bai11(int n);

// int main(){
//     int n= 5;
//     printf("\n Kq= %d",bai11(n) );
//     return 0;
// }

int bai11(int n){
    int i, tinh11, tong;
    i= 1, tinh11= 1, tong= 0;
    while(i<= n){
        tinh11 *= i;
        tong += tinh11;
        i++;
    } 
    return tong;
}


float bai12(float x,int n);

// int main(){
//     int n= 4;
//     float x= 0.5;
//     printf("\n Kq= %.2f", bai12(x,n) );
//     return 0;
// }

float bai12(float x,int n){
    int i;
    float tinh12, tong12;
    i= 1;
    tinh12= 1, tong12= 0;
    while(i<= n){
        tinh12 *= x;
        tong12 += tinh12;
        i++;
    }
    return tong12;
}

int bai20(int n);

// int main(){
//     int n=8;
//     printf("\n Kq= %d",bai20(n) );
//     return 0;
// }

int bai20(int n){
    int i, dem20;
    i= 1, dem20 = 0;
    while(i<= n){
        if(n %i== 0)
            dem20++;
        i++;
    }
    return dem20;
}

void bai24(int n);

// int main(){
//     int n= 10;
//     bai24(n);
//     return 0;
// }

void bai24(int n){
    int i;
    i= 1;
    while(i<= n){
        if(n%i ==0 && i%2 != 0)
            printf("%4d",i);
        i++;
    }
}

int bai25(int n);

// int main(){
//     int n= 14;
//     printf("\n Kq= %d",bai25(n) );
//     return 0;
// }

int bai25(int n){
    int i, tinh25;
    i= 1, tinh25= 0;
    while(i<= n){
        if(n%i ==0 && i%2== 0)
            tinh25 += i;
        i++;
    }
    return tinh25;
}

int bai27(int n);

// int main(){
//     int n= 14;
//     printf("\n Kq= %d",bai27(n) );
//     return 0;
// }

int bai27(int n){
    int i, dem27;
    i= 1, dem27= 0; 
    while(i<= n){
        if(n%i ==0 && i%2== 0)
            dem27++;
        i++;
    }
    return dem27;
} 

int bai29(int n);

// int main(){
//     int n= 18;
//     printf("\n Kq= %d", bai29(n) );
//     return 0;
// }

int bai29(int n){
    int i, max29;
    i= 1, max29= 1;
    while(i<= n){
        if((n %i== 0 ) && (i%2 !=0) )
            if(i> max29)
                max29= i;
        i++;
    }   
    return max29;
}

int bai30(int n);

// int main(){
//     int n, kq30; 
//     n= 12, kq30= bai30(n);
//     if(n== kq30)
//         printf("\n La so hoan thien.");
//     else 
//         printf("\n KHONG la so hoan thien.");
// }

int bai30(int n){
    int i, tinh30;
    i= 1, tinh30= 0;
    while (i<= n/2)
    {
        if(n %i== 0)
            tinh30 += i;
        i++;
    }
    return tinh30;
}

int bai31(int n);

// int main(){
//     int n, kq31;
//     n= 4, kq31= bai31(n);
//     if(kq31== 1)
//         printf("\n La so NT.");
//     else
//         printf("\n KHONG la so NT.");
//     return 0;
// }

int bai31(int n){
    int i;
    if(n< 2) return 0;
    i= 2;
    while(i<= n-1){
        if(n%i== 0)
            return 0;
        i++;
    }
    return 1;
}

int b31cach2(int n);

// int main(){
//     int n, kq31c2; 
//     n= 4 , kq31c2= b31cach2(n);
//     if(kq31c2== 1) 
//         printf("\n La SNT.");
//     else printf("\n KHONG la so NT.");
//     return 0;
// }

int b31cach2(int n){
    int i;
    if(n<2 ) return 0;
    if(n== 2) return 1;
    i= 3;
    while (i<= n-1)
    {
        if(n %i== 0)
            return 0;
        i+=2;
    }
    return 1;
}

int bai32(int n);

// int main(){
//     int n, kq32;
//     n= 16, kq32= bai32(n);
//     if(kq32== 1)
//         printf("\n La so CP.");
//     else 
//         printf("\n KHONG la so CP.");
//     return 0;
// }

int bai32(int n){
    int i, tinh32;
    i= 1, tinh32 = 1;
    while(i*i <= n){
        tinh32 = i*i;
        if(tinh32 == n)
            return 1;
        i++;
    }
    return 0;
}

int bai43(int n);

// int main(){
//     int n= 5308;
//     printf("\n Kq= %d",bai43(n) );
//     return 0;
// }

int bai43(int n){
    int dem43= 0;
    while(n !=0){
        n /= 10;
        dem43++;
    }
    return dem43;
}

int bai44(int n);

// int main(){
//     int n= 5064;
//     printf("\n Kq= %d", bai44(n) );
//     return 0;
// }

int bai44(int n){
    int tinh44= 0;
    while (n !=0)
    {
        tinh44 += n%10;
        n /= 10;
    }
    return tinh44;
}

int bai46(int n);

// int main(){
//     int n= 5205;
//     printf("\n Kq= %d",bai46(n) );
//     return 0;
// }

int bai46(int n){
    int tinh46, dem46;
    while (n !=0)
    {
        tinh46 = n%10;
        if(tinh46 %2 !=0)
            dem46++;
        n /= 10;
    }
    return dem46;
}

void bai50(int n);

// int main(){
//     int n= 5021;
//     bai50(n);
//     return 0;
// }

void bai50(int n){
    int tinh50=0;
    while (n!= 0 )
    {
        tinh50= n%10;
        n /= 10;
        printf("%d",tinh50);
    }
}

int bai49(int n);

// int main(){
//     int n= 69010;
//     printf("\n Kq= %d",bai49(n) );
//     return 0;
// }

int bai49(int n){
    int tinh49=0;
    while (n !=0)
    {
        tinh49 = n %10;
        n /= 10;
    }
    return tinh49;
}

int bai51(int n);

// int main(){
//     int n= 151401;
//     printf("\n Kq= %d",bai51(n) );
//     return 0;
// }

int bai51(int n){
    int max51, tinh51;
    max51= 0, tinh51= 0;
    while (n !=0)
    {
        tinh51= n%10;
        if(tinh51 >max51)
            max51= tinh51;
        n /= 10;
    }
    return max51;
}

int bai56(int n);

// int main(){
//     int n= 12597;
//     if(bai56(n) ==1)
//         printf("\n La so toan le.");
//     else
//         printf("\n  KHONG la so toan le.");
// }

int bai56(int n){
    int tinh56= 0;
    while (n !=0)
    {
        tinh56 = n%10;
        if(tinh56 %2 ==0)
            return 0;
        n /= 10;
    }
    return 1;
}

int isNum(char s[],int n);
int bai59(char s[],int n);

// int main(){
//     char s[50]= "24532";
//     int n= strlen(s);
//     if(isNum(s,n) == 0)
//         printf("\n Ban nhap sai dang.");
    
//     if(bai59(s,n) == 1)
//         printf("\n La chuoi doi xung.");
//     else 
//         printf("\n KHONG la chuoi doi xung.");
//     return 0;
// }

int isNum(char s[],int n){
    if(n== 0) return 0;
    if(s[0]== 0) return 0;
    
    for(int i=0; i< n; i++)
        if(s[i] >'9' || s[i] <'0')
        return 0;
    return 1;
}

int bai59(char s[],int n){
    int i, j;
    n= strlen(s);
    i= 0, j= n-1;
    while (i< j)
    {
        if(s[i] != s[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

// bai 49 cach 2

// int main(){
//     char s[50];
//     int n= strlen(s);
    
//     printf("\n Nhap chuoi: ");
//     fgets(s, sizeof(s),stdin);

//     if(s[0]== '0')
//         exit(0);
//         for(int i=0; i< n; i++)
//             if(s[i] >'9' || s[i] <'0')
//                 exit(0);

//     printf("\n Kq= %c",s[0] );
//     return 0; 
// }



int bai60(int n);

// int main(){
//     int n= 15489;
//     if(bai60(n) ==1)
//         printf("\n Cac chu so tang dan");
//     else
//         printf("\n Cac chu so KHONG tang dan");
//     return 0;    
// }

int bai60(int n){
    int tinh60, tach60;
    tinh60 =0, tach60 =0;
    while(n !=0){
        tinh60= n%10;
        n /= 10;
        if(n !=0){
            tach60 = n%10;
            if(tinh60 < tach60)
                return 0;
        }
    }
    return 1;
}

int bai61(int n);

// int main(){
//     int n= 76541;
//     if(bai61(n) ==1)
//         printf("\n Cac chu so giam dan.");
//     else
//         printf("\n Cac chu so KHONG giam dan.");
//     return 0;
// }

int bai61(int n){
    int tinh61, tach61;
    while(n!= 0){
        tinh61 = n%10;
        n /= 10;
        if(n !=0){
            tach61 = n%10;
            if(tinh61 > tach61)
                return 0;
        }
    }
    return 1;
}

float bai82(float a, float b, float c);

// int main(){
//     float a,b,c;
//     a= 2.5 , b= 1.75, c=4.25;
//     printf("\n Kq= %.2f", bai82(a,b,c) );
//     return 0;
// }

float bai82(float a, float b, float c){
    float max82= a;
    if( max82 < b)
        max82= b;
    else if(max82 < c)
        max82 = c;
    else
        return 0;

    return max82;
}

float bai83(float a, float b);

// int main(){
//     float a, b;
//     a= 5.25, b= -0.75;
//     if(bai83(a,b) ==1)
//         printf("\n 2 so cung dau.");
//     else 
//         printf("\n 2 so KHONG cung dau.");
//     return 0;
// }

float bai83(float a, float b){
    if(a*b < 0)
        return 0;
    return 1; 
}

void bai84(int n);

// int main(){
//     int n= 5;
//     bai84(n);
//     return 0;
// }

void bai84(int n){
    switch (n)
    {
    case 1: printf("\n Quy 1.");
        break;
    case 2:
        printf("\n Quy 1.");
        break;
    case 3:
        printf("\n Quy 1.");
        break;
    case 4:
        printf("\n Quy 2.");
        break;
    case 5:
        printf("\n Quy 2.");
        break;
    case 6:
        printf("\n Quy 2.");
        break;
    case 7:
        printf("\n Quy 3.");
        break;
    case 8:
        printf("\n Quy 3.");
        break;
    case 9:
        printf("\n Quy 3.");
        break;
    case 10:
        printf("\n Quy 4.");
        break;
    case 11:
        printf("\n Quy 4.");
        break;
    case 12:
        printf("\n Quy 4.");
        break;

    default:
        printf("\n Khong co thang do.");
        break;
    }
}

int bai87(int n);

// int main(){
//     int n= 17;
//     printf("\n Kq= %d",bai87(n) );
//     return 0;
// }

int bai87(int n){
    int i=0, tinh87= 0;
    while (tinh87 < n)
    {
        i++;
        tinh87 += i;
    }
    return i;
}

void bai88();

// int main(){
//     bai88();
//     return 0;
// }

void bai88(){
    char i= 'A';
    while(i<= 'Z'){
        printf("%c\t",i);
        i++;
    }
}

// int main(){
//     int n= 17;
//     int m=0, bai90=0;
//     do{
//         m +=1;
//         bai90 +=m;
//     }while(bai90+ m +1 < n);
    
//     printf("\n Kq= %d", m);
//     return 0;
// }

int bai90(int n);

// int main(){
//     int n= 17;
//     printf("\n Kq= %d",bai90(n) );
//     return 0;
// }

int bai90(int n){
    int m= 0, tinh90=0;
    do{
        m++;
        tinh90 += m;
    }while(tinh90 <n);
    m--;
    return m;
}

void bai91();

// int main(){
//     bai91();
//     return 0;
// }

void bai91(){
    int i= 0;
    do{
        if(i%2 !=0)
            printf("%4d",i);
        i++;
    }while(i < 100);
}

void bai94();

// int main(){
//     bai94();
//     return 0;
// }

void bai94(){
    int i=0;
    while (i <100)
    {
        if(i %2 ==0){
            i++;
            continue;
        }
        if(i== 5 || i== 7 || i== 93){
            i++;
            continue;
        }

        printf("%4d",i);
        i++;
    }
}

void bai97(float a, float b, float c);

// int main(){
//     float a,b,c;
//     a= 3.5, b= 3.5, c= 1.75;
//     bai97(a,b,c);
//     return 0;
// }

void bai97(float a, float b, float c){
    if(a < b+c || b < a+c || c < b+c){
    
        if(a*a== b*b + c*c || b*b== a*a + c*c || c*c== a*a + b*b )
            printf("\n La tam giac vuong.");
        
        else if(a== b || b== c || c==a)
            printf("\n La tam giac can.");
        
        else if(a==b && b==c)
            printf("\n La tam giac deu.");

        else if(a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b)
            printf("\n La tam giac tu.");
        else 
            printf("\n La tam giac nhon.");
    }
    else
        printf("\n KHONG la tam giac.");
}


// int main(){
//     float a,b, c, tmp;
//     a= 5.5, b= 1.75, c= 4;
//     if(a > b){
//         tmp= a;
//         a= b;
//         b= tmp;    
//     }
//     if(b> c){
//         tmp= b;
//         b= c;
//         c= tmp;
//     }
//     if (a > c){
//         tmp= a;
//         a= c;
//         c= tmp;        
//     }

//     printf("\n bai 99: %.2f %.2f %.2f",a,b,c);
//     return 0;
// }

int cau3(float n);

int main(){
    float n= 5.2456;
    printf("\n Kq= %d",cau3(n) );
    return 0;
}

double cau3(float n){
    double tinh3;
     n = n %10.0;
    while (n !=0)
    {
        tinh3= n/ 0.10 ;
        
    }
    return tinh3;
}
