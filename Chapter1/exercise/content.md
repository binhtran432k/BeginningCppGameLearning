# Exercises

1. Create a list of six legal variable names -- three good choices and thres
   bad choices. Explain why each name falls into the good or bad category.

- Good choices:
  - good: all normal characters with semantic meaning
  - goodA0123: camelCase style with semantic meaning
  - good_b_0123: snake style with semantic meaning
- Bad choices:
  - a: not semantic
  - \_: not semantic nor visible
  - this_is_a_bad_long_name: is very long

2. What's displayed by each line in the following code snippet? Explain each
   result.
   ```cpp
   cout << "Seven divided by three is " << 7 / 3 << endl;
   cout << "Seven divided by three is " << 7.0 / 3 << endl;
   cout << "Seven divided by three is " << 7.0 / 3.0 << endl;
   ```

- Line 1: 2. Because both 7 and 3 is integer (no floating point), the
  evaluation of the expression will be integer.
- Line 2: 2.33333. Because 7.0 is float (floating point), the evaluation of the expression will
  be float regardless the type of 3.
- Line 3: 2.33333. Because both 7.0 and 3.0 is float (floating point), the
  evaluation of the expression will be float.

3. Write a program that gets three game scores from the user and displays the
   average.

- See the `ex3` folder.
