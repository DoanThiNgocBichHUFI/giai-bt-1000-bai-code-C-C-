#include<stdio.h>
#include<conio.h>

#define MAXSIZE 50

float bai122(float a[],int n);

int main(){
    float a[MAXSIZE]= {2.5, 5.4, 1.25, 5.5};
    int n= 4;
    printf("\n Kq= %.2f",bai122(a,n) );
    return 0;
}

// float bai122(float a[],int n){
//     float max122= a[0];
//     int i=0;
//     while (i< n)
//     {
//         if(max122 < a[i])
//             max122 = a[i];
//         i++;
//     }
//     return max122;
// }

// int bai123(int a[],int n);

// // int main(){
// //     int a[MAXSIZE]= {5, 1, 8, 7};
// //     int n= 4;
// //     printf("\n Vi tri : %d",bai123(a,n) );
// //     return 0;
// // }

// int bai123(int a[],int n){
//     int i= 0;
//     int min= a[0];
//     while (i< n)
//     {
//         if(min > a[i])
//             min= a[i];
//         i++;
//     }
//     return i;
// }

// int bai124(int a[],int n);

// // int main(){
// //     int a[MAXSIZE]={4000, 2008, 2002, 1999};
// //     int n= 4;
// //     if(bai124(a,n)== 1)
// //         printf("\n Yes.");
// //     else 
// //         printf("\n No.");
// //     return 0;
// // }

// int bai124(int a[],int n){
//     int i=0;
//     while (i< n)
//     {
//         if(a[i]< 2004){
//             if(a[i] %2 ==0)
//                 return 1;
//         }
//         i++;
//     }
//     return 0;
// }

// int bai125(int a[],int n);
// int soNT(int n);

// // int main(){
// //     int a[MAXSIZE]={1, 4, 8, 7, 5};
// //     int n= 5;
// //     printf("\n Kq= %d",bai125(a,n) );    
// //     return 0;
// // }

// int soNT(int n){
//     int i=3;
//     if(n <2) 
//         return 0;
//     if(n== 2)
//         return 0;
//     while (i<= n-1)
//     {
//         if(n %i== 0)
//             return 0;
//         i++;
//     }
//     return 1;
// }

// int bai125(int a[],int n){
//     int i=0;
//     int dem125= 0;
//     while (i <n)
//     {
//         if(soNT(a[i]) ==1 )
//             dem125++;
//         i++;
//     }
//     return dem125;
// }

// float bai126(float a[],int n);

// // int main(){
// //     float a[MAXSIZE]= {2.5, -5.5, -1.25, 5.5};
// //     int n= 4;
// //     printf("\n Kq= %.2f",bai126(a,n) );
// //     return 0;
// // }

// float bai126(float a[],int n){
//     float tinh126= 0;
//     int i=0;
//     while (i< n)
//     {
//         if(a[i] < 0)
//             tinh126 += a[i];
//         i++;        
//     }
//     return tinh126;
// }

// void swap(int &a,int &b);
// void xuat(int a[],int n);
// void interchangeSort(int a[],int n);

// void bubbleSort(int a[],int n);

// void insertionSort(int a[],int n);

// void selectionSort(int a[],int n);

// // int main(){
// //     int a[MAXSIZE]= {1, 6,2, 7, 4};
// //     int n= 5;
// //     xuat(a,n);
// //     interchangeSort(a,n);
// //     printf("\n");
// //     xuat(a,n);
// //     return 0;
// // }

// // int main(){
// //     int a[MAXSIZE]= {1, 6,2, 7, 4};
// //     int n= 5;
// //     xuat(a,n);
// //     bubbleSort(a,n);
// //     printf("\n");
// //     xuat(a,n);
// //     return 0;
// // }

// // int main(){
// //     int a[MAXSIZE]= {1, 6,2, 7, 4};
// //     int n= 5;
// //     xuat(a,n);
// //     insertionSort(a,n);
// //     printf("\n");
// //     xuat(a,n);
// //     return 0;
// // }

