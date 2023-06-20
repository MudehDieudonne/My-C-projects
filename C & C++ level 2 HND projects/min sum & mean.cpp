#include<stdio.h>
float minTwo(float p, float q);
float minFour(float p, float q, float r, float s);//Makes use of minTwo Function
float sum(float p, float q, float r, float s);
int main(){
float a,b,c,d;
float mean,m,n;
printf("Give four floats: ");
scanf("%f %f %f %f", &a,&b,&c,&d);
m = minFour(a, b, c, d);
n = sum(a, b, c, d);
mean = sum(a, b, c, d)/4;
printf("min: ");
printf("%f", m);
printf("\n");
printf("sum: ");
printf("%f", n);
printf("\n");
printf("mean: ");
printf("%f", mean);
}
float minTwo(float p, float q){
float ans;
if(p < q){
ans = p;
}else{
ans = q;
}
return ans;
}
float minFour(float p, float q, float r, float s){
float x = minTwo(p, q);
float y;
if(r < s){
y = r;
}else{
y = s;
}
float min = minTwo(x, y);
return min;
}
float sum(float p, float q, float r, float s){
float total = p + q + r + s;
return total;
}

