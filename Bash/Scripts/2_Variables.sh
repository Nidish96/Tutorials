#! /bin/sh

# How to use variables
var=Hello
echo $var
var="Hello World"
echo $var
var=7+5
echo $var

# Reading User input
echo "Type in Text : "
printf "Type in Text : "
read var
echo $var

# Some Miscellaneous Stuff
echo "$var"
echo '$var'
echo \$var

exit 0
