#include<stdio.h>
#include<math.h>

#define MAX_SIZE 50

int tinh1(int n);

// int main(){
    
//     int n= 5;
//     printf("\n Tong cac so tu 1 den %d: %d",n,tinh1(n));
// }

// int tinh1(int n){
//     int sum=0;
//     for(int i=1; i<= n; i++)
//         sum += i;
//     return sum;
// }

int tinh1(int n){
    int sum=0;
    int i=1;
    while(i <=n){
        sum += i;
        i++;
    }
    return sum;
}

int tinh2(int n);

// int main(){
//     int n=5;
//     printf("\n Ket qua la: %d",tinh2(n));
//     return 0;
// }

int tinh2(int n){
    int sum2= 0;
    int i=1;
    while(i <=n){
        sum2 += i*i;
        // sum2 += pow(i,2);
        i++;
    }
    return sum2;
}

float tinh3(int n);

// int main(){
//     int n=5;
//     printf("\n Ket qua cua 1+ 1/2+ 1/3 +... + 1/n: %.2f",tinh3(n));
//     return 0;
// }

float tinh3(int n){
    float sum3= 0;
    int i=1;
    while(i <=n){
        sum3 += 1.0/i;
        i++;
    }
    return sum3;
}

float tinh4(int n);

// int main(){
//     int n=9;
//     printf("\n Ket qua cua bai 4 : 1+ 1/2 +1/4 + ...+ 1/2n : %.2f",tinh4(n));
//     return 0;
// }

float tinh4(int n){
    int i=1;
    float sum4= 0;
    while(i<= n){
        sum4 += 1.0/(2*i);
        i++; 
    }
    return  sum4;
}

// tinh 1+ 1/3 + 1/5 + ... + 1/(2n+1)

float tinh5(int n);

// i
// nt main(){
//     int n=8;
//     printf("\n Ket qua bai 5 la: %.2f",tinh5(n));
//     return 0;

// }

float tinh5(int n){
    int i=0;
    float sum5= 0;
    while(i<= n){
        sum5 += 1.0/((2*i) +1);
        i++;
    } 
    return sum5;
}

// tinh 1+ 1.2 + 1.2.3 +... +1.2.3...N

int tinh11(int n);
// int main(){
//     int n=5;
//     printf("\n Ket qua la: %d",tinh11(n));
//     return 0;
// }

int tinh11(int n){
    int i=1;
    int p= 1;
    int sum11=0;
    while(i <=n){
        p *=i;
        sum11 += p;
        i++;
    }
    return sum11;
}

// tinh x+ x^2 + x^3 +... +x^n

float tinh12(int n,int x);

// int main(){
//     int n=5;
//     int x=2;
//     printf("\n Ket qua: %.2f",tinh12(n,x));
//     return 0;
// }

float tinh12(int n,int x){
    int i=1;
    int p= 1;
    float sum12 =0;
    while(i<= n){
        p *= x;
        sum12 += p;
        i++;
    }
    return sum12;
}
// tinh x^2 + x^4 +... + x^2n

float tinh13(int n,int x);

// int main(){
//     int n=4;
//     int x= 3;
//     printf("\n Ket qua: %.2f",tinh13(n,x));
//     return 0;
// }

float tinh13(int n,int x){
    int i=1;
    int p=1;
    float sum13= 0;
    while(i<= n){
        p *= x*x;
        sum13 += p;
        i++;
    }
    return sum13;

}

// tinh x+ x^3 + ...+ x^2n+1
float tinh14(int n,int x);

// int main(){
//     int n=4;
//     int x=2;
//     printf("\n Ket qua: %.2f",tinh14(n,x));
//     return 0;
// }

float tinh14(int n,int x){
    int i=0;
    int p=1;
    int sum14= 0;
    while(i<= n){
        p = pow(x,(2*i) +1);
        sum14 += p;
        i++;
    }
    return sum14;
}

//tinh 1 + 1/1+2 + 1/1+2+3 +... + 1/1+2+3+...+n

float tinh15(int n);

// int main(){
//     int n= 4;
//     printf("\n Ket qua: %.2f",tinh15(n));
//     return 0;
// }

float tinh15(int n){
    int i= 1;
    float q= 0;
    float sum15= 0;
    while(i<= n){
        q += i;
        sum15 += 1.00/q;
        i++; 
    }
    return sum15;
}

// tinh x + x^2/1+2 + x^3/1+2+3 +...+ 1/1+2+3+...+ n
float tinh16(int n,int x);

// int main(){
//     int n= 5;
//     int x= 2;
//     printf("\n Ket qua: %.2f",tinh16(n,x));
//     return 0;
// }

