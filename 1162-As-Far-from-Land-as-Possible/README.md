<h2><a href="https://leetcode.com/problems/as-far-from-land-as-possible/">1162. As Far from Land as Possible</a></h2><h3>Medium</h3><hr><div><p>Given an n x n grid containing only values 0 and 1, where 0 represents water and 1 represents land, find a water cell such that its distance to the nearest land cell is maximized, and return the distance. If no land or water exists in the grid, return -1.

The distance used in this problem is the Manhattan distance: the distance between two cells (x0, y0) and (x1, y1) is |x0 - x1| + |y0 - y1|.</p>
  
   <p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/05/03/1336_ex1.JPG" style="width: 400px; height: 250px;">
<pre><strong>Input:</strong> grid = [[1,0,1],[0,0,0],[1,0,1]]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The cell (1, 1) is as far as possible from all the land with distance 2.
</pre>
  
  
   <p>&nbsp;</p>
<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/05/03/1336_ex2.JPG" style="width: 400px; height: 250px;">
<pre><strong>Input:</strong> grid = [[1,0,0],[0,0,0],[0,0,0]]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The cell (2, 2) is as far as possible from all the land with distance 4.
</pre>
  
   <p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == grid.length</code></li>
  <li><code>n == grid[i].length</code></li>
	<li><code>1 <= n <= 100</code></li>
  <li><code>grid[i][j] is 0 or 1</code></li>
</ul>
</div>
