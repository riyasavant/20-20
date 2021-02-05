<h3>Problem: Intersecting Circles</h3>
<br />
<p>A circle is the set of all points on the plane that are at a particular distance (called the radius) from a particular point (called the center). The intersection of two circles is the set of points that are common to both circles. This set
necessarily contains either zero, one, two, or (only in the case that the two circles are the same) infinitely many points.</p> 
<p>Develop a program that, given two circles, determines whether or not their intersection is non-empty.</p> 
<br />
<p><b>Input</b>: The first line contains a positive integer n indicating how many pairs of circles are to be analyzed. On each of the following n lines, a pair of circles is described. Each circle is described by three real numbers, the first of which is its radius and the last two of which are the x- and y-coordinates of its center, respectively. (Note that the sample input shown below describes the four pairs of circles in the figures.)</p>
<p><b>Output</b>: For each pair of circles given as input, the program is to report whether or not they intersect.</p>
<br />
<h5>Sample input</h5> 
<p>4</p>
<p>2.0 3.0 4.0 4.0 8.0 5.0</p>
<p>3.0 0.0 0.0 2.5 1.0 -1.0</p>
<p>3.0 2.0 7.0 2.0 -2.0 3.0</p>
<p>3.5 2.5 0.0 1.0 1.5 2.0</p>
<br />
<h5>Resultant output</h5>
<p>The circles intersect.</p>
<p>The circles intersect.</p>
<p>The circles do not intersect.</p>
<p>The circles do not intersect.</p>