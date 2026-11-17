AI REFLECTION

Tools:
I used an AI assistant to help debug output errors, simplify the C++ code to use only basic concepts, and review the explanations for how arrays and loops work together.

One Decision:
When I first ran the program, it printed a memory address (0x7ffcedc550e0) instead of the player's numbers because I accidentally printed the array name player instead of player[i]. Based on the debugging explanation, I decided to update the output loop to index each element with player[i] rather than rewriting the array structure, which fixed the display while keeping the loop simple.

A Specific Check:
After adding [i] inside the output loop, I ran the program in OnlineGDB and entered 3 6 7 5 3 against the generated winning digits 3 6 7 5 3. The program printed all five digits cleanly and displayed Matches: 5, confirming that both the element-by-element output and the index comparison logic worked properly.

Learning:
I can now declare fixed-size arrays, fill them with user input or random numbers using for loops, and access specific elements by index without printing memory addresses. I still need to practice writing input validation loops to handle cases where a user enters invalid numbers outside the 0 to 9 range.
