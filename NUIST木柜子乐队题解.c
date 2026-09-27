#include<stdio.h>
#include<math.h>
int main(){
int n ;

scanf("%d",&n);
int maxcombo = 0;
int nowcombo = 0;
int time[n+1];
for(int i = 0;i<n;i++){
	scanf("%d",&time[i]);
	if(fabs(time[i])<=100){
		nowcombo+=1;
	}else{
		if(maxcombo<nowcombo){
				maxcombo = nowcombo;
	
		}
		nowcombo=0;
	}
	}
	if(maxcombo<nowcombo){
				maxcombo = nowcombo;
	
		}
	printf("%d",maxcombo);
	return 0 ;
}















