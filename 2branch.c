/*
when you do a little bit of modification in the code , and for some case it could end up creating so much of mess, that website hi down hojaye!
hence , to prevent oneself from such problems we use BRANCHING

so , branching mein aap ek apni alag copy banaa lete ho , and uspar kaam karte ho
i.e. MASTER BRANCH ko farak nai padhta hai
(do you remember : when you write git status command it shows the message "on branch master nothing to commit")

Master BRANCH : main branch 


COMMAND TO CREATE CLONE BRANCH
    git branch feature1
    (this command created a new branch named feature1)

    (You could check it's existence on git status command)

COMMAND TO CHECK THE EXISTING BRANCHES
    git branch

COMMAND TO SWITCH BETWEEN BRANCHES
    git checkout feature1
    (now you're switched to feature1 named branch, hence you're working with this branch  and all the changes are savd to this branch)

    (you could confirm this branch is switched on git status command)

COMMAND TO MERGE 2 BRANCHES
    git checkout 
    git merge feature1

COMMAND TO DIRECTLY CREATE A BRANCH AND SWITCH TO IT without checkout
    git checkout -b branchname
    
COMMAND TO DELETE A LOCAL BRANCH YOU CREATED
    git branch -d feature1
    
*/
