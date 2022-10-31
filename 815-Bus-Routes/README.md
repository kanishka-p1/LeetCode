<h2><a href="https://leetcode.com/problems/bus-routes/">815. Bus Routes</a></h2><h3>Hard</h3><hr><div><p>You are given an array routes representing bus routes where routes[i] is a bus route that the ith bus repeats forever.

For example, if routes[0] = [1, 5, 7], this means that the 0th bus travels in the sequence 1 -> 5 -> 7 -> 1 -> 5 -> 7 -> 1 -> ... forever.
You will start at the bus stop source (You are not on any bus initially), and you want to go to the bus stop target. You can travel between bus stops by buses only.

Return the least number of buses you must take to travel from source to target. Return -1 if it is not possible.</p>
  
   <p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> routes = [[1,2,7],[3,6,7]], source = 1, target = 6
<strong>Output:</strong> 2
<strong>Explanation:</strong> The best strategy is take the first bus to the bus stop 7, then take the second bus to the bus stop 6.
</pre>
  
  
   <p>&nbsp;</p>
<p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> routes = [[7,12],[4,5,15],[6],[15,19],[9,12,13]], source = 15, target = 12
<strong>Output:</strong> 1
</pre>
  
   <p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= routes.length <= 500.</code></li>
  <li><code>1 <= routes[i].length <= 10^5</code></li>
	<li><code>All the values of routes[i] are <strong>unique</strong>.</code></li>
  <li><code>sum(routes[i].length) <= 10^5</code></li>
  <li><code>0 <= routes[i][j] < 10^6</code></li>
  <li><code>0 <= source, target < 10^6</code></li>
</ul>
</div>
