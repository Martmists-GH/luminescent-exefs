#!/usr/bin/env bash

nm=$1
dir=$2
source=$3
out=$4

echo $(find $dir -type f)
sed "s|SYMBOLS|$($nm $(find $dir -type f) | grep -E "[TW] _Z" | awk '{print $3}' | xargs | sed "s/ /; /g")|g" $source/exported.txt.template > $out/exported.txt
sed "s,ROOT_DIR,$source,g" $source/switch.specs.template > $out/switch.specs
