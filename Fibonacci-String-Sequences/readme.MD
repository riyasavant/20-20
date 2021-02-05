<h3>Problem: Fibonacci String Sequences</h3>
<br />
<p>One of the most famous families of sequences in mathematics is the family of Fibonacci
sequences. A Fibonacci sequence begins with two chosen values and is such that every value
thereafter is the sum of the previous two. For example, if we choose to begin the sequence with 0 and 1, respectively, we get 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, . . .
The same idea can be applied to character strings. However, rather than adding two consecutive elements of a sequence to compute the next one, we concatenate them. For example, if we start with the strings a and ba, we get the sequence a, ba, aba, baaba, ababaaba, baabaababaaba, ababaababaabaababaaba, . . .</p> 
<p>Develop a program that, given a positive integer m and two character strings, s1 and s2,
displays the first m elements of the Fibonacci string sequence (as defined above) whose first two elements are s1 and s2, respectively.</p> 
<br />
<p><b>Input</b>: The first line contains a positive integer n indicating how many instances of the problem are described thereafter. Each instance of the problem is described on three lines, the first of which contains a positive integer m, the second of which contains a string s1, and the third of which contains a string s2. (Neither s1 nor s2 contains any spaces (or, more generally, “white space”).)</p>
<p><b>Output</b>: For each triple (m, s1, s2) given as input, display the first m elements of the Fibonacci string sequence that begins with s1 and s2, respectively, one string per line, and followed by a blank line.</p>
<br />
<h5>Sample input</h5>
<p>2</p>
<p>6</p>
<p>a</p>
<p>ba</p>
<p>7</p>
<p>spock</p>
<p>kirk</p> 
<br />
<h5>Resultant output</h5>
<p>a</p> 
<p>ba</p> 
<p>aba</p> 
<p>baaba</p> 
<p>ababaaba</p> 
<p>baabaababaaba</p> 
<br />
<p>spock</p> 
<p>kirk</p> 
<p>spockkirk</p> 
<p>kirkspockkirk</p> 
<p>spockkirkkirkspockkirk</p> 
<p>kirkspockkirkspockkirkkirkspockkirk</p> 
<p>spockkirkkirkspockkirkkirkspockkirkspockkirkkirkspockkirk</p> 