#!/bin/bash
# variables
# arrays in bash
# size of array & printing each anvery elements in a array


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