#include&lt;stdio.h&gt;
int main(void){
int i;
char input[100];
printf(&quot;Enter a string: &quot;);
scanf(&quot;%[^\n]&quot;,input);
for(i=0;i&lt;100;i++){
if(input[i] &gt;= 97 &amp;&amp; input[i] &lt;= 122){
input[i]-=32;
}else if(input[i] &gt;= 65 &amp;&amp; input[i] &lt;= 90){
input[i]+=32;
}
}
printf(&quot;Output: %s&quot;,input);
}