float tinh16(int n,int x);

float tinh16(int n,int x){
    int i=1;
    float sum16= 0;
    int T= 1, q= 1;
    while(i<= n){
        T *= x;
        q += i;
        sum16 += T/ q;
        i++; 
    }
    return sum16;
}

// tinh 1 + x^2/2! + x^4/4! +... + x^2n/(2n)!
float tinh18(int n,float x);

// int main(){
//     int n=4;
//     int x= 3;
//     printf("\n Ket qua: %.2f",tinh18(n,x));
//     return 0;
// }

float tinh18(int n,float x){
    int i=1;
    float sum18= 1;
    int T,N;
    float M;
    N= 1;
    // while(i<= n){
    //     M *= x*x;
    //     T *=2*i;
    //     sum18 += M/T;
    //     i++;
    // }

    while(i<= n){
        M = pow(x,2*i);
        T = 2*i;
        N *= M*(M-1);
        sum18 += M/T;
        i++;
    }
    return sum18;
}

// tinh 1+ x + x^3/3! + x^5/5! +... + x^(2n+1)/(2n+1)!

float tinh19(int n, float x);

// int main(){
//     int n=3;
//     int x= 2;
//     printf("\n Ket qua: %.2f",tinh19(n,x));
//     return 0;
// }

float tinh19(int n, float x){
    int i, T,N;
    float M, sum19;
    i=1;
    M=1;
    sum19= 1;
    while(i<= n){
        M = pow(x,((2*i)+1));
        T = 2*i+1;
        N *= M*(M-1); 
        sum19 += x+ M/T;
        i++;
    }
}

// tim uoc so cua n

void uocSo(int n);

// int main(){
//     int n=6;
//     printf("\n Cac uoc cua %d: ",n);
//     uocSo(n);
//     return 0;
// }

void uocSo(int n){
    int i=1;
    while(i<= n){
        if(n %i == 0)
            printf("%4d",i);
        i++;     
    }
}

// tinh tong cac uoc so cua so nguyen n
int tinh21(int n);

// int main(){
//     int n=6;
//     printf("\n Ket qua : %d",tinh21(n));
//     return 0;
// }

int tinh21(int n){
    int i, sum21;
    i=1, sum21= 0;
    while(i<= n){
        if(n %i==0)
            sum21 += i;
        i++;
    }
    return sum21;
}

// dem luong uoc so cua so nguyen n
int demUoc(int n);

// int main(){
//     int n=6;
//     printf("\n Ket qua la: %d",demUoc(n));
//     return 0;
// }

int demUoc(int n){
    int count, i;
    i= 1, count= 0;
    while(i<= n){
        if(n% i== 0)
            count++;
        i++;
    }
    return count;
}

// liet ke cac uoc so le cua so nguyen n
void uocSoLe(int n);

// int main(){
//     int n=100;
//     printf("\n Cac uoc so le: ");
//     uocSoLe(n);
//     return 0;
// }

void uocSoLe(int n){
    int i=1;
    while(i<= n){
        if(n% i== 0){
            if(i%2 !=0)
                printf("%4d",i);
        }
        i++;
    }
}

// tinh tong cac uoc chan cua n
int tongUocChan(int n);

// int main(){
//     int n= 6;
//     printf("\n Tong cac uoc chan cua %d: %d",n,tongUocChan(n));
//     return 0;
// }

int tongUocChan(int n){
    int sum25, i;
    i=1, sum25=0;
    while(i<= n){
        if(n %i== 0){
            if(i%2== 0)
                sum25 += i;
        }
        i++;
    }
    return sum25;
}

// dem luong uoc chan cua so nguyen n
int tinh27(int n);

// int main(){
//     int n=6;
//     printf("\n Ket qua: %d",tinh27(n));
//     return 0;
// }

int tinh27(int n){
    int dChan, i;
    dChan =0, i=1;
    while(i<= n){
        if(n% i==0){
            if(i%2 ==0)
                dChan++;
        }
        i++;
    }
    return dChan;
}

// tong cac uoc nho hon chinh no
int tinh28(int n);

// int main(){
//     int n=6;
//     printf("\n Ket qua: %d",tinh28(n));
//     return 0;
// }

int tinh28(int n){
    int sum28, i;
    sum28= 0, i= 1;
    while(i< n){
        if(n%i ==0)
            sum28 += i;
        i++;
    }
    return sum28;
}

//tim uoc so le lon nhat cua so nguyen n
int tinh29(int n);

// int main(){
//     int n=100;
//     printf("\n Ket qua: %d",tinh29(n));
//     return 0;
// }

