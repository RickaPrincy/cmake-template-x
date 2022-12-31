#!/bin/bash

read -p "Message anle commit: " commit_message 
read -p "Ataotsika oviana le commit XD (YYYY-MM-DD HH:mm:ss): " user_date

if ! date -d "$user_date" &> /dev/null; then
  echo "Verifieo hoe tena ohatran'izao ve ilay date : YYYY-MM-DD HH:mm:ss"
  exit 1
fi

git commit -m "$commit_message"
clear
GIT_COMMITTER_DATE="$user_date" git commit --amend --no-edit --date "$user_date"
echo "*****************************************************"
echo "Eny ary, vita ny commit nao" 