// // int main(){
// //     int a[MAXSIZE]= {1, 6,2, 7, 4};
// //     int n= 5;
// //     xuat(a,n);
// //     selectionSort(a,n);
// //     printf("\n");
// //     xuat(a,n);
// //     return 0;
// // }


// void xuat(int a[],int n){
//     for(int i=0; i< n; i++){
//         printf("%4d",a[i]);
//     }
// }

// void swap(int &a,int &b){
//     int tmp= a;
//     a= b;
//     b= tmp;
// }

// void interchangeSort(int a[],int n){
//     for(int i=0; i< n-1; i++){
//         for(int j=i+1; j <n; j++)
//         if(a[i] > a[j])
//             swap(a[i], a[j]);
//     }
// }

// void bubbleSort(int a[],int n){
//     for(int i=0; i< n-1; i++)
//         for(int j=n -1; j> i; j--)
//             if(a[j] < a[j-1] )
//                 swap(a[j], a[j-1]);
// }

// void insertionSort(int a[],int n){
//     int pos, x;
//     for(int i= 1; i< n; i++){
//         x= a[i];
//         pos= i;
//         while (pos > 0 && x < a[pos-1] )
//         {
//             a[pos]= a[pos-1];
//             pos--;
//         }
//         a[pos]= x;
//     }
// }

// void selectionSort(int a[],int n){
//     int min;
//     for(int i=0; i< n-1; i++){
//         min =i;
//         for(int j=i+1; j < n; j++)
//             if(a[j] < a[min] )
//                 min= j;
//         if(min != i)
//             swap(a[min], a[i]);
//     }
// }

// void swap127(float &a, float &b);
// void xuat127(float a[], int n);
// void interchangeSort127(float a[], int n);

// void bubbleSort127(float a[],int n);

// void insertionSort127(float a[],int n);

// void seclectionSort127(float a[],int n);

// // int main(){
// //     float a[MAXSIZE]= {5.5, 2.75, 4.5, 3.25, 6.5};
// //     int n= 5;
// //     xuat127(a,n);
// //     printf("\n");
// //     interchangeSort127(a,n);
// //     xuat127(a,n);
// //     return 0;
// // }

// // int main(){
// //     float a[MAXSIZE]= {5.5, 2.75, 4.5, 3.25, 6.5};
// //     int n= 5;
// //     xuat127(a,n);
// //     printf("\n");
// //     bubbleSort127(a,n);
// //     xuat127(a,n);
// //     return 0;
// // }

// // int main(){
// //     float a[MAXSIZE]= {5.5, 2.75, 4.5, 3.25, 6.5};
// //     int n= 5;
// //     xuat127(a,n);
// //     printf("\n");
// //     insertionSort127(a,n);
// //     xuat127(a,n);
// //     return 0;
// // }

// // int main(){
// //     float a[MAXSIZE]= {5.5, 2.75, 4.5, 3.25, 6.5};
// //     int n= 5;
// //     xuat127(a,n);
// //     printf("\n");
// //     seclectionSort127(a,n);
// //     xuat127(a,n);
// //     return 0;
// // }

// void swap127(float &a, float &b){
//     float tmp= a;
//     a= b;
//     b= tmp;
// }

// void xuat127(float a[], int n){
//     for(int i=0; i < n; i++)
//         printf("%4.2f",a[i] );
// }

// void interchangeSort127(float a[], int n){
//     for(int i=0; i< n-1; i++)
//         for(int j= i+1; j< n; j++)
//             if(a[i] > a[j] )
//                 swap127(a[i], a[j]);
// }

// void bubbleSort127(float a[],int n){
//     for(int i=0; i< n-1; i++)
//         for(int j=n-1; j > i; j--)
//             if(a[j] < a[j-1] )
//                 swap127(a[j], a[j-1]);
// }

// void insertionSort127(float a[],int n){
//     int pos127;
//     float x127;
//     for(int i=1; i < n; i++){
//         x127= a[i];
//         pos127= i;
//         while (pos127 > 0 && x127 < a[pos127-1] )
//         {
//             a[pos127]= a[pos127-1];
//             pos127--;
//         }
//         a[pos127]= x127;
//     }
// }

