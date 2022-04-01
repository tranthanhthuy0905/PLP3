*1. What are the boolean values in your language? (e.g., True and False, true and false, 1, and 0, etc.)*

Boolean values in c++ contains **true** and **false**.<br />
It is different from Java because type **bool** is equivalent to type **int** where **true** is **1** and **false** is **0**.<br />
To define Boolean values in C++: <br />```bool varName = true/false;```

*2. What types of conditional statements are available in your language? (if/else, if/then/else, if/elseif/else).  Does your language allow for statements other than “if” (for example, Perl has an “unless” statement, which does the opposite of “if”!)*

In C++, we also have If, If/else, If/else if/else. But c++ accepts **Ternary Operator** with the following syntax:<br /> ```variable = (condition) ? expressionTrue : expressionFalse;``` <br />

*3. How does your language delimit code blocks under each condition in selection control statements?*

It is quite similar to Java, locate the conditional statements inside **()** and the code blocks inside **{}**. Make sure to end the statements inside code blocks with **;** but not after () or {}<br />

*4. Does your language use short-circuit evaluation? Include an example of the short-circuit logic working or not working (or both, if your language is like Java and supports both!)*

C++ uses short-circuit evaluation with '&&' and '||'.<br />
While evaluating '&&', if the left-hand side of '&&' gives *false*, then the expression will always yield **false** irrespective of the value of the right-hand side of '&&', so the right-hand side is redundant.<br />
Opposite to '&&', evaluating '||' works when the left-hand side gives *true*, the result of the expression will always be **true** irrespective of the value of the right-hand side.<br />

*5. How does your programming language deal with the “dangling else” problem?*

Dangling-else problem  in c++ arised when in a nested **if** statement, the number of **if**s is more than the number of **else** clauses. The compiler ignores the indentation in c++ program.<br />
The C++ compiler always associates an else with the previous if unless told to do otherwise by the placement of braces {}. On first glance, we may not be sure which if and else match, so this is referred to as the “dangling-else” problem.<br />
Although C++ ignores indentation, the compiler warns developer to notice this type of mistake to avoid ***runtime error***.

*6. If your language supports switch or case statements, do you have to use “break” to get out of them? Can you use “continue” to have all of the conditions evaluated?*

C++ requires ***break*** to get out of **SWITCH-CASE** statements.<br />
You cannot use **continue** to continue the compiling flow because **continue** is only accepted in ***for-loops***.<br />
If you want to have all of the conditions evaluated, just list cases without *break*

### References: 
1. [Boolean expression](http://www.cs.ecu.edu/karl/3300/spr14/Notes/C/Elementary/boolean.html#:~:text=Boolean%20values%20and%20operations,and%20constant%20false%20is%200.)
2. [Short-circuit](https://www.geeksforgeeks.org/short-circuiting-in-c-and-linux/)
3. [Ternary Operator](https://www.w3schools.com/cpp/cpp_conditions_shorthand.asp)
4. Stackflows