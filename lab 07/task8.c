#include&lt;stdio.h&gt;
int main(void){
char input[100];
printf(&quot;Enter the characters: &quot;);
scanf(&quot;%[^A-Za-z]&quot;,&amp;input);
printf(&quot;\nOutput = %s&quot;,input);
}