// void seclectionSort127(float a[],int n){
//     int min127;
//     for(int i=0; i< n-1; i++){
//         min127 =i;
//         for(int j=i+1; j < n; j++)
//             if(a[j] < a[min127] )
//                 min127 =j;
//         if(min127 != i)
//             swap127(a[min127], a[i] );
//     }
// }


// void bai128(float a[],int &n);
// void bai128x(float a[], int n);

// // int main(){
// //     float a[MAXSIZE];
// //     int n= 5;
// //     bai128(a,n);
// //     bai128x(a,n);
// //     return 0;
// // }

// void bai128(float a[],int &n){
//     for(int i=0; i < n; i++){
//         printf("\n Nhap a[%d]=  ",i);
//         scanf("%f",&a[i]);
//     }
// }

// void bai128x(float a[], int n){
//     for(int i=0; i < n; i++)
//         printf("%.2f \t",a[i] );
// }

// void bai129(int a[],int &n);
// void bai129x(int a[], int n);

// // int main(){
// //     int a[MAXSIZE];
// //     int n= 5;
// //     bai129(a,n);
// //     bai129x(a,n);
// //     return 0;
// // }

// void bai129(int a[],int &n){
//     for(int i=0; i < n; i++){
//         printf("\n Nhap a[%d]=  ",i);
//         scanf("%d",&a[i]);
//     }
// }

// void bai129x(int a[], int n){
//     for(int i=0; i < n; i++)
//         printf("%4d",a[i] );
// }

// void bai132(int a[],int n);
// void xuat132(int a[],int n);

// // int main(){
// //     int a[MAXSIZE]= {1, 6,2, 7, 4};
// //     int n=5;
// //     xuat132(a,n);
// //     printf("\n ");
// //     bai132(a,n);
// //     return 0;    
// // }

// void bai132(int a[],int n){
//     for(int i=0; i< n; i++)
//         if(a[i] %2== 0)
//             printf("%d\t",a[i] );
// }

// void xuat132(int a[],int n){
//     for(int i=0; i< n; i++)
//         printf("%d\t",a[i] );
// }



// void bai133(float a[], int n){
//     for(int i=0; i< n; i++)
//         if(a[i] < 0)
//             printf("%d\t",i);
// }

// int bai134(float a[],int n);
// void xuat134(float a[],int n);

// // int main(){
// //     float a[MAXSIZE]={5.5, 2.75, 4.5, 3.25, 6.5};
// //     int n= 5;
// //     xuat127(a,n);
// //     printf("\n Kq= %.2f",bai134(a,n) );
// // }

// int bai134(float a[],int n){
//     float max134= a[0];
//     for(int i=0; i< n; i++)
//         if(max134 < a[i] )
//             max134 = a[i];
//     return max134;
// }

// void xuat134(float a[],int n){
//     for(int i=0; i< n; i++)
//         printf("%.2f\t");
// }

// float bai135(float a[],int n);

// // int main(){
// //     float a[MAXSIZE]={-5.5, -2.75, -4.5, -3.25, -6.5};
// //     int n=5;
// //     printf("%.2f",bai135(a,n) );
// //     return 0;   
// // }

// float bai135(float a[],int n){
//     for(int i=0; i< n; i++)
//         if(a[i] >0)
//             return a[i];
//     return -1;
// }

// int bai136(int a[],int n);
// void xuat136(int a[],int n);

// // int main(){
// //     int a[MAXSIZE]={ 5, 11, 77, 1,7};
// //     int n= 5;
// //     xuat136(a,n);
// //     printf("\n Kq= %d", bai136(a,n) );
// //     return 0;
// // }

// int bai136(int a[],int n){
//     for(int i= n-1; i >=0; i--)
//         if(a[i] %2== 0)
//             return a[i];
//     return -1;
// }

// void xuat136(int a[],int n){
//     for(int i=0; i< n; i++)
//         printf("%d\t",a[i]);
// }

