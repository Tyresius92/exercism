Hi!

This is a pretty good solution to this problem!

I have a couple of comments:

- You are using `parseInt` to convert to a number. The parseXXX family is great if you do not know if the input is a number, but when you know it, it's often better to use the stricter `Number(...)` function.
- In the last exercise (`Resistor Color`), we built out a helper function which helps us get the code for a particular color. Could we re-use that here? That way, if we ever wanted to represent the relationship between the colors and the values (using an object, or a map, for instance), we only have to change how to get the color code in one place.

Please let me know if you have any questions!

---

Finally, and this is pretty minor, at Exercism we don't promote defensive programming. Unless the test suite demands that you check for error conditions, we don't require you to do so. :)
