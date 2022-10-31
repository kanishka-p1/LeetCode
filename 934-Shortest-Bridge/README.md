<h2><a href="https://leetcode.com/problems/shortest-bridge/">934. Shortest Bridge</a></h2><h3>Medium</h3><hr><div><p>You are given an n x n 
  binary matrix grid where 1 represents land and 0 represents water.
  An island is a 4-directionally connected group of 1's not connected to any other 1's. There are exactly two islands in grid.
  You may change 0's to 1's to connect the two islands to form one island.
  <em>Return the smallest number of 0's you must flip to connect the two islands</em>.</p>
  
   <p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> grid = [[0,1],[1,0]]
<strong>Output:</strong> 1
</pre>
  
  
   <p>&nbsp;</p>
<p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> grid = [[0,1,0],[0,0,0],[0,0,1]]
<strong>Output:</strong> 2
</pre>
  
  
   <p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> grid = [[1,1,1,1,1],[1,0,0,0,1],[1,0,1,0,1],[1,0,0,0,1],[1,1,1,1,1]]
<strong>Output:</strong> 1
</pre>
  
   <p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == grid.length == grid[i].length</code></li>
  <li><code>2 <= n <= 100</code></li>
	<li><code>grid[i][j] is either 0 or 1.</code></li>
  <li><code>There are exactly two islands in grid.</code></li>
</ul>
</div>
