#include&lt;stdio.h&gt;
int main(void){
int i,a=0,b;
int nums[10];
printf(&quot;Input 10 Integers: &quot;);
for(i=0;i&lt;10;i++){
scanf(&quot;%d&quot;,&amp;nums[i]);
if(i == 0){b=nums[i];}
printf(&quot;\033[1A\033[19C\033[J&quot;);
(nums[i] &gt; a)?(a = nums[i]):(nums[i] &lt; b)?(b =
nums[i]):(i=i);
}
printf(&quot;\nLargest = %d\nSmallest = %d\nDifference (max-
min) = %d&quot;,a,b,a-b);
}
