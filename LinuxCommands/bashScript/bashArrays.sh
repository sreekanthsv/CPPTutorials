#!/bin/bash
# variables
# arrays in bash
# size of array & printing each anvery elements in a array
# https://www.cyberciti.biz/faq/bash-for-loop/

countries=( india srilanka pak)


#size of an array
echo ${#countries[@]}


#each and every element of array
echo ${countries[@]}

#iterating over and array
for country in ${countries[@]}
 do 
    echo " $country  is a country  in Asia "
 done   


for i in 1 2 3 4 5
do
   echo "Welcome $i times"
done

for i in {1..5}
do
   echo "Welcome $i times"
done

for i in {0..10..3}
do 
  echo "Welcome $i times"
done



countries=( india srilanka pak)

for country in ${countries[@]}
 do 
    echo " $country  is a country  in Asia "

    if [ "${country}" == "srilanka" ]
    then
        break
    fi
 done   

 for files in  *
 do 
    echo " $files  is in current folder "
 done 