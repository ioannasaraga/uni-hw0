Level 0 -> 1: ls, cat readme
Level 1 -> 2: ls, cat --help, cat ./-
Level 2 -> 3: ls, man cat, cat "spaces in this filename"
Level 3 -> 4: ls, find inhere, cat inhere/.hidden
Level 4 -> 5: ls, cd inhere, ls, du --help, find --help, cat --help, cat ./-file00, cat ./-file01, cat ./-file02, cat ./-file03, cat ./-file04, cat ./-file05, cat ./-file06, cat ./-file07 
Level 5 ->6: ls, cd inhere, man find, find -size 1033c,  cat ./maybehere07/.file2 
Level 6 ->7: ls, ls -la, man find, find --help, find -user bandit7 -group bandit6 -size 33c, find / -type f -user bandit7 -group bandit6 -size 33c,  cat /var/lib/dpkg/info/bandit7.password
