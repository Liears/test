#include <stdio.h>//定义
const int MAXN=100000;
 
int data[MAXN+5];


int querymax ( int l , int r ) {
    int ans=data[l];
    for(int i=l+1;i<=r;i++) ans=max(ans,data[i]);
    return ans;
}
 
void update(int idx,int value){
    data[idx]=value;
}
int main()//主函数

{
    int N,M,a,b;
    char c;
    printf("请输入学生的数目和想要需要的操作的数目!\n");
    scanf("%d%d",&N,&M);
    for (int i=0; i<N; i++){
        scanf("%d",&data[i]);
    }
    while (M != 0){
        printf("请输入‘Q’或‘U’,和你想修改的学生编号以及修改内容\n");
        scanf("%c%d%d",&c,&a,&b);
        if (c == 'U'){
            update(a,b);
        }else if (c == 'Q') {
            if(a>b)swap(a,b);
            printf("%d\n",querymax(a,b));
        }

    return 0; //返回

}