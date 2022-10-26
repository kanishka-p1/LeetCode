<h2><a href="https://leetcode.com/problems/01-matrix/">542. 01 Matrix</a></h2><h3>Medium</h3><hr><div><p>Given an m x n binary matrix mat, 
return the distance of the nearest 0 for each cell. The distance between two adjacent cells is 1.</p>
  
 <p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/24/01-1-grid.jpg" style="width: 600px; height: 287px;">
<pre><strong>Input:</strong> mat = [[0,0,0],[0,1,0],[0,0,0]]
<strong>Output:</strong> [[0,0,0],[0,1,0],[0,0,0]]
</pre>

  
 <p>&nbsp;</p>
<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/24/01-2-grid.jpg" style="width: 600px; height: 287px;">
<pre><strong>Input:</strong> mat = [[0,0,0],[0,1,0],[1,1,1]]
<strong>Output:</strong> [[0,0,0],[0,1,0],[1,2,1]]
</pre>
  
  <p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == mat.length</code></li>
  <li><code>n == mat[i].length</code></li>
	<li><code>1 <= m, n <= 104</code></li>
  <li><code>1 <= m * n <= 104</code></li>
	<li><code>mat[i][j] is either 0 or 1.</code></li>
  <li><code>There is at least one 0 in mat.</code></li>
</ul>
</div>
