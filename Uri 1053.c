#include<stdio.h>
int main()
{
      int a,b,c,t,big,tmp1,tmp2,i;
     while (scanf("%d",&t)==1){
                  if(t<=200){
                        for(i=1;i<=t;i++){
                              scanf("%d %d %d",&a,&b,&c);
                              if(a>=1 && a<=40000 && b>=1 && b<=40000 && c>=1 && c<=40000){
                                          if(a>=b && a>=c){
                                          big=a;
                                          tmp1=b;
                                          tmp2=c;
                                          }
                                          else if(b>=a && b>=c){
                                          big=b;
                                          tmp1=a;
                                          tmp2=c;
                                          }
                                          else if(c>=a && c>=b){
                                          big=c;
                                          tmp1=b;
                                          tmp2=a;
                                          }
                                          if(big*big==(tmp1*tmp1)+(tmp2*tmp2)){
                                                printf("Case %d: yes\n",i);
                                                }
                                          else
                                          printf("Case %d: no\n",i);
                              }
                        }
                  }
}
      return 0;
}
