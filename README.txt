##(1). Print Pretty
Your manager gave you a text file with many lines of numbers to format and print. For each row of 3 space-separated doubles, format and print the numbers using the specifications in the Output Format section below.

Input Format

The first line contains an integer, T , the number of test cases.
Each of the T subsequent lines describes a test case as 3 space-separated floating-point numbers: A,B, and C, respectively.

Constraints
    1<= T <= 1000

    Each number will fit into a double.

Output Format

For each test case, print 3 lines containing the formatted A, B, and C, respectively. Each A, B, and C must be formatted as follows:

1.A : Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the 0x prefix).

2.B : Print it to a scale of 2 decimal places, preceded by a+ or - sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly 15 characters wide.
3.C : Print it to a scale of exactly nine decimal places, expressed in scientific notation.

Sample Input

1  
100.345 2006.008 2331.41592653498

Sample Output

0x64             
_______+2006.01  
2.331415927E+03

Explanation

For the first line of output, (100) 10 -> (64)16 (in reverse,6*16 + 4*16(0) = (100) 10 ).
The second and third lines of output are formatted as described in the Output Format section.

##(2). Preprocessor Solution

You're spending your afternoon at a local school, teaching kids how to code. You give them a simple task: find the difference between the maximum and minimum values in an array of integers.

After a few hours, they came up with some promising source code. Unfortunately, it doesn't compile! Since you don't want to discourage them, you decide to make their code work without modifying it by adding preprocessor macros.

Review the locked stub code in your editor and add the preprocessor macros necessary to make the code work.

Input Format

The first line contains an integer, N , denoting the size of the array.
The second line contains N space-separated integers,x1,x2, ..., xn, describing the elements in the array.

Constraints

1<= N <= 1000
-10^8 <= xi <= 10^8

Output Format

You are not responsible for printing any output to stdout. Once the necessary preprocessor macros are written, the locked code in your editor will print a line that says Result=Z, where Z is the difference between the maximum and minimum values in the array.

Sample Input

5
32 332 -23 -154 65

Sample Output

Result = 486

Explanation
332 - (-154) = 486

##(3). Inherited Code

You inherited a piece of code that performs username validation for your company's website. The existing function works reasonably well, but it throws an exception when the username is too short. Upon review, you realize that nobody ever defined the exception.

The inherited code is provided for you in the locked section of your editor. Complete the code so that, when an exception is thrown, it prints Too short: N (where N is the length of the given username).

Input Format

The first line contains an integer, T, the number of test cases.
Each of the T subsequent lines describes a test case as a single username string, U.

Constraints
    1<= T <= 1000
    1<= |U| <= 100
    The username consists only of uppercase and lowercase letters.

Output Format

You are not responsible for directly printing anything to stdout. If your code is correct, the locked stub code in your editor will print either Valid (if the username is valid), Invalid (if the username is invalid), or Too short: N (where N is the length of the too-short username) on a new line for each test case.

Sample Input

3
Peter
Me
Arxwwz

Sample Output

Valid
Too short: 2
Invalid

Explanation

Username Me is too short because it only contains 2 characters, so your exception prints 
Too short: 2.
All other validation is handled by the locked code in your editor.

##(4).Exceptional Server

Your friend set up a small computational server that performs complex calculations.
It has a function that takes 2 large numbers as its input and returns a numeric result. Unfortunately, there are various exceptions that may occur during execution.

Complete the code in your editor so that it prints appropriate error messages, should anything go wrong. The expected behavior is defined as follows:

    If the compute function runs fine with the given arguments, then print the result of the function call.
    If it fails to allocate the memory that it needs, print Not enough memory.
    If any other standard C++ exception occurs, print Exception: S where S is the exception's error message.
    If any non-standard exception occurs, print Other Exception.

Input Format

The first line contains an integer, T , the number of test cases.
Each of the T subsequent lines describes a test case as 2 space-separated integers, A and B, respectively.

Constraints

1<= T<= 1000
0<= A,B <= 2^60

Output Format

For each test case, print a single line containing whichever message described in the Problem Statement above is appropriate. After each message is printed, the locked stub code in your editor prints the server load.

Sample Input

2
-8 5
1435434255433 5

Sample Output

Exception: A is negative
Not enough memory
2

Explanation

See the implementation of the compute function.
2 is the server load. 

##(5) Magic Spells

You are battling a powerful dark wizard. He casts his spells from a distance, giving you only a few seconds to react and conjure your counterspells. For a counterspell to be effective, you must first identify what kind of spell you are dealing with.

The wizard uses scrolls to conjure his spells, and sometimes he uses some of his generic spells that restore his stamina. In that case, you will be able to extract the name of the scroll from the spell. Then you need to find out how similar this new spell is to the spell formulas written in your spell journal.

Spend some time reviewing the locked code in your editor, and complete the body of the counterspell function.

Input Format

The wizard will read T scrolls, which are hidden from you.
Every time he casts a spell, it's passed as an argument to your counterspell function.

Constraints
    1<= T <= 100
    1<= |S| <= 1000, where S is a scroll name.
    Each scroll name, S, consists of uppercase and lowercase letters.

Output Format

After identifying the given spell, print its name and power.
If it is a generic spell, find a subsequence of letters that are contained in both the spell name and your spell journal. Among all such subsequences, find and print the length of the longest one on a new line.

Sample Input

3
fire 5
AquaVitae 999 AruTaVae
frost 7

Sample Output

Fireball: 5
6
Frostbite: 7

Explanation

Fireball and Frostbite are common spell types.
AquaVitae is not, and when you compare it with AruTaVae in your spell journal, you get a sequence: AuaVae

##(6) C++ Class Template Specialization

You are given a main function which reads the enumeration values for two different types as input, then prints out the corresponding enumeration names. Write a class template that can provide the names of the enumeration values for both types. If the enumeration value is not valid, then print unknown.

Input Format

The first line contains T, the number of test cases.
Each of the T subsequent lines contains 2 space-separated integers. The first integer is a color value, C, and the second integer is a fruit value, F.

Constraints

1<= T <= 100
-2 * 10^9 <= C <= 2 * 10^9
-2 * 10^9 <= F <= 2 * 10^9

Output Format

The locked stub code in your editor prints T lines containing the color name and the fruit name corresponding to the input enumeration index.

Sample Input

2
1 0
3 3

Sample Output

green apple
unknown unknown

Explanation

Since T=1, there is only one line of output. The two input index values, 1 and 0 , correspond to green in the color enumeration and apple in the fruit enumeration. 
