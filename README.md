# Group-Anagrams
Given a list of words, group them by anagrams

## Idea
First thing to do is sort each word, and use the sorted word as a key for the hashmap.
Next is to insert each word into the hash map, thus grouping anagrams. This solution takes O(mlogm * n) because we are sorting each word. which takes up most of the time. Space is O(n) because of hashmap.
