#include&lt;stdio.h&gt;
int main(void){
int i,num,p_count=0,f_count=0,error=0;
float avg=0;
char pass[10], fail[10];
for(i=0;i&lt;10;i++){
printf(&quot;Enter the marks of Student No. %d: &quot;,i + 1);
scanf(&quot;%d&quot;,&amp;num);
(num &gt;= 0 &amp;&amp; num &lt;= 5)?(fail[f_count++] = num):
(num &gt; 5 &amp;&amp; num &lt;= 10)?(pass[p_count++] = num):
(num == -1)?(error++):(printf(&quot;\nInvalid Input! The
Range is 1-10\n&quot;,i--));
if(error == 1){break;}
}
printf(&quot;\nPassing Students Marks:&quot;);
for(i=0;i&lt;p_count;i++){

printf(&quot;\n%d&quot;,pass[i]);
avg+=pass[i];
}
avg/=p_count;
printf(&quot;\nPassing Students Average = %.1f&quot;,avg);
printf(&quot;\n\nFailing Students Marks:&quot;,avg=0);
for(i=0;i&lt;f_count;i++){
printf(&quot;\n%d&quot;,fail[i]);
avg+=fail[i];
}
avg/=f_count;
printf(&quot;\nFailing Students Average = %.1f&quot;,avg);
return 0;
}
