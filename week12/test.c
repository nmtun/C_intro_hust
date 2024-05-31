// #include <stdio.h>

// void nhap_mang(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
// }
// void sort(int arr[], int n){
//     int tmp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i]>arr[j])
//             {
//                 tmp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=tmp;
//             }
//         }
//     }
// }
// int check(int arr[], int n){
//     int dem=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==0 || arr[i]>n || arr[i]==arr[i+1]) dem++;
//     }
//     return dem;
// }
// int main(){
//     int a,n;
//     scanf("%d",&n);
//     int arr[100];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a);
//         nhap_mang(arr,a);
//         sort(arr,a);
//         if((check(arr,a))==0) printf("1");
//         else printf("0");
//     }
//     return 0;
// }
#include<stdio.h>
#include<math.h>

int check(int x3, int y3, int r, int x, int y1, int y2){
int sum = 0;
if ((sqrt(r * r - (x - x3) * (x - x3))) > 0){
float y_1 = sqrt(r * r - (x - x3) * (x - x3)) + y3;
float y_2 = -1 * (sqrt(r * r - (x - x3) * (x - x3))) + y3;

if ((y_1 <= y1 && y_1 >= y2) || (y_1 >= y1 && y_1 <= y2)) sum += 1;
if ((y_2 <= y1 && y_2 >= y2) || (y_2 >= y1 && y_2 <= y2)) sum += 1;
// printf("(%d,%.2f); (%d,%.2f)\n",x,y_1,x, y_2);
}

if ((sqrt(r * r - (x - x3) * (x - x3))) == 0){
float y_1 = sqrt(r * r - (x - x3) * (x - x3)) + y3;

if ((y_1 <= y1 && y_1 >= y2) || (y_1 >= y1 && y_1 <= y2)) sum += 1;
// printf("(%d,%.2f)\n",x,y_1);
}
return sum;
}

int main() {
 int x1, y1, x2, y2, x3, y3, r;
 scanf("%d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &r);
int giaodiem = check(x3,y3,r,x1,y1,y2) + check(x3,y3,r,x2,y1,y2) + check(y3,x3,r,y1,x1,x2) + check(y3,x3,r,y2,x1,x2);
printf("%d", giaodiem);
}