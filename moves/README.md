Program to check if a sequence of characters 'A' or 'B' can be added to generated a target string from an initial string.

The following moves are valid:
==============================
1. Appending character 'A' to the end of the initial string.
2. Reversing the initial string and appending character 'B' to the end of the string.

Additional constraints:
=======================
1. Initial string cannot be empty or longer than 999 characters.
2. Target string cannot be empty or longer than 1000 characters.
3. Initial and target strings cannot contain any characters other than 'A' and 'B'.

Return Values:
===============
"Possible" if a sequence of valid moves can be made to change initial string to the target.
"Impossible" otherwise or if additional constraints are not met.

Examples:
=========
Initial String:        "B"
Target String:         "ABBA"
Expected Return Value: "Possible"

Initial String:        "AB"
Target String:         "ABBA"
Expected Return Value: "Impossible"

Initial String:        "BA"
Target String:         "ABBA"
Expected Return Value: "Possible"

---

