#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    printf("Please enter the number n so that there are n boys and n girls want to mate.\n");
    
    int n;
    scanf("%d", &n);
    int l;
    int i, j;
    int sex_boy=1;
    char ordinalNumber[4][3]={"st","nd","rd","th"};
    char orderedList_boy[99][99];
    char orderedList_girl[99][99];
    
    switch(sex_boy){
    case 1:
        for(j=1; j<=n; j++){
	    l=j-1;
	    if(j>=4)
                l=3;
	    printf("Please enter the %d%s boy's ordered list sequentially.\n",j,ordinalNumber[l]);
	    scanf("%s",&orderedList_boy[n]);
        }
    
        sex_boy=1;
        
    case 0:
        for(j=1; j<=n; j++){
	    l=j-1;
	    if(j>=4)
                l=3;
	    printf("Please enter the %d%s girl's ordered list sequentially.\n",j,ordinalNumber[l]);
	    scanf("%s",&orderedList_girl[n]);
        }
        
        break;
    }

return 0;
}

