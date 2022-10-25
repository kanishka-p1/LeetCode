# Number of Distinct Islands
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a boolean 2D matrix grid of size n * m. You have to find the number of distinct islands where a 
  group of connected 1s (horizontally or vertically) forms an island. Two islands are considered to be distinct if and only if one island is not equal to another 
  (not rotated or reflected).&nbsp;</span></p>
  
  <p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong></span>:
<span style="font-size:18px">
grid[][] = {{1, 1, 0, 0, 0},
            {1, 1, 0, 0, 0},
            {0, 0, 0, 1, 1},
            {0, 0, 0, 1, 1}}
<strong>Output:</strong>&nbsp;1&nbsp;
<strong>Explanation</strong>: 
grid[][] = {{1, 1, 0, 0, 0}, 
            {1, 1, 0, 0, 0}, 
            {0, 0, 0, 1, 1}, 
            {0, 0, 0, 1, 1}}
Same colored islands are equal.
We have 2 equal islands, so we 
have only 1 distinct island.</span>
</pre>
  
  
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong></span>:
<span style="font-size:18px">
grid[][] = {{1, 1, 0, 1, 1},
            {1, 0, 0, 0, 0},
            {0, 0, 0, 0, 1},
            {1, 1, 0, 1, 1}}
<strong>Output:</strong>&nbsp;3&nbsp;
<strong>Explanation</strong>: 
grid[][] = {{1, 1, 0, 1, 1}, 
            {1, 0, 0, 0, 0}, 
            {0, 0, 0, 0, 1}, 
            {1, 1, 0, 1, 1}}
Same colored islands are equal.
We have 4 islands, but 2 of them
are equal, So we have 3 distinct islands.</span>
</pre>


<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read or print anything. Your task is to complete the function countDistinctIslands() which takes the grid as an input parameter and returns the total number of distinct islands.</p>

  
  
<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n * m)<br>
<strong>Expected Space Complexity:</strong> O(n * m)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 100</span><br>
<span style="font-size:18px">1&lt;= arr[i] &lt;= 100<br>
1&lt;= sum &lt;= 10<sup>5</sup></span></p>
 <p></p>
            </div>
