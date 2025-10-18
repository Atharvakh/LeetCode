#!/bin/bash

# Read the content of words.txt, replace multiple spaces with a single newline,
# then sort the words, count their occurrences, and sort by frequency.
cat words.txt | tr -s ' ' '\n' | sort | uniq -c | sort -nr | awk '{print $2, $1}'
