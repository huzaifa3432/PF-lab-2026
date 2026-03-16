#include&lt;stdio.h&gt;
int main(void){
int i,j,input,num[10];
printf(&quot;Enter 10 integers: &quot;);
for(i=0;i&lt;10;i++){
scanf(&quot;%d&quot;,&amp;num[i]);
printf(&quot;\033[1A\033[19C\033[J&quot;);
}
printf(&quot;\nInput = &quot;);
for(i=0;i&lt;10;i++){
printf(&quot; %d &quot;,num[i]);
}
for(i=0;i&lt;10;i++){
for(j=i+1;j&lt;10;j++){
if(num[i] == num[j]){
num[j] = -1;
}
}
}
printf(&quot;\nOutput = &quot;);
for(i=0;i&lt;10;i++){
printf(&quot; %d &quot;,num[i]);
}
}