int tinh29(int n){
    int uocLeMax, i;
    uocLeMax= 0, i=1;
    while(i<=n){
        if(n% i==0){
            if(i% 2 !=0)
                if(uocLeMax < i)
                    uocLeMax= i;
        }
        i++;
    }
}

// kiem tra so hoan hao

int tinh30(int n);

// int main(){
//     int n=6;
//     if(tinh30(n)== 1)
//         printf("\n La so hoan hao.");
//     else 
// printf("\n KHONG la so hoan hao.");
//     return 0;
// }

int tinh30(int n){
    int i, sum30;
    i=1, sum30=0;
    while(i<= n/2){
        if(n% i==0)
            sum30 += i;
        i++;
    }
    if(sum30!= n)
        return 0;
    return 1;
}

// kiem tra so nguyen to
int tinh31(int n);

// int main(){
//     int n=14;
//     if(tinh31(n)== 0)
//         printf("\n La so NTo.");
//     else printf("\n KHONG la so N To.");
//     return 0;
// }

int tinh31(int n){
    int i, count;
    i=2, count=0;
    if(n<2){
        printf("\n KHONG la so N To.");
        return 0;
    }
    while(i<= sqrt(n)){
        if(n%i ==0)
            count++;
        i++;
    }
    return count;
}

// kiem tra so chinh phuong.

int tinh32(int n);

// int main(){
//     int n=10;
//     if(tinh32(n)== 1)
//         printf("\n La so C Phg.");
//     else printf("\n KHONG la so C Phg.");
//     return 0;
// }

int tinh32(int n){
    int a= sqrt(n);
    if(a*a== n)
        return 1;
    return 0;
}

// dem so lg chu so cua so nguyen duong n
int tinh43(int n);

// int main(){
//     int n= 546200;
//     printf("\n Ket qua: %d",tinh43(n));
//     return 0;
// }

int tinh43(int n){
    int count43;
    while(n!= 0){
        n /= 10;
        count43++;
    }
    return count43;
}

// tinh tong cac chu so cua so nguyen duong n

int tinh44(int n);

// int main(){
//     int n= 155203;
//     printf("\n Ket qua: %d",tinh44(n));
//     return 0;
// }

int tinh44(int n){
    int sum44= 0;
    while(n!= 0){
        sum44 += n%10;
        n /=10;
        
    }
    return sum44;
}

// tinh tich cac chu so cua so nguyen duong n

int tinh45(int n);

// int main(){
//     int n=15595;
//     printf("\n Ket qua: %d",tinh45(n));
// }

int tinh45(int n){
    int tich45= 1;
    while(n!= 0){
        tich45 *= n%10;
        n /=10;
    }
    return tich45;
}

// dem so luong chu so le cua so nguyen duong.
int tinh46(int n);

// int main(){
//     int n= 419588;
//     printf("\n Ket qua: %d",tinh46(n));
//     return 0;
// }

int tinh46(int n){
    int count46=0;
    while(n!= 0){
        if(n%2 != 0)
            count46++;
            n /= 10;
    }
    return count46;
}

// tinh tong cac chu so chan cua so nguyen
int tinh47(int n);

// int main(){
//     int n= 4921;
//     printf("\n Ket qua: %d",tinh47(n));
//     return 0;
// }


int tinh47(int n){
    int sum47 =0;
    while(n!= 0){
        if(n%2== 0)
            sum47 += n%10;
        n /= 10;
    }
    return sum47;
}

// tinh tich cac chu so le cua so nguyen duong

int tinh48(int n);

// int main(){
//     int n= 58343;
//     printf("\n Ket qua: %d",tinh48(n));
//     return 0;
// }

int tinh48(int n){
    int tich48= 1;
    while(n!= 0){
        if(n%2 != 0){
            tich48 *= n%10;
        }
        n /=10;
    }
    return tich48;
}

// tim chu so dau tien cua so nguyen duong

int tinh49(int n);

// int main(){
//     int n= 4939;
//     printf("\n Ket qua: %d",tinh49(n));
//     return 0;
// }

int tinh49(int n){
    int temp=0;
    while(n>= 1){
        temp =n%10;
        n /=10;
    }
    return temp;
}

// tim so dao nguoc cua n

int tinh50(int n);

int main(){
    int n=49087;
    printf("\n Kq: %d",tinh50(n));
    return 0;
}

int tinh50(int n){
    int T, kq;
    kq= n%10;
    n /=10;
    while(n>0){
        T= n %10;
        n /= 10;
        kq = kq*10 + T;
    }    
    return kq;
}
