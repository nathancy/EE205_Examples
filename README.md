# GitHub Commands
Git is a type of Version Control System (VCS) that helps developers to work together and maintain a complete history of their work.

Listed below are the functions of a VCS:

* Allows developers to work simultaneously.
* Does not allow overwriting each other’s changes.
* Maintains a history of every version.

Git allows groups of people to work on the same documents (often code) at the same time, and without stepping on each other's toes. It's a distributed version control system.

To check what branch you're on:
```
git branch
```

To check all branches on repo:
```
git branch -r
```

To make new branch:
```
git branch <branchname>
```

To switch to branch:
```
git checkout <branchname>
```

To get new changes:
```
git fetch --all
```

To check differences between last commit and current changes:
```
git diff <filename>
```

To get changes from GitHub to local
```
git pull origin <branchname>
```

To rebase changes from master onto your branch. Get latest updates while still working on your branch. Normally ONLY DO THIS WHEN YOU JUST DO FRESH COMMIT ON YOUR BRANCH. Otherwise you will get merge errors. 
```
git fetch --all
git checkout master
git pull origin master
git checkout <your_branch>
git rebase origin/master
```

If you get merge errors, follow the special command down there and above steps again.

To view commit history
```
git log
```

## To upload changes to your branch on GitHub

Step 1 (Add files)
```
git add <filenames>
```

Step 2 (Check to ensure the files are correct)
```
git status
```

Step 3 (Commit files to history)
```
git commit -m "Add message here"
```

Step 4 (Push to branch)
```
git push origin <branchname>
```

## To merge changes from branch into master branch 

Go on GitHub and submit a pull request

## To merge changes from master into your working branch

MAKE SURE you are on your branch (do git branch to make sure)

```
git merge master
```

## To avoid having to enter credentials every time (enter both commands)

```
git config credential.helper store
``` 

then enter this:

```
git config --global credential.helper 'cache --timeout 7200000000000'
```

## Special commands (BE CAREFUL)

To reset EVERYTHING inside the entire project back to the latest commit. VERY VERY useful when you try to do some experiment and you screw up the project. It's like system restore for github project. BE VERY CAREFUL WHEN USING IT. IT WILL WIPE PERMANENTLY AND YOU CANNOT REVERT. 
```
git reset --hard HEAD
```

# Vim Shortcuts

### Editing Text
Enter insert mode to type text
```
i
```

Enter insert mode at end of current line
```
A
```

Enter insert mode at beginning of current line
```
I
```

Begining a new line below the cursor
```
o
```

Replace current character
```
r + <desired character>
```

Delete current line
```
dd
```

Delete next word
```
dw
```

Delete current line and enter insert mode
```
cc
```

Delete character at cursor
```
x
```

Delete to beginning of a line
```
d0
```

Delete to end of a line
```
d$
```

### Movement and Navigation
Go to top of page
```
gg
```

Go to bottom of page
```
G
```

Go up a character
```
k
```

Go down a character 
```
j
```

Go left one character
```
h
```

Go right one character
```
l
```

Go down a page
```
ctr + f
```

Go up a page
```
ctr + b
```

Move to next word
```
w
```

Move backwards one word
```
b
```

Move cursor to beginning of line
```
0
```

Move cursor to end of line
```
$
```

### Copy-Paste
Copy current line into buffer
```
yy
```

Paste
```
p
```

Undo the last operation
```
u
```

Redo the last undo
```
ctr + r
```

### Search
Search document for text
```
/search_text
```

Move to next instance of the result from search
```
n
```

### Other
Format entire document
```
gg=G
```

### Command Line
Delete stuff on line
```
ctr + l
```
