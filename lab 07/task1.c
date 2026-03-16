#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
int main(void){
int i,temp,arr[5]={};
printf(&quot;Enter 5 numbers for sequencing: &quot;);
for(i=0;i&lt;5;i++){
scanf(&quot;%d&quot;,&amp;arr[i]);
printf(&quot;\033[A\033[32C\033[K&quot;);
}
for(i=4;i&gt;0;i--){
temp=arr[i];
arr[i]=arr[i-1];
arr[i-1]=temp;
}
printf(&quot;\n&quot;);
for(i=0;i&lt;5;i++){
printf(&quot;%d&quot;,arr[i]);
}
return 0;
}
