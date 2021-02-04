<h3>Problem 2: Converting Egyptian Fractions to Fractions</h3>
<br />
<p>A unit fraction is a fraction of the form 1/r , where r is a (non-zero) integer. An Egyptian fraction is a sum of distinct positive unit fractions, so called because this is the manner in which ancient Egyptians expressed fractions in general. For example, they would have written 3/5 as 1/2 + 1/10 (except that they would have used hieroglyphics rather than Arabic numerals).</p> 
<p>Develop a program that, given an Egyptian fraction (i.e., a set of distinct positive unit fractions),
calculates the sum and expresses it in simplest (i.e., reduced) form.</p> 
<br />
<p><b>Input</b>: The first line contains a positive integer n indicating how many instances of the problem are subsequently described. Each such instance is described on two lines, the first of which contains a single positive integer m indicating how many unit fractions are to be summed. On the second line appears a sequence of m distinct positive integers k1, k2, . . . , km, which is to be interpreted as representing the Egyptian fraction 1/k1 + 1/k2 + · · · + 1/km.</p>
<p><b>Output</b>: For each Egyptian fraction given as input, your program should generate a single line of output indicating the unit fractions that were summed (separated by plus signs), followed by an equals sign, followed by the sum, in simplest form.</p>
<br />
<h5>Sample input</h5> 
<p>3</p>
<p>2</p>
<p>2 10</p> 
<p>1</p>
<p>35</p>
<p>4</p>
<p>98 1 2 12</p>
<br />
<h5>Resultant output</h5>
<p>1/2 + 1/10 = 3/5</p>
<p>1/35 = 1/35</p> 
<p>1/98 + 1/1 + 1/2 + 1/12 = 937/588</p>