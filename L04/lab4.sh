#!/bin/bash

# Use First Argument As Working Directory
WDIR="$1"
cd "$WDIR"

FILE=${3:-file1.txt}

if [[ "$2" -eq 1 ]] ; then
    if [[ ! -f "$FILE" ]]  ; then
        echo "$USER" > "$FILE"
    fi 

elif [[ "$2" -eq 2 ]] ; then
    if [[ -f "$FILE" ]]; then
        if [[ -d "backup" ]]; then
            cp "$FILE" backup
        else
            mkdir backup
            cp "$FILE" backup
        fi
    fi

elif [[ "$2" -eq 3 ]] ; then 
    if [[ -f "backup/$FILE" ]]  ; then
        cp "backup/$FILE" ""
        rm "backup/$FILE"
    fi

fi

if [[ "$#" -gt 3 ]] ; then
    for (( i=4; i<=$#; i++ )); do
        echo "${!i}" >> "excess.txt"
        done

fi

echo "Finished"