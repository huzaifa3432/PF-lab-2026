#include&lt;stdio.h&gt;
int main(void){
int i,v_count=0,c_count=0;
char word[100];
printf(&quot;Enter a word: &quot;);
scanf(&quot;%s&quot;,&amp;word);
for(i=0;word[i]!=&#39;\0&#39;;i++){
if(word[i] == &#39;A&#39; || word[i] == &#39;E&#39; || word[i] == &#39;I&#39;
|| word[i] == &#39;O&#39; || word[i] == &#39;U&#39; || word[i] == &#39;a&#39; ||
word[i] == &#39;e&#39; || word[i] == &#39;i&#39; || word[i] == &#39;o&#39; || word[i]
== &#39;u&#39;){
v_count++;
}else{
c_count++;
}
}
printf(&quot;\nTotal Vowels = %d\nTotal Consonants =
%d&quot;,v_count,c_count);
}
