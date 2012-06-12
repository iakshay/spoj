#include<stdio.h>

int main(){
	char str1[501], str2[501];
	int i, j, c=0;
	//freopen("input.txt", "r", stdin);
	scanf("%s %s", &str1, &str2);
	while (strcmp(str1, "*") && strcmp(str2, "*")){
		c= 0;
		for(i=0;str1[i]!='\0';i++){
			if(str1[i]!=str2[i]){
				//printf("No match at %d\n", i);
				j = i;
				while(str1[j]!=str2[j])
					j++;
				//printf("Group %d-%d\n", i, j-1);
				i=--j;
				c++;
			} //else printf("Match at %d\n", i);
		}
		printf("%d\n", c);
		scanf("%s %s", &str1, &str2);
	};
	return 0;
}