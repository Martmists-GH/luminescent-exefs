#!/usr/bin/env bash

nm=$1
dir=$2
source=$3
out=$4

sed s/SYMBOLS/$($nm $dir/**/*.obj | grep -E "[TW] _Z" | awk '{print $3}' | xargs | sed "s/ /; /g")/ $source/exported.txt.template > $out/exported.txt
sed "s,ROOT_DIR,$source,g" $source/switch.specs.template > $out/switch.specs