// int soHT139(int n);
// int bai139(int a[],int n);

// // int main(){
// //     int a[MAXSIZE]= {7, 4,6, 9};
// //     int n=4;
// //     printf("\n Kq= %d",bai139(a,n) );
// //     return 0;
// // }

// int soHT139(int n){
//     int i, tinh139;
//     i=1, tinh139 = 0;
//     while (i<= n/2)
//     {
//         if(n %i== 0)
//             tinh139 +=i;
//         i++;
//     }
//     if(tinh139== n)
//         return 1;
//     return 0;
// }

// int bai139(int a[],int n){
//     for(int i=n-1; i >=0; i--)
//         if(soHT139(a[i])== 1)
//             return i;
//     return -1;
// }

void swap257(int &a, int &b);
void interchangeSort257(int a[],int n);
void xuat257(int a[],int n);

void bubbleSort257(int a[],int n);

// int main(){
//     int a[MAXSIZE]= { 5, 6, 4, 1, 7, 8, 9 };
//     int n=7;
//     xuat257(a,n);
//     printf("\n Interchange Sort: ");
//     interchangeSort257(a,n);
//     xuat257(a,n);
//     return 0;
// }

// int main(){
//     int a[MAXSIZE]= { 5, 6, 4, 1, 7, 8, 9 };
//     int n=7;
//     xuat257(a,n);
//     printf("\n Bubble Sort: ");
//     bubbleSort257(a,n);
//     xuat257(a,n);
//     return 0;
// }


void swap257(int &a, int &b){
    int tmp257= a;
    a= b;
    b= tmp257;
}

void interchangeSort257(int a[],int n){
    for(int i=0; i< n-1; i++)
        for(int j= i+1; j< n; j++)
            if(a[i]%2 !=0 && a[j]%2 !=0)
                if(a[i] > a[j])
                    swap257(a[i], a[j] );
}

void xuat257(int a[],int n){
    for(int i=0; i< n; i++)
        printf("%d\t",a[i] );
}

void bubbleSort257(int a[],int n){
    for(int i=0; i< n-1; i++)
        for(int j= n-1; j> i; j--)
            if(a[j]%2 !=0 && a[j-1]%2 !=0)
                if(a[j] < a[j-1] )
                    swap257(a[j], a[j-1]);
}

float duong140dau(float a[], int n);
float bai140(float a[], int n);
void xuat140(float a[],int n);

// int main(){
//     float a[MAXSIZE]= {5.5, 2.75, -4.5, -3.25, 6.5};
//     int n= 5;
//     xuat140(a,n);
//     printf("\n Kq= %.2f", bai140(a,n) );
//     return 0;
// }

// tim so duong dau tien

float duong140dau(float a[], int n){
    for(int i=0; i< n; i++)
        if(a[i] >0){
            return a[i];
        }
    return -1;
}

float bai140(float a[], int n){
    float minD=duong140dau(a,n);
    if(minD== -1) 
        return -1;
    for(int i=0; i< n; i++)
        if(a[i] >0 && a[i] < minD)
            minD= a[i];
    return minD;   
}

void xuat140(float a[],int n){
    for(int i=0; i< n; i++)
        printf("%.2f\t",a[i] );
}

int bai141(float a[], int n);
float duong141Dau(float a[], int n);

int main(){
    float a[MAXSIZE]= {5.5, -2.75, -4.5, 3.25, 6.5};
    int n= 5;
    printf("\n Kq= %d", bai141(a,n) );
    return 0;
}

float duong141Dau(float a[], int n){
    for(int i=0; i< n; i++)
        if(a[i] > 0)
            return a[i];
    return -1;
}

int bai141(float a[], int n){
    float minD141= duong141Dau(a,n);
    int pos141=0;
    if(minD141== -1)
        return -1;
    for(int i=0; i < n; i++)
        if( a[i] >0 && a[i] < minD141){
            minD141= a[i];
            pos141= i;
        }
    return pos141;
}
