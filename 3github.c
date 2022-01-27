/*

Github is a hosting platform BY MICROSOFT
    Alternative GIT hosting platforms are : BITBUCKET GITLAB 

REPOSITORY---A FILE
    REMOTE repo- (ORIGIN) a file at the server of the internet
    LOCAL  repo- (BRANCH) a file in our pc

COMMAND to connect local and remote GIT repository
    Typing this in the local git terminal:
    git remote add origin https://github.com/fykaa/Just-Learning-GIT.git

COMMAND to check WHICH REMOTE Repos are connected
    git remote
    (this just gives name of the remote repository connected)
    git remote -v
    (this also gives the information i.e. url of remote fetch and push)

COMMAND to PUSH 'master' branch in 'origin' repository
    git push origin master
    (this is possible only if the origin named repo is public in the server, varna github aapko ye jaankari kyu degi ki ye available hai yanahi hai)
    (To gain read/write access in a private repo of github you need to change settings)
    
    git push -u origin master
    (here we can specify ki iss branch mein hi push karna hai ye command)
    git push 
    (here previous branch mein push hojayega)



GIT CLONE
    copy url from github someones existing library
    git clone url foldername
    (if you don'T give foldername it will clone it to a folder named as the URL's REPOSITORY'S name)
        (like here i cloned a repo from github named cpp , so this created a folder named cpp)

*/



/*

SO GUYS!

WE GOT ACCESS TO THESE COOL FEATURES USING GITHUB AND GIT !!!

everytime you make a change in the file in your local pc master branch you can:
Edit it and just save it (this just modifies)                                           ctrl+s on the file
Edit it and add it to staged (not committed yet)                                        git add -A
Edit it and commit it (now you can just push it to remote repository)                   git commit -a -m ""
Edit it IN DIFFERENT BRANCHES (and then merge it if you feel the edit is worthy)        git checkout -b newbr
Edit it in the remote repository itself                                                 on github
If you edit it in local repository, AFTER commiting push the file to remote server by:  git push -u origin master
    here origin is name of remote repo
    here master is name of local branch
