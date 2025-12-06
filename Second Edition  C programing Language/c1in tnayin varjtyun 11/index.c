/*Exercise 11 — How I would test the word-count program

To see if the word-count program actually works, I’d try to break it with different kinds of input. Some examples:

Start with completely empty input.
Just press Ctrl+D (or Ctrl+Z on Windows). The program should say there are zero words.

Try input that is only spaces, tabs, or blank lines.
Something like five spaces, or a few empty lines. There shouldn’t be any words counted.

Use several spaces between words.
For example: hello world.
A buggy version might count this as more than two words.

Mix different whitespace characters.
A tab between words, a newline after another word, etc.
This checks whether the program treats all whitespace the same way.

Give it one extremely long word.
Just type a huge string with no spaces. It should still be counted as one word.

Use punctuation stuck to words.
Something like: hello, world!
Even though punctuation is there, it should still detect two words.

End the input without a newline.
Type lastword and immediately end the input.
Some badly-written programs don’t count the final word unless there’s a newline.

These kinds of inputs usually expose any bugs in how the program decides where a word begins and ends.*/


/*Exercise 1-11

How would you test the word-count program? What kinds of input are most likely 
to uncover bugs if there are any?*/