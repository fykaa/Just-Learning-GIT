/*
GITHUB is basically used like a TERMINAL which works like UNIX ka terminal (not window linux or mac)
On GitBash terminal you can run Python , C lang etc like in VSC

Step1: Go to folder GITHUB ---right click---Select GITBASH here
        gitbash is a terminal. This has Commandline, ise use karne se hamare haath mein zyada control rahega 
        gitGUI , we avoiding using it because Commandline nahi hai

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
                     <---------------commit----------<


UNTRACKED FILE--(add file)---> STAGED---(commit the file)--->UNMODIFIED----(modify/make changes)--->MODIFIED---(stage again)---->STAGED----(commit)---->UNMODIFIED


1. UNTRACKED- yaha hamari file Stage mein hoti hai, GIT ne hamari file abtak track nahi ki hai, git ko aapki file se kuch matlab nahi hai
        
                then you add a file ----thereby git sees your file and record its changes
                (files who's changes you don't wana record- log files, binary files, etc, ye saare automaticcslly generate hoti hai hence aapko matalb nahi ki ye kaise aur kab genrate hui h, )
                Aapko apne source code se matlab hai jo aapne khud likha hai, isliye aap sirf uske changes ko record karoge

        hence to Track our file we put it in staging area

2. Staging area 
        -THIS IS MAIDAAN
        -Staging area (pose mein khade hona), Commit hona(snapshot /photo khich jana)
        - yaha vo cheezein daalte hai jo COMMIT hojayega
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
        and firse use commit karna padega








UNTRACKED FILE--(add file)---> STAGED---(commit the file)--->UNMODIFIED----(modify/make changes)--->MODIFIED---(stage again)---->STAGED----(commit)---->UNMODIFIED


1. To Stage a file/Add a file command:
        git add index.html

2. To check Status 
        git status
        (staged files shows in green area)
        (it needs to be committed atleast once)

3. To commit command:
        git commit
        (now a vib editor will be opened)
        type- Initial commit                    //this is a message i've given this change source, 
        To exit this vib editor-       
                        Press Esc
                        Type ":wq" in the INSERT section 

4. To create blank files
        touch hello.html

5. To add all files in the staging area togehter:
        git add -A

6. 















*/
