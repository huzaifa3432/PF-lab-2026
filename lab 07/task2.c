#include&lt;stdio.h&gt;
int main(void){
int i,num,error=0,rep=-1,arr[10];

printf(&quot;Enter 10 numbers: &quot;);
for(i=0;i&lt;10;i++){
scanf(&quot;%d&quot;,&amp;arr[i]);
printf(&quot;\033[1A\033[18C\033[J&quot;);
}
printf(&quot;\nEnter a number to search: &quot;);
scanf(&quot;%d&quot;,&amp;num);
for(i=0;i&lt;10;i++){
(num == arr[i])?(rep+=1):(error+=1);
}
if(error == 10){
printf(&quot;\nNumber not found!&quot;);
}else{
printf(&quot;\nThis number is repeated %d times!&quot;,rep);
}
}
