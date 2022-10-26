<h2><a href="https://leetcode.com/problems/rotting-oranges/">994. Rotting Oranges</a></h2><h3>Medium</h3><hr><div><p>You are given an <code>m x n
  grid</code> where each cell can have one of three values:
  <ul>
    <li><code>0</code> representing an empty cell,</li>
    <li><code>1</code> representing a fresh orange, or</li>
    <li><code>2</code> representing a rotten orange.</li>
  </ul>
  Every minute, any fresh orange that is <strong>4-directionally adjacent</strong> to a rotten orange becomes rotten.
  <em>Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return <code>-1</code>.</em>
  </p>

 <p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/02/16/oranges.png" style="width: 700px; height: 250px;">
<pre><strong>Input:</strong> grid = [[2,1,1],[1,1,0],[0,1,1]]
<strong>Output:</strong> 4
</pre>


 <p>&nbsp;</p>
<p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> grid = [[2,1,1],[0,1,1],[1,0,1]]
<strong>Output:</strong> -1
<strong>Explanation:</strong> The orange in the bottom left corner (row 2, column 0) is never rotten, because rotting only happens 4-directionally.
</pre>


 <p>&nbsp;</p>
<p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> grid = [[0,2]]
<strong>Output:</strong> 0
<strong>Explanation:</strong> Since there are already no fresh oranges at minute 0, the answer is just 0.
</pre>

 <p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == grid.length</code></li>
  <li><code>n == grid[i].length</code></li>
	<li><code>1 <= m, n <= 10</code></li>
  <li><code>grid[i][j] is 0, 1, or 2.</code></li>
</ul>
</div>
