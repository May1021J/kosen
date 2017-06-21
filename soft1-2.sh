#!/bin/bash

x="$(cat $* |wc -l)"
echo $x
exit 0

