# DISCUSSION QUESTIONS AND ANSWERS

1. How does having a widely adopted C++ standard help game programmers?

- A standardised language means that code becomes completely portable between
  any compiler, so long as the compiler supports the standard, and the code
  itself does not contain compiler-specifics. In terms of game development,
  this makes it much easier to port games between platforms.
- Of course, C++ code is usually far from standard because the standard does
  not include platform-specifics (in terms of hardware and operating system).
  Thus each platform requires it own set of libraries. Generic libraries are
  available to make things easier (such as OpenGL and OpenAL for graphics and
  audio), but Windows API calls vary greatly from Linux API calls, and each
  needs its own set of libraries. However, with prudent use of preprocessor
  definitions (macros) and helper functions, it is possible to write generic
  cross-platform code.

2. What are the advantages and disadvantages of employing the using directive?

- The using-directive is often confused with a using-declaration. A
  using-declaration adds a given name to a local scope whereas a
  using-directive does not; it simply makes names accessible in the scope in
  which they were declared. For example:

  ```cpp
  namespace X { int i=0, j=0, k=0; }
  int k=42; // global scope

  // using-directive example:
  void f1 (void) {
    int i=0; // local scope
    using namespace X; // make names from X accessible
    i++; // local i
    j++; // X::j
    k++; // error: X::k or global k?
    ::k++; // global k
    X::k++; // X::k
  }

  // using-declaration example:
  void f2 (void) {
    int i=0; // local scope
    using X::i; // error: i declared twice!
    using X::j; // ok
    using X::k; // hides global k
    i++;
    j++; // X::j
    k++; // X::k
  }
  ```

- Polluting the global namespace should always be avoided in non-trivial
  applications, however we often encounter tutorial code with an implied using
  namespace std; directive in the global scope to help the student focus on the
  actual code. We would never do this in production code. Ideally, the only
  name that should ever be visible in the global scope is the global main
  function. Everything else should ideally be put in their own namespaces and
  only imported into a local scope as and when they are actually needed. If we
  should require additional names to be accessible in the global scope, then
  these should be limited to just those names which represent truly global
  concepts.
- Large programs tend to use a lot of namespaces and it can be tedious typing
  them out in full, particularly when they are nested or long and descriptive
  names. A using-declaration (at local scope) helps us to isolate just those
  names we are actually interested in, but if we need to use a lot of names
  from the same namespace, a using-directive helps cut down on the verbosity.
- Namespace aliases are also useful for reducing long, descriptive names to a
  less verbose form using to aid readability:

  ```cpp
  namespace American_Telephone_and_Telegraph { /_ ... _/ } // too long
  // ...
  namespace ATT = American_Telephone_and_Telegraph; // alias
  ```

- You might ask why the programmer didn't simply use ATT in the first place,
  but short names greatly increase the risk of a name-clash. Thus it is better
  for the programmer to introduce shorthand aliases as and when they are
  actually required.
- Naturally, we should avoid using-directives, using-declarations and namespace
  aliases in headers, because we cannot predict exactly where those names might
  be included, resulting in namespace pollution that can lead to some very
  obscure or subtle errors that would be difficult to track down.

3. Why might you define a new name for an existing type?

- Because I want to create shorter names for types with long names.

4. Why are there two versions of the increment operator? What's the diffrence
   between them?

- When evaluation of a larger expressin, there will be 2 cases:
  - Increment the variable before evaluation.
  - Increment the variable after evaluation.
- Hence, there are 2 versions of the increment operator prefix increment (++i)
  and postfix increment (i++) accordingly.

5. How can you use constants to improve your code?

- Use it for all unchangeable value in the program, which need to have explicit
  meaning name or be consistent value.
