/*
GITHUB is basically used like a TERMINAL which works like UNIX ka terminal (not window linux or mac)
On GitBash terminal you can run Python , C lang etc like in VSC

Step1: Go to folder GITHUB ---right click---Select GITBASH here
        gitbash is a terminal. This has Commandline, ise use karne se hamare haath mein zyada control rahega 
        gitGUI , we avoiding using it because isme Commandline nahi hai

Step2: LETS CONFIGURE OUR GIT PAGE 
        type ---> git config --global user.name Lillfiah
                  git config --global user.email lillfiah@gmail.com  

        Code so far:
            Faeka@LAPTOP-ET7D87TO MINGW64 /c/GITHUB
            $ git config --global user.name Faeka

            Faeka@LAPTOP-ET7D87TO MINGW64 /c/GITHUB
            $ git config --global user.email faeka6@gmail.com

            Faeka@LAPTOP-ET7D87TO MINGW64 /c/GITHUB
            $ git config --global user.email
            faeka6@gmail.com

            Faeka@LAPTOP-ET7D87TO MINGW64 /c/GITHUB
            $ git config --global user.name
            Faeka

            Faeka@LAPTOP-ET7D87TO MINGW64 /c/GITHUB
            $

Step3: Kisi Repository ko paane k liye you have two ways
            1. init command
                    - yaha you are initialising a folder, toh saara kaam shuru se start karrahe ho
            2. Cloning
                    - here server se saara code aapke paas aayega

//LEARNING INTI COMMAND
type---> git init
message received-- "Initialisegit d empty Git repository in C:/GITHUB/.git/"
so it formed a .git folder

type---> ls lrt
        shows all the hidden commands

type---> git status
to check what folders are present in this folder 


Untracked       Unmodified      Modified        Staged
--------add the file--------------------------------->
                >--edit the file--->
                                    >-stage the file->
<---remove thefile-----<
                    M<---------------commit----------<


UNTRACKED FILE--(add file)---> STAGED---(commit the file)--->UNMODIFIED----(modify/make changes)--->MODIFIED---(stage again)---->STAGED----(commit)---->UNMODIFIED


1. UNTRACKED- yaha hamari file Stage mein hoti hai, GIT ne hamari file abtak track nahi ki hai, git ko aapki file se kuch matlab nahi hai
        
                then you add a file ----thereby git sees your file and record its changes
                (files who's changes you don't wana record- log files, binary files, etc, ye saare automaticcslly generate hoti hai hence aapko matalb nahi ki ye kaise aur kab genrate hui h, )
                Aapko apne source code se matlab hai jo aapne khud likha hai, isliye aap sirf uske changes ko record karoge

        hence to Track our file we put it in staging area

2. Staging area 
        -THIS IS MAIDAAN
        -Staging area (pose mein khade hona), Commit hona(snapshot /photo khich jana)
        - yaha vo cheezein daalte hai jo COMMIT hojayega soon in future
                - like we'll commit "index.html"
        Lets say you worked on 1.html, 2.html, 3.html, 4.html
        Now that if you've completed working on  1 and 2, you Staged these files and commit them, and because you're not sure about 3 and 4,  you'll not stage this 


3. Unmodified area
        ye file ab aapke snapshot mein jaa chuki hai, GIT has recorded your file
        now this is a UNMODIFIED FILE in git

        ab aap isko edit kar sakte ho!

4. Modified area
        if you edit the file now, it will be modified and, it will come to modified area

        once you modify it , you'll have to STAGE IT Again

        so firse vo stage area mein aajayegi
        and firse use commit karna padega so it goes back to UNMODIFIED zone(committed zone)


UNTRACKED FILE--(add file)---> STAGED---(commit the file)--->UNMODIFIED----(modify/make changes)--->MODIFIED---(stage again)---->STAGED----(commit)---->UNMODIFIED


1. To Stage a file/Track a file command:
        git add index.html

2. To check Status 
        git status
        (staged files shows in green text)--->it needs to be committed atleast
        (unstaged files shows in red code)--->can't be committed without staging


3. To commit command:
        git commit
        (now a vim editor will be opened)
        (a commit command totally saves a staged file to the server, remember there's no way back from a committed file)
        type- a comment above             //this is a message i've given this change source, 
        To exit this vim editor-       
                        Press Esc
                        Type ":wq" in the INSERT section 

4. To create a new file
        touch hello.html

5. To add ALL files in the staging area AT ONCE:
        git add -A

Now if you edit any of these tracked files, the git status will show it under "MODIFIED: file"
hence a modified file needs to be STAGED and COMMITTED again!!!!


6. Shortcut to Commit (instead of using esc :wq):
        git commit -m "write your comment jere"
        (this can be used after initial commit)


7. To clear the terminal
        clear

8. To recover last edit
        git checkout name.exe
        (this will match your working directory ko last commit)
        
9. To recover last edit of all the files in this folder again
        git checkout -f

10. To check logs of all previous edits done
        git log
            this shows you 
                Author name & mail
                Date of modification
                Comment left by the author
            example:
                Author: faeka <faeka6@gmail.com>
                Date:   Wed Jan 26 15:58:03 2022 +0530
                        hello im the comment
        git log -p -5
            so this shows you only last 5 edit logs
            HERE IT also SHOWS MORE INFORMATION OF CHANGES IN THE COMMIT
            like 
                text removed
                text added
                text pasted
        
    TO ESCAPE FROM THIS LOG PAGE PRESS q

11. To check changes in the UNSTAGED file
        git diff

        EXAMPLE:
            (i added "mickey mouse is my favourite" on a new line)
            wrote git diff on the terminal
            it showed me 
                -                                           
                +mickey mouse is my favourite
        IF YOU STAGE THE FILE(even without commit) git diff won't show anything
        because this command shows CHANGES IN UNSTAGED FILES
    git diff compares your WORKING TREE to Staging Area
        
12. To check changes in a Staged file
        git diff -- staged
        USE THIS COMMAND TO COMPARE "WORKING TREE TO STAGING AREA"


13. To COMMIT unstaged file directly without staging it
        git commit -a -m "enter your comment"
                STAGING a file also has benefits like you can keep a backup before actually saving it the server///You get 4 areas to work on:
                        Working area                    : yaha bindaas kaam karo
                        Modified file/Unstaged file     : kaam ko bass save karne par vo modified kehlata hai
                        Staged file                     : kaam ko stage kardo agar you feel itna kaam hogya hai
                        Commited file                   : commit only if you're totally sure poora kaam khatam hogaya

                ptr: After committing there's no way back, you can only check logs using git log 
                ptr: After staging you can still retrieve committed edit using git checkout command
                ptr: You can checkout an Unstaged/ Modified files to previous edit
                ptr: You can check a Staged file to previous edit using the compare command git diff -- staged 
        

14. To delete a file commited
        git rm name.exe                         //removes file totally from working directory and git's staging area
        git rm --cached name.exe                //Brings file from Staged area to Untracked area, so now you have to stage and commit this file again

15. To check all the files present in this folder
        ls

16. To get status of ONLY MODIFIED FILE (insimplified form)
        get status -s
                shows data as:
                green M = shows MODIFIED + just staged files
                red M   = shows MODIFIED + unstaged files
                green D = recently deleted file (deleted using rm)
                red ??  = for untracked files
                green A = never committed files
                                                        an experiment:
                                                                                                                        
                                                                modified 1github.c
                                                                modified 2.c
                                                                deleted hi.html

                                                                check status -s
                                                                red M for 1github.c
                                                                red M for 2.c
                                                                green D for hi.html

                                                                staging 1github.c 
                                                                git add 1github.c

                                                                check status -s
                                                                green M for 1github.c
                                                                red M for 2.c
                                                                green D for hi.html

                                                                modifying 1github.c again and save

                                                                check status -s
                                                                greenM + red M for 1gitub.c
                                                                red M fir 2.c
                                                                


17. To ignore a file while testing/ammending/pushpull/server par bhejna and lana to save data and make process faster
        touch .gitignore
        git add -A
        (Now the file names you enter in this .gitignore created will be ignored by the status!!!)
        examplr:
        you opened .gitignore file in this folder
        you wrote there hi.html
        now whatever modifications are made or not made everything will be ignored in git status
        
        1. hello.log    //ignores all the hello.log named files in the entire depository(file)
        2. /hello.log   //ignores hello.log files only in the file where .gitignore is present!
        3. *.log        //ignored ALL the files with extension .log
        4. foldername/  //ignores the DIRECTORY/ folder named ke andr ke saare files











*/
