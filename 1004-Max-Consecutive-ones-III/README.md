<h2><a href="https://leetcode.com/problems/max-consecutive-ones-iii/">1004. Max Consecutive Ones III</a></h2><h3>Medium</h3><hr><div><p>Given a binary array 
  nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.</p>
  
  <p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
<strong>Output:</strong> 6
<strong>Explanation:</strong> [1,1,1,0,0,<strong>1</strong>,1,1,1,1,<strong>1</strong>]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
</pre>

    <p>&nbsp;</p>
<p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
<strong>Output:</strong> 10
<strong>Explanation:</strong> [0,0,1,1,<strong>1</strong>,<strong>1</strong>,1,1,1,<strong>1</strong>,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
</pre>
  
  <p>&nbsp;</p>
<p><strong>Constraints:</strong></p>
<ul>
	<li><code>1 <= nums.length <= 10^5</code></li>
  <li><code>nums[i] is either 0 or 1.</code></li>
  <li><code>0 <= k <= nums.length</code></li>
</ul>
</div>
