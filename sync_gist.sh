#!/usr/bin/env bash

GIST_ID="16da7be5123724fcf6eccc25581cef5a"

gh gist clone "$GIST_ID" gist -- --depth 1
files=$(comm -23 <(ls solutions) <(ls gist))

for file in $files; do
  echo "Uploading $file to gist"
  gh gist edit "$GIST_ID" -a "solutions/$file"
done

rm -rf gist
